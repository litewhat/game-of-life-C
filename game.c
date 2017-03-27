#include <stdio.h>
#include "cell.h"


cell state_now[SIZE][SIZE];   // global only for testing
cell state_future[SIZE][SIZE];// global only for testing
int NEIGHBOURS_STATE_BUFFER[8];

int i;
int j;

int main(char ** argv, int argc) {
    initialize_board(state_now);
    initialize_board(state_future);
    
    cell * c = get_cell(2, 2, state_now);
    c->is_alive = 1;
       
    c = get_cell(2, 3, state_now);
    c->is_alive = 1;

    c = get_cell(2, 4, state_now);
    c->is_alive = 1;
    
    get_neighbours_states(2, 2, state_now, NEIGHBOURS_STATE_BUFFER);
    printf("Living neighbours: %d\n", count_living_neighbours(NEIGHBOURS_STATE_BUFFER));
    get_neighbours_states(2, 3, state_now, NEIGHBOURS_STATE_BUFFER);
    printf("Living neighbours: %d\n", count_living_neighbours(NEIGHBOURS_STATE_BUFFER));
    get_neighbours_states(2, 4, state_now, NEIGHBOURS_STATE_BUFFER);
    printf("Living neighbours: %d\n", count_living_neighbours(NEIGHBOURS_STATE_BUFFER));
    
    get_future_state(state_now, state_future, NEIGHBOURS_STATE_BUFFER);

    board_repr(state_now);
    printf("-----------------------------");
    board_repr(state_future);
}

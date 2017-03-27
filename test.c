#include <stdio.h>
#include "cell.h"

cell state_now[SIZE][SIZE];   // global only for testing
cell state_future[SIZE][SIZE];// global only for testing
int NEIGHBOURS_STATE_BUFFER[8];

int main (char ** argv, int argc) {
    initialize_board(state_now);
    cell * c = get_cell(1, 2, state_now);
    cell_repr(c);
    c = get_cell(0, 0, state_now);
    cell_repr(c);
    c = get_cell(20, 20, state_now);
    cell_repr(c);
    c = get_cell(1, 1, state_now);
    c->is_alive = 1;
    cell_repr(c);
    c = get_cell(19, 19, state_now);
    cell_repr(c);
    get_neighbours_states(0, 0, state_now, NEIGHBOURS_STATE_BUFFER);
    int i;
    for(i = 0; i < 8; i++) {
        printf("%d ", NEIGHBOURS_STATE_BUFFER[i]);
    }
    printf("\n");

    board_repr(state_now);
}

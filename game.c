#include <stdio.h>
#include "cell.h"

#define SIZE 5

cell state_now[SIZE][SIZE];   // global only for testing
cell state_future[SIZE][SIZE];// global only for testing
FILE * file;

int i;
int j;

int main(char ** argv, int argc) {
    cell * c;

    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            c = &state_now[i][j];
            c->x = j;
            c->y = i;
            c->is_alive = 0;
            printf("%d, %d, %d \n", c->x, c->y, c->is_alive);
        }
    }
    
    c = get_cell(state_now, 1, 2);
    printf("Cell 1,2 is: %d %d %d \n", c->x, c->y, c->is_alive);

}

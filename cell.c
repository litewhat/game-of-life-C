#include "cell.h"

int position_on_board(int x, int y, int board_size) {
    if(x >= 0 && x < board_size && y >= 0 && y < board_size) 
        return 1;
    return 0;
}

cell * get_cell(int x, int y, cell board[][SIZE]) {
    if(position_on_board(x, y, SIZE))
        return &board[y][x];
    return NULL;
}

void get_neighbours_states(int x, int y, cell board[][SIZE], int BUFFER[]) {
    int i, j, x_n, y_n;
    for(i = -1; i < 2; i++) {
        for(j = -1; j < 2; j++) {
            if (i == 0 && j == 0)
                continue;
            cell * c = get_cell(x, y, board);
            x_n = c->x + j;
            y_n = c->y + i;
            if(position_on_board(x_n, y_n, SIZE)) {
               cell * neighbour = get_cell(x_n, y_n, board);
               *BUFFER++ = neighbour->is_alive;
            } else {
                *BUFFER++ = -1;
            }
        }
    }
}

void cell_repr(cell * c) {
    if(c != NULL) {
        printf("Given cell is: %p\n", c);
        printf("x:       %d\n", c->x);
        printf("y:       %d\n", c->y);
        printf("is_alive %d\n", c->is_alive);
    } else {
        printf("Given cell is: %p\n", c);
    }
}

void initialize_board(cell board[][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            cell * c = get_cell(j, i, board);
            c->x = j;
            c->y = i;
            c->is_alive = 0;
        }
    }
}

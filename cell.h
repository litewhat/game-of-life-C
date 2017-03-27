#include <stdio.h>
#define SIZE 20
#define NEIGH_BUFFSIZE 8

typedef struct {
    int x, y;
} point;

typedef struct {
    int x, y, is_alive;
} cell;

/**
 * Puts values of neighbours state in given buffer
 */
void get_neighbours_states(int x, int y, cell board[][SIZE], int BUFFER[]); 

int count_living_neighbours(int BUFFER[]);

int count_dead_neighbours(int BUFFER[]);

/**
 * Returns pointer to the cell of given position.
 */
cell * get_cell( int x, int y, cell board[][SIZE]);

/**
 * Prints given cell's state.
 */
void cell_repr(cell * c);

/**
 * Function checks if given position exists on board that
 * have size 'board_size'.
 */
int position_on_board(int x, int y, int board_size);

/**
 * Check what future state of cell is going to be.
 * Sets this state on future board.
 */
void get_future_state(cell now[][SIZE], cell future[][SIZE], int BUFFER[NEIGH_BUFFSIZE]);

/**
 * Sets coordinates from (0, 0) to (SIZE - 1, SIZE - 1) to every
 * cell on the board.
 */
void initialize_board(cell board[][SIZE]);

/**
 * String representation of the board.
 */
void board_repr(cell board[][SIZE]);

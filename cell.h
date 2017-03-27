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

/**
 * Returns pointer to the cell of given position.
 */
cell * get_cell( int x, int y, cell board[][SIZE]);

/**
 * Prints given cell's state.
 */
void cell_repr(cell * c);


int position_on_board(int x, int y, int board_size);


void initialize_board(cell board[][SIZE]);
///**
// * Returns pointer to the array of cell's neighbours.
// * It also checks if neighbours is on the board.
// */
//cell * get_neighbours(cell * cell);
//
///**
// * Returns array of all living cells on the board.
// */
//cell ** get_living_cells(cell board[][SIZE]);
//
///**
// * Returns all significant cells of the board.
// */
//cell ** get_significant_cells(cell board[][SIZE]);
//
///**
// * Returns 'future' state from given 'now' state.
// */
//cell ** future(cell now[][SIZE]);

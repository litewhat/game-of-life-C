

typedef struct {
    int x, y, is_alive;
} cell;

/**
 * Returns pointer to the cell of given position.
 */
cell * get_cell(cell ** board, int x, int y);

/**
 * Returns pointer to the array of cell's neighbours.
 * It also checks if neighbours is on the board.
 */
cell ** get_neighbours(cell * cell);

/**
 * Returns array of all living cells on the board.
 */
cell ** get_living_cells(cell ** board);

/**
 * Returns all significant cells of the board.
 */
cell ** get_significant_cells(cell ** board);



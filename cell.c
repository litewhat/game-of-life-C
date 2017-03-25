#include "cell.h"


cell * get_cell(cell ** board, int x, int y) {
    return &board[y][x];
}

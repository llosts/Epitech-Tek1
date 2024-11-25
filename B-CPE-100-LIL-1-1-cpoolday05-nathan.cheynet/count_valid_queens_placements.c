/*
** EPITECH PROJECT, 2024
** count_valid_queens_placements
** File description:
** n queen problem
*/

static int my_queen_is_safe(int chessboard[], int row, int col, int n)
{
    for (int i = 0; i < row; i++) {
        if (chessboard[i] == col)
            return 0;
        if (chessboard[i] - i == col - row || chessboard[i] + i == col + row)
            return 0;
    }
    return 1;
}

static int my_queens_solver(int chessboard[], int row, int n)
{
    int solution = 0;

    if (row == n)
        return 1;
    for (int col = 0; col < n; col++) {
        if (my_queen_is_safe(chessboard, row, col, n) == 1) {
            chessboard[row] = col;
            solution += my_queens_solver(chessboard, row + 1, n);
        }
    }
    return solution;
}

int count_valid_queens_placements(int n)
{
    int max_size = (n > 0) ? n : 0;
    int chessboard[max_size];

    if (max_size == 0)
        return 0;
    return my_queens_solver(chessboard, 0, n);
}

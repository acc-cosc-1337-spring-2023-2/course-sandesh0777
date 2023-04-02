#include "tic_tac_toe.h"
#include <iostream>

void TicTacToe::start_game(std::string first_player)
{
    clear_board();
    player = first_player;
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_winner();
    set_next_player();
}

void TicTacToe::display_board() const
{
    std::cout << "\n";
    for (int i = 0; i < pegs.size(); i++)
    {
        std::cout << pegs[i];
        if ((i + 1) % 3 == 0)
        {
            std::cout << "\n";
        }
    }
}

bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (int i = 0; i < 7; i += 3)
    {
        if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return ((pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ") ||
            (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " "));
}

void TicTacToe::set_winner()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        winner = player;
    }
    else if (check_board_full())
    {
        winner = "C";
    }
}

void TicTacToe::set_next_player()
{
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() const
{
    for (auto peg : pegs)
    {
        if (peg == " ")
        {
            return false;
        }
    }
    return




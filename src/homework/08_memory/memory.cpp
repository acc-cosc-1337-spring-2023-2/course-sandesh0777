#include "tic_tac_toe.h"
#include "memory.h"
#include <iostream>

using namespace std;

bool TicTacToe::game_over()
{
    if (check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if (std::all_of(pegs.begin(), pegs.end(), [](string i){return i != " ";}))
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        clear_board();
        winner.clear();
        player = first_player;
    }
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    if (!game_over())
    {
        player == "X" ? player = "O" : player = "X";
    }
}

std::string TicTacToe::get_player() const
{
    return player;
}

std::string TicTacToe::get_winner() const
{
    return winner;
}

std::vector<std::string> TicTacToe::get_pegs() const
{
    return pegs;
}

bool TicTacToe::check_column_win()
{
    for (std::size_t i = 0; i < pegs.size(); i += 3)
    {
        if (pegs[i] == pegs[i+3] && pegs[i+3] == pegs[i+6] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    for (std::size_t i = 0; i < pegs.size(); i += 3)
    {
        if (pegs[i] == pegs[i+1] && pegs[i+1] == pegs[i+2] && pegs[i] != " ")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " ")
    {
        return true;
    }
    else if (pegs[2] == peg

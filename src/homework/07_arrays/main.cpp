#include "TicTacToe.h"
#include <iostream>
#include <string>

using namespace std;

void display_results(TicTacToe game);

int main()
{
    string play_again = "Y";
    while (play_again == "Y")
    {
        TicTacToe game;
        string player_choice;
        cout << "Enter X or O to choose the first player: ";
        cin >> player_choice;
        game.start_game(player_choice);

        while (!game.game_over())
        {
            int position;
            cout << "Player " << game.get_player() << " enter a position (1-9): ";
            cin >> position;
            game.mark_board(position - 1);
            game.display_board();
        }
        display_results(game);
        cout << "Would you like to play again? (Y/N): ";
        cin >> play_again;
    }
    cout << "Thanks for playing!\n";
    return 0;
}

void display_results(TicTacToe game)
{
    if (game.get_winner() == "X" || game.get_winner() == "O")
    {
        cout << "Congratulations! Player " << game.get_winner() << " wins!\n";
    }
    else
    {
        cout << "It's a tie!\n";
    }
}


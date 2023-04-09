#include "tic_tac_toe.h"
# include "memory.h"
#include <iostream>

using namespace std;

int main()
{
    TicTacToeManager manager;
    string again;
    int x, o, t;

    do
    {
        unique_ptr<TicTacToe> game;
        string player = "X";

        while (!game || game->game_over() == false)
        {
            cout << "\n\n" << player << " Turn\n";
            cout << *game;

            int position;
            cout << "\nEnter position from 1 to 9: ";
            cin >> position;

            try
            {
                game->mark_board(position);
                cout << "\n\n";
                cout << *game;

                player = player == "X" ? "O" : "X";
            }
            catch (const string& error)
            {
                cout << error << endl;
            }
        }

        cout << "Game Over\n";
        cout << *game;

        manager.save_game(*game);
        cout << manager << endl;

        cout << "Play Again? (Y/N): ";
        cin >> again;
    } while (again == "Y" || again == "y");

    manager.get_winner_total(o, x, t);
    cout << "\n\nFinal Score:\n";
    cout << "X wins: " << x << endl;
    cout << "O wins: " << o << endl;
    cout << "Ties: " << t << endl;
    cout << manager;

    return 0;
}
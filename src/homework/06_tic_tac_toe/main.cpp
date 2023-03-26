# include <iostream>
# include <string>
# include "tic_tac_toe_3.h"

using namespace std;
int main()
{
    std::string first_player;
    std::cout << "Enter first player (X or O): ";
    std::cin >> first_player;

    TicTacToe game;
    game.start_game(first_player);

    char play_again = 'y';
    while (play_again == 'y')
    {
        int position;
        while (!game.game_over())
        {
            std::cout << game.get_player() << ", enter a position (1-9): ";
            std::cin >> position;
            game.mark_board(position);
            game.display_board();
        }

        game.clear_board();
        std::cout << "Game over. Play again? (y/n): ";
        std::cin >> play_again;
    }

    return 0;
}
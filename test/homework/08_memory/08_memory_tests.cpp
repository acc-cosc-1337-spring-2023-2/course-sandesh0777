#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
# include "tic_tac_toe.h"
# include "memory.h"

TEST_CASE("Test TicTacToe class", "[TicTacToe]")
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.get_player() == "X");
    game.mark_board(1);
    REQUIRE(game.get_player() == "O");
    REQUIRE(game.get_winner() == "");
    game.mark_board(2);
    REQUIRE(game.get_player() == "X");
    game.mark_board(3);
    REQUIRE(game.get_player() == "O");
    game.mark_board(4);
    REQUIRE(game.get_player() == "X");
    game.mark_board(5);
    REQUIRE(game.get_player() == "O");
    game.mark_board(7);
    REQUIRE(game.get_winner() == "O");
    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test TicTacToeManager class", "[TicTacToeManager]")
{
    TicTacToeManager manager;
    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1);
    game1.mark_board(2);
    game1.mark_board(3);
    manager.save_game(game1);
    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1);
    game2.mark_board(2);
    game2.mark_board(4);
    game2.mark_board(5);
    manager.save_game(game2);
    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);
    game3.mark_board(4);
    game3.mark_board(7);
    manager.save_game(game3);
    int x_win = 0, o_win = 0, ties = 0;
    manager.get_winner_total(o_win, x_win, ties);
    REQUIRE(x_win == 2);
    REQUIRE(o_win == 1);
    REQUIRE(ties == 0);
}

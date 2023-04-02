#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Tic Tac Toe game test cases")
{
    TicTacToe game;

    SECTION("Test start_game() function")
    {
        game.start_game("X");
        REQUIRE(game.get_player() == "X");

        game.start_game("O");
        REQUIRE(game.get_player() == "O");
    }

    SECTION("Test mark_board() function")
    {
        game.start_game("X");
        game.mark_board(1);
        REQUIRE(game.get_player() == "O");

        game.mark_board(2);
        REQUIRE(game.get_player() == "X");

        // Add more test cases here...
    }

    SECTION("Test check_column_win() function")
    {
        game.start_game("X");
        game.mark_board(1);
        game.mark_board(4);
        game.mark_board(2);
        game.mark_board(5);
        game.mark_board(3);

        REQUIRE(game.check_column_win() == true);
        REQUIRE(game.get_winner() == "X");
    }

    SECTION("Test check_row_win() function")
    {
        game.start_game("O");
        game.mark_board(1);
        game.mark_board(2);
        game.mark_board(4);
        game.mark_board(5);
        game.mark_board(7);

        REQUIRE(game.check_row_win() == true);
        REQUIRE(game.get_winner() == "O");
    }

    SECTION("Test check_diagonal_win() function")
    {
        game.start_game("X");
        game.mark_board(1);
        game.mark_board(2);
        game.mark_board(5);
        game.mark_board(3);
        game.mark_board(9);

        REQUIRE(game.check_diagonal_win() == true);
        REQUIRE(game.get_winner() == "X");
    }

}

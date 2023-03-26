#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
# include "tic_tac_toe_3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
    TicTacToe game;
    game.start_game("X");

    REQUIRE(game.game_over() == false);

    game.mark_board(1);
    REQUIRE(game.game_over() == false);

    game.mark_board(2);
    REQUIRE(game.game_over() == false);

    game.mark_board(3);
    REQUIRE(game.game_over() == false);

    game.mark_board(4);
    REQUIRE(game.game_over() == false);

    game.mark_board(5);
    REQUIRE(game.game_over() == false);

    game.mark_board(7);
    REQUIRE(game.game_over() == false);

    game.mark_board(6);
    REQUIRE(game.game_over() == false);

    game.mark_board(9);
    REQUIRE(game.game_over() == false);

    game.mark_board(8);
    REQUIRE(game.game_over() == true);
}
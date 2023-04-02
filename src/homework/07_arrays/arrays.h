# include <iostream>
#include <vector>
#include <string>

class TicTacToe
{
public:
    TicTacToe() = default;
    TicTacToe(int size) : pegs(size*size, " ") {}
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const { return player; }
    void display_board() const;
    bool game_over() const { return check_board_full() || winner != " "; }
    std::string get_winner() const { return winner; }
private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void set_next_player();
    bool check_board_full() const;
    void clear_board();
    std::string player;
    std::vector<std::string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    std::string winner{" "};
};
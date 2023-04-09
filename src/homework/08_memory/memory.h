
#include <iostream>
#include <vector>
#include <string>

class TicTacToe
{
public:
    TicTacToe() {}
    TicTacToe(int size) : pegs(size*size, " ") {}
    TicTacToe(std::vector<std::string> p, std::string winner) : pegs(p), winner(winner) {}

    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    std::string get_winner() const;
    std::vector<std::string> get_pegs() const;

    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

private:
    std::vector<std::string> pegs;
    std::string winner;

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void clear_board();
};


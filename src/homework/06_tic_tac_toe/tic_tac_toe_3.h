
# include <iostream>
# include <string>
# include <vector>

class TicTacToe
{
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;
    void clear_board();

private:
    void set_next_player();
    bool check_board_full();
    std::string player;
    std::vector<std::string> pegs{9, " "};
};
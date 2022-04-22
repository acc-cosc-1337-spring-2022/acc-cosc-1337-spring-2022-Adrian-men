//cpp
#include "tic_tac_toe_manager.h"

using std::string; using std::vector;

void TicTacToeManager::save_game(TicTacToe b)
{
    std::vector<TicTacToe>games;
    update_winner_count;
}

void TicTacToeManager::get_winner_total(int& x,int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(auto game: manager.games)
    {
        out<<game<<"\n";
    }

    out<<"O wins: "<<manager.o_wins<<"\n";
    out<<"X wins: "<<manager.x_wins<<"\n";
    out<<"TIES: "<<manager.ties<<"\n";

    return out;
}
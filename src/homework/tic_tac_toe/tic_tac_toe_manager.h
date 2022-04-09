//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int& t);
private:
    std::vector<std::string>games;
    int x_wins;
    int o_wins;
    int ties;
    void update_winner_count(std::string winner);

};

#endif

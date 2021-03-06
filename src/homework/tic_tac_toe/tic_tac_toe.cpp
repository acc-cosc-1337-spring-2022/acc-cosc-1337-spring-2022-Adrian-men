//cpp
#include "tic_tac_toe.h"

using std::string; using std::cout;

bool TicTacToe::game_over()
{
    if (check_row_win() == true)
    {
        set_winner();
    }
    else if (check_column_win() == true)
    {
        set_winner();
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }

}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board()const
{
    for(int i=0; i < 9; i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
} 

bool TicTacToe::check_column_win()
{
    if ((pegs[0] == "X" && pegs[1] == "X" && pegs [2]=="X")|| (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")|| (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
        {
            return true;
        }
}

bool TicTacToe::check_row_win()
{
    if ((pegs[0] == "X" && pegs[1] == "X" && pegs [2]=="X")|| (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")|| (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
        {
            return true;
        }
}

bool TicTacToe::check_diagonal_win()
{
    if ((pegs[0] == "X" && pegs[4] == "X" && pegs [8]=="X")|| (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"))
    {
        return true;
    }
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }

    else 
    {
        winner = "X";
    }
}

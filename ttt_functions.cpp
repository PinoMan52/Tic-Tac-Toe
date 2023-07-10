#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

void printBoard(std::vector<char> board) {
    std::cout << board[0] << " | "<< board[1] << " | " << board[2] << "\n---------\n" << board[3] << " | " << board[4] << " | " << board[5] << "\n---------\n" << board[6] << " | " << board[7] << " | " << board[8] << "\n";

  }

bool winCheck(std::vector<char> board, std::string winner) {
      //vertical wins
  if (board[0] == board[1] && board[1] == board[2]) {
      winMessage(board, winner);
      return true;
    } else if (board[3] == board[4] && board[3] == board[5]) {
      winMessage(board, winner);
      return true;
    } else if (board[6] == board[7] && board[6] == board[8]) {
      winMessage(board, winner);
      return true;
      //horizontal wins
    } else if (board[0] == board[3] && board[0] == board[6]) {
      winMessage(board, winner);
      return true;
    } else if (board[1] == board[4] && board[1] == board[7]) {
      winMessage(board, winner);
      return true;
    } else if (board[2] == board[5] && board[2] == board[8]) {
      winMessage(board, winner);
      return true;
      //diagonal wins
    } else if (board[0] == board[4] && board[0] == board[8]) {
      winMessage(board, winner);
      return true;
    } else if (board[2] == board[4] && board[2] == board[6]) {
      winMessage(board, winner);
      return true;
    } else {
      return false;
    }
}

void winMessage(std::vector<char> board, std::string winner) {
  if (board[0] == 'X') {
        winner = "Player 1";
      } else {
        winner = "Player 2";
      }
      std::cout << "Congratulations " << winner << "! you won!\n";
}

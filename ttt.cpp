#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main() {
  std::vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  printBoard(board);
  int turn = 9;
  std::string winner = "No one";
  while (turn > 0 && winCheck(board, winner) == false) {
    int choice = 0;
    if (turn % 2 != 0) {
      std::cout << "Player 1's turn. Enter value of square below:\n";
      std::cin >> choice;
      board[choice - 1] = 'X';
    } else if (turn % 2 == 0) {
      std::cout << "Player 2's turn. Enter value of square below:\n";
      std::cin >> choice;
      board[choice - 1] = 'O';
    }
    printBoard(board);
    winCheck(board, winner);
    turn--;
  }
  if (turn == 0 && winCheck(board, winner) == false) {
    std::cout << "It's a tie. " << winner << " won.\n";
  }
}

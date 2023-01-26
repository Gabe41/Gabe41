// Scissors cuts Paper.
// Paper covers Rock.
// Rock crushes Lizard.
// Lizard poisons Spock.
// Spock smashes Scissors.
// Scissors decapitate Lizard.
// Lizard eats Paper.
// Paper disproves Spock.
// Spock vaporizes Rock.
// (and as it always has) Rock crushes Scissors.

#include <iostream>
#include <stdlib.h>
 
int main() {
 
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "shoot! ";
  
  std::cin >> user;

  if (computer == user) {
    std::cout << "It's a tie!\n";
  } else if (computer == 1 && user == 2) {
    std::cout << "You win! C rock\n";
  } else if (computer == 1 && user == 3) {
    std::cout << "You loose! C rock\n";
  } else if (computer == 2 && user == 1) {
    std::cout << "You loose! C paper\n";
  } else if (computer == 2 && user == 3) {
    std::cout << "You Win! C paper\n";
  } else if (computer == 3 && user == 1) {
    std::cout << "You win! C scissors\n";
  } else if (computer == 3 && user == 2) {
    std::cout << "You loose! C scissors\n";
    }


}
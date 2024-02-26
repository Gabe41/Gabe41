#include <iostream>
#include "profile.hpp"

int main() {

  Profile gabe("Gabe P", 32, "PA", "USA", "he/him");
  gabe.add_hobby("learning how to code");
  gabe.add_hobby("wood working");
  gabe.add_hobby("riding my MTB");
  gabe.add_hobby("experimenting with interior design");
  std::cout << gabe.view_profile();

}
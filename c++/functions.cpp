#include <iostream>
#include <cmath>

double average(double num1, double num2) {
  double result = 0.0;
  result = (num1 + num2) / 2;
  return result;
}

int tenth_power(int num) {
  return std::pow(num, 10);
}

int main() {
  
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";

  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}
#include <iostream>
#include <cmath>
#include <vector>

bool is_palindrome(std::string text) {
    int left = 0;
    int right = text.length() - 1;

    while (left < right) {
        if (text[left] != text[right]) {
            return false; // If characters don't match, it's not a palindrome
        }
        left++;
        right--;
    }

    return true; // If the loop completes without finding non-matching characters, it's a palindrome
}

std::string needs_water(int days, bool is_succulent) {
  if (!is_succulent && days > 3) {
        return "Time to water the plant.";
  } else if (is_succulent && days <= 12) {
        return "Don't water the plant!";
  } else if (is_succulent && days >= 13) {
        return "Go ahead and give the plant a little water.";
  } else {
        return "Don't water the plant!";
  }
}

std::vector<int> first_three_multiples(int num) {
  std::vector<int> result = {1, 2, 3};
  for (int i = 0; i < result.size(); ++i) {
    result[i] *= num;
  }
  return result;
}

double average(double num1, double num2) {
  double result = 0.0;
  result = (num1 + num2) / 2;
  return result;
}

int tenth_power(int num) {
  return std::pow(num, 10);
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
  std::cout << needs_water(10, false) << "\n";

  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";

  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";

  

  
  
}
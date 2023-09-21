#include <iostream>

int main() {
  
  int year;
  
  year >= 1000 && year <= 10000;

  std::cout << "input year : \n";
  std::cin >> year;

  if (year > 999 || year <= 9999) {
    std::cout << "the year of ur choice is\n" << year << "\n";
  } else {
    std::cout << "something wrong definetly happening in ur head rn\n";
    return 0;
  } 

  if (year % 4 == 0) {
    std::cout << "its a leap year\n";
  } else if (year % 100 == 0 || year % 400 != 0) {
    std::cout << "its not a leap year\n";
  } else if (year % 400 == 0) {
    std::cout << "its a leap year\n";
  
}
}

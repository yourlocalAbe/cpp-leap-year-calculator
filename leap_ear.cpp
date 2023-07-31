#include <iostream>
int main() {
  int year;

  std::cout << "Whats the year on ur mind?\n";
  std::cin >> year;
  if (year >= 1000 && year <= 9999 ) {
    std::cout << "The year is " << year << "\n";
  } else {
    std::cout << "Antum tolol\n";
    return 0;
  }

  if (year % 4 == 0) {
    std::cout << "its a leap year\n";
  } else if (year % 100 != 0 && year % 400 != 0) {
    std::cout << "its not a leap year\n";
  } 
}
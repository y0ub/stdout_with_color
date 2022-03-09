#include <iostream>

#define RED "\033[1;31m"
#define RESET "\033[0m"

int main()
{
  std::cout << RED "Hello, World!!!!11!" << '\n';
  std::cout << "Good afternoon" << '\n';
  std::cout << RESET;
  std::cout << "Good night" << '\n';
}


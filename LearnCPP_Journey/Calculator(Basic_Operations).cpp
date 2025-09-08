// Basic calculator (+, -, *, /)

#include <iostream>


int main()
{
  int x, y;

  std::cout << "Enter two numbers, seperated by a space." << '\n';

  std::cin >> x >> y;

  std::cout << "Addition: " << x + y << '\n';
  std::cout << "Subtraction: " << x - y << '\n';
  std::cout << "Multiplication: " << x * y << '\n';

  if (y != 0)
    std::cout << "Division: " << static_cast<double>(x) / y << '\n';
  else
    std::cout << "Division: Undefined. Unable to divide by zero." << '\n';

  return 0;
}

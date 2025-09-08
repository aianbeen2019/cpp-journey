// Advanced calculator 

#include <iostream>


int main() 
{

  char op;
  int x{}, y{};

  std::cout << "Enter a mathematical operator (+, -, *, or /): " << '\n';
  std::cin >> op;

  std::cout << "Enter 2 numbers, separated by a space." << '\n';
  std::cin >> x >> y;

  if(op == '+')
    std::cout << x << op << y << '=' << (x + y) << '\n';
  else if(op == '-')
    std::cout << x << op << y << '=' << (x - y) << '\n';
  else if(op == '*')
    std::cout << x << op << y << '=' << (x * y) << '\n';
  else if(op == '/')
    {
      if(y != 0)
        std::cout << x << op << y << '=' << static_cast<double>(x) / y << '\n';

      else
        std::cout << "Error: Undefined. Unable to divide by zero." << '\n';
    }  
  else
    std::cout << "Invalid operator entered." << '\n';

  return 0;
}

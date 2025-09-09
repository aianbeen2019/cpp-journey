// Taking a string of user input, vs 1 character or number.

#include <iostream>
#include <string>

int main()
{
  std::string userName;

  std::cout << "Enter a username" << '\n';

  std::getline(std::cin, userName);
  std::cout << "You entered: " << userName << " for your username" << '\n';

  return 0;
}

//Making use of std::string, to enhance our previous compile-time "rpg"

#include <iostream>
#include <string>


//compile-time constants
constexpr int baseHealth{ 20 };
constexpr int baseMana{ 20 };
constexpr int baseStrength{ 5 };
constexpr int baseDexterity{ 5 };
constexpr int baseIntelligence{ 5 };
//compile-time constants

//compile-time function
constexpr int calculateAttackPower(int strength, int dexterity) {
  return (strength * 2) + (dexterity / 2);
}


int main()
{

  std::string playerName;
  std::cout << "Enter character's name." << '\n';
  std::getline(std::cin, playerName);
  
  

  //Evaluated during comile-time 
  constexpr int attackPower = calculateAttackPower(baseStrength, baseDexterity);

  std::cout << "\n---Character Sheet---\n";
  std::cout << "Hero: " << playerName << '\n';
  std::cout << "Health: " << baseHealth << '\n';
  std::cout << "Base: " << baseMana << '\n';
  std::cout << "Attack: " << attackPower << '\n';
 
  return 0;
  
}

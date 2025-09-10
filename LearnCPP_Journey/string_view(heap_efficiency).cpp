//Making use of std::string, to enhance our previous compile-time "rpg"

#include <iostream>
#include <string>
#include <string_view>



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

 //string_view use, to print folowing data to save on memory heap
  void printCharacterSheet(std::string_view playerName, int attackPower, int baseHealth, int baseMana){
    std::cout << "\n---Character Sheet---\n\n";
    std::cout << "Hero: " << playerName << '\n';
    std::cout << "Attack: " << attackPower << '\n';
    std::cout << "Health: " << baseHealth << '\n';
    std::cout << "Mana: " << baseMana << '\n';
    std::cout << '\n';
  }

int main()
{

  std::string playerName;
  std::cout << "Enter character's name." << '\n';
  std::getline(std::cin, playerName);
  
  

  //Evaluated during comile-time 
  constexpr int attackPower = calculateAttackPower(baseStrength, baseDexterity);

  printCharacterSheet(playerName, attackPower, baseHealth, baseMana);
 
  return 0;
  
}

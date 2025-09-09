//compile-time programming

#include <iostream>

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
  //Evaluated during comile-time 
  constexpr int attackPower = calculateAttackPower(baseStrength, baseDexterity);

  std::cout << "Base Health" << baseHealth << '\n';
  std::cout << "Base Mana" << baseMana << '\n';
  std::cout << "Attack Power" << attackPower << '\n';
 
  return 0;
  
}



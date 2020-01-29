#include "Pet.h"

int main(int argc, char **argv)
{
  Pet fido; //creates an empty Pet
  Pet socks("Socks", 3, "cat", 12); //creates an overloaded Pet

  //gives the empty Pet filled variables
  fido.setType("dog");
  fido.setName("Fido");
  fido.setAge(7);
  fido.setWeight(85);

  //prints out the details of the two pets
  cout << fido.getName() << " is a " << fido.getType() << " that is " << fido.getAge() << " years old and weighs " << fido.getWeight() << " pounds." << endl;
  cout << socks.getName() << " is a " << socks.getType() << " that is " << socks.getAge() << " years old and weighs " << socks.getWeight() << " pounds." << endl;

  return 0;
}

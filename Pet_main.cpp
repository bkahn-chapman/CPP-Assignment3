#include "Pet.h"

int main(int argc, char **argv)
{
  Pet fido;
  Pet socks("Socks", 3, "cat", 12);

  fido.setType("dog");
  fido.setName("Fido");
  fido.setAge(7);
  fido.setWeight(85);

  cout << fido.getName() << " is a " << fido.getType() << " that is " << fido.getAge() << " years old and weighs " << fido.getWeight() << " pounds." << endl;
  cout << socks.getName() << " is a " << socks.getType() << " that is " << socks.getAge() << " years old and weighs " << socks.getWeight() << " pounds." << endl;

  return 0;
}

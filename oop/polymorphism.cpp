#include <iostream>
using namespace std;

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();  // Calls Animal's version
  myPig.animalSound();     // Calls Pig's version (method hiding)
  myDog.animalSound();     // Calls Dog's version (method hiding)

  return 0;
}

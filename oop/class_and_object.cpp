#include <iostream>
#include <string>
using namespace std;

class Dog {          // Class definition
private:
    string name;     // Member variable (attribute)
    
public:
    // Constructor with parameter
    Dog(string n) {
        name = n;
    }
    
    // Member function (method)
    void bark() {
        cout << name << " says woof!" << endl;
    }
};

int main() {
    // Create a Dog object named "Buddy"
    Dog myDog("Buddy");  // Object instantiation
    
    // Call the bark() method
    myDog.bark();
    
    // Create another Dog object
    Dog anotherDog("Max");
    anotherDog.bark();
    
    return 0;
}
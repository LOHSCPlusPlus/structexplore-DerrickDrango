#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string secondName;
  Person();
};
Person::Person() {
	firstName = "unknown";
	secondName = "unknown";
}
int main() {
	// Create two instances of person here, and assign the names.
Person a;
cout << "Name a:" << a.firstName << ", " << a.secondName << endl;
a.firstName = "Dorian";
a.secondName = "Gray";
Person b;
cout << "Name b:" << b.firstName << ", " << b.secondName << endl;
b.firstName = "Charlie";
b.secondName = "Brown";
	// Add the prints here
cout << "Name a:" << a.firstName << ", " << a.secondName << endl;
cout << "Name b:" << b.firstName << ", " << b.secondName << endl;
	return 0;
}

#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string firstName;
  string secondName;
  Person();
  Person(string First, string Last);
};

Person::Person() {
  firstName = "unknown";
  secondName = "unknown";
}

Person::Person(string First, string Last) {
	firstName = First;
	secondName = Last;
}

int main() {
	// Create two instances of person here, and assign the names.
Person a;
a.firstName = "Dorian";
a.secondName = "Gray";
Person b;
b.firstName = "Charlie";
b.secondName = "Brown";

Person c("Linus","Van Pelt");
	// Add the prints here
cout << "Name a:" << a.firstName << ", " << a.secondName << endl;
cout << "Name b:" << b.firstName << ", " << b.secondName << endl;
cout << "Name c:" << c.firstName << ", " << c.secondName << endl;
	return 0;
}

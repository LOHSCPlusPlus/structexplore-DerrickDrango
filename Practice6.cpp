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

void PrintPerson(Person p){
  cout << p.firstName << ", " << p.secondName << endl;
}

void SwapLastName(Person &p, string newLast){
  p.secondName = newLast;
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

SwapLastName(b, "Torvalds");
	// Add the prints here
PrintPerson(a);
PrintPerson(b);
PrintPerson(c);
	return 0;
}

#include <iostream>
using namespace std;

// Put the person struct here
struct person{
  string firstName;
  string secondName;
};
int main() {
	// Create two instances of person here, and assign the names.
person a;
a.firstName = "Dorian";
a.secondName = "Gray";
person b;
b.firstName = "Charlie";
b.secondName = "Brown";
	// Add the prints here
cout << "Name a:" << a.firstName << ", " << a.secondName << endl;
cout << "Name b:" << b.firstName << ", " << b.secondName << endl;
	return 0;
}

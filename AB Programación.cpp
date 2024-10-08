#include <iostream>
using namespace std;

int Add(int x, int y) {
	cout << "En Add(), recibido " << x << " y " << y << "/n";
	return (x + y);
}


int main() {
	cout << "En main ()\n";
	cout << "\nllamada a Add()\n";
	cout << "El valor devuelto es: " << Add(3, 4);
	cout << "\nvuelta a main (). \n";
	cout << "\nsaliendo...\n";
}
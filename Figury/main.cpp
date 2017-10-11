#include <iostream>
#include "Kwadrat.h"
#include "KwadratKartezjanski.h"

using namespace std;

int main() {
	Kwadrat * k1 = new Kwadrat();

	Kwadrat * k2 = new Kwadrat(3, 3);

	Kwadrat k3(4, 4);
	
	KwadratKartezjanski k4(0.0, 0.0, 4);
	

	cout << k1->getSzerokosc() << " * " << k1->getWysokosc() << " = " << k1->getPole() << endl;
	cout << k2->getSzerokosc() << " * " << k2->getWysokosc() << " = " << k2->getPole() << endl;
	cout << k3.getSzerokosc() << " * " << k3.getWysokosc() << " = " << k3.getPole() << endl;


	delete k1;
	delete k2;
	
	return 0;
}

#include <iostream>
#include "header.h"

using namespace std;

void Cnazwa::Wyswietl() {
	cout << a << " " << c << endl;
}

Cnazwa::Cnazwa() {
	this->a = 1;
	this->c = 3;
}

Cnazwa::Cnazwa(int a) {
	this->a = a;
	this->c = 3;
}

Cnazwa::Cnazwa(int a, int c) {
	this->a = a;
	this->c = c;
}

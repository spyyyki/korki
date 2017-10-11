#include <iostream>

using namespace std;

struct Snazwa {
	int a;
	int b;
	int c;
	
	Snazwa() {
		a = 1;
		b = 2;
		c = 3;
	}
};

class Cnazwa {
	public:
	int a;
	int c;
	
	void Wyswietl();
	
	Cnazwa() {
		this->a = 1;
		this->c = 3;
	}
	
	Cnazwa(int a) {
		this->a = a;
		this->c = 3;
	}
	
	Cnazwa(int a, int c) {
		this->a = a;
		this->c = c;
	}
};

void Cnazwa::Wyswietl() {
	cout << a << " " << c << endl;
}

int main() {
	Snazwa Sinstancja;
	
	Sinstancja.a;
	
	
	Cnazwa * Cinstancja1 = new Cnazwa();
	Cinstancja1->a;
	Cinstancja1->Wyswietl();
	
	Cnazwa * Cinstancja3 = new Cnazwa(2);
	Cinstancja3->Wyswietl();
	
	Cnazwa * Cinstancja4 = new Cnazwa(6, 4);
	Cinstancja4->Wyswietl();
	
	delete Cinstancja1;
	delete Cinstancja3;
	delete Cinstancja4;

	return 0;
}

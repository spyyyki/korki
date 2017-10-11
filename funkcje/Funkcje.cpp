#include <iostream>

using namespace std;

int f1 (int a) {
	a++;
	return 2;
}

void dodawanie_dwoch_zmiennych() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	a+=f1(b);
}

int main () {
	int ananas = 1;
	int zmienna = 2;
	dodawanie_dwoch_zmiennych();
	int ananas2 = f1(ananas);
	
	if(zmienna == f1(ananas)){
		cout << "\nPrawda\n";
	}
	
	return 0;
}

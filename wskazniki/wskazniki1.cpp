#include <iostream>

using namespace std;

int main() {
	int a[20];
	int * b;
	int rozmiar;
	cin >> rozmiar;
	b = new int[rozmiar];
	
	for (int i = 0; i<20; i++) {
		a[i] = b[i];
	}
	delete [] b;
	
	rozmiar++;
	b = new int[rozmiar];
	delete [] b;
	
	b = new int;
	delete b;
	
	int c = 10;
	cout << c << endl;
	cout << &c;
	
	return 0;
}

#include <iostream>

using namespace std;

void foo1(int a) {
	a = 10;
}

void foo2(int * a) {
	int * b = new int(10);
	a = b;
}

void foo3(int & a) {
	a = 20;
}


int main() 
{
	int * a = new int(1);
	//foo1(a);
	//cout << a << endl;
	foo2(a);
	cout << *a << endl;
	//foo3(a);
	//cout << a << endl;
	return 0;
}

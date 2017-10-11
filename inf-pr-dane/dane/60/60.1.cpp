#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	int x; //liczba
	int a=0; //ostatnia liczba
	int b=0; // 2 od koñca
	int c=0; // liczba liczb mniejszych od 1000
	
	ifstream plik("liczby.txt"); // <-----
	ofstream wyniki("wyniki.txt", ios_base::app); // <-----
	
	while (!plik.eof()) // <-----
	{
		plik >> x; // <-----
		
		if(x<1000){  // X TRZEBA ZAST¥PIÆ LICZBAMI Z DANYCH
			c++;
			b=a;
			a=x;	
		}
	}
	
	wyniki << "Mniejszych od 1000: " << c << endl; // <-----
	wyniki << "przedostatnia: " << b << endl; // <-----
	wyniki << "ostatnia: " << a << endl; // <-----
	
	plik.close(); // <-----
	wyniki.close(); // <-----
	
	return 0;
}


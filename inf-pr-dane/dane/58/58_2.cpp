#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	// wczytanie pliku
	ifstream dane1("dane_systemy1.txt");
	ifstream dane2("dane_systemy2.txt");
	ifstream dane3("dane_systemy3.txt");
	char temp[30], czas[30];
	int a=0, b=0;
	char czas2[30], czas3[30];
	// .eof() sprawdzanie, czy jesteœmy na koñcu pliku
	while(!dane1.eof()) {
		// pobranie porcji danych z pliku
		dane1 >> czas >> temp;
		dane2 >> czas2 >> temp;
		dane3 >> czas3 >> temp;
		// konwersja ³añcucha znaków na liczbê ca³kowit¹
		// interpretacja ³añcucha jako liczby w systemie binarnym
		// strtol(tablica_char, NULL, system_liczbowy)
		int czass = strtol(czas, NULL, 2);
		int czasss = strtol(czas2, NULL, 4);
		int czassss = strtol(czas3, NULL, 8);
		if(czass != 12 + a*24 && czasss != 12 + a*24 && czassss != 12 + a*24){
			b++;
			//cout << czass << " - " << czasss << " - " << czassss << endl;
		}
		a++;
	}
	cout<<b;
	
	// zamkniêcie strumienia danych
	dane1.close();
	dane2.close();
	dane3.close();
	 
	return 0;
}

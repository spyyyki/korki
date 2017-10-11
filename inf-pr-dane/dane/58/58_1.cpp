#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
	// wczytanie pliku
	ifstream dane("dane_systemy1.txt");
	
	char temp[30], czas[30];
	int min_temp = 100;
	
	// .eof() sprawdzanie, czy jeste�my na ko�cu pliku
	while(!dane.eof()) {
		// pobranie porcji danych z pliku
		dane >> czas >> temp;
		
		// konwersja �a�cucha znak�w na liczb� ca�kowit�
		// interpretacja �a�cucha jako liczby w systemie binarnym
		int temp_int = strtol(temp, NULL, 2);
		
		// sprawdzenie, czy pobrana temperatura jest ni�sza od obecnie minimalnej
		if(min_temp > temp_int) {
			min_temp = temp_int;
		}
	}
	
	// itoa - integer to array(char)
	// itoa(liczba, tablica_char, system_liczbowy)
	// 
	if(min_temp < 0) {
		itoa(-1*min_temp, temp, 2);
		cout << "Temperatura minimalna: -" << temp;
	} else {
		itoa(min_temp, temp, 2);
		cout << "Temperatura minimalna: " << temp;
	}
	
	// zamkni�cie strumienia danych
	dane.close();
	
	return 0;
}

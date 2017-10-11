#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

bool pierwsze(int liczba){
	int a=sqrt(liczba);
	for(int b=2; b<=a; b++){
		if(liczba%b==0){
			return false;
		}
	}
	return true;
}


int main() {
	// wczytanie pliku
	ifstream dane("liczby.txt");
	
	char liczba[30];
	int licznik = 0;
	// .eof() sprawdzanie, czy jesteœmy na koñcu pliku
	while(!dane.eof()) {
		// pobranie porcji danych z pliku
		dane >> liczba;
		// konwersja ³añcucha znaków na liczbê ca³kowit¹
		// interpretacja ³añcucha jako liczby w systemie binarnym
		// strtol(tablica_char, NULL, system_liczbowy)
		int liczbaa = strtol(liczba, NULL, 10);
		if (liczbaa % 2 == 0) {
			continue;
		}
		int a=3;
		int tablica[30] = {0};
		int x = 0;
		while(liczbaa!=1){
			if(liczbaa%a==0){
				liczbaa/=a;
				tablica[x]=a;
				x++;
			}
			else{
				a+=2;
			}
		}
		x = 1;
		int b = 1;
		while(b<4){
			if (tablica[x]!=0) {
				if(tablica[x]!=tablica[x-1]) {
					b++;
				}
				x++;
			}
			else {
				break;
			}
		}
		
		if(b == 3)
		{
			licznik++;
		}
	}
	
	cout << licznik;
	
	// zamkniêcie strumienia danych
	dane.close();
	 
	return 0;
}

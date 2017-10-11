#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void debug(int & dlugosc, int & dane, int & index1, int & index2, int * liczba1, int * liczba2)
{
	static int numer = 0;
	cout << "debug nr " << numer << endl;
	cout << "dlugosc = " << dlugosc << endl;
	cout << "dane = " << dane << endl;
	cout << "index1 = " << index1 << endl;
	cout << "index2 = " << index2 << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << liczba1[i] << "\t|";
	}
	
	cout << endl << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cout << liczba2[i] << "\t|";
	}
	
	numer++;
	cout << "\n------------------------------" << endl;
}

int main()
{
	// wczytanie pliku
	int licznik = 0;
	
	ifstream plik("liczby.txt");
	
	while(!plik.eof()) {
		
		int dlugosc=0, dane, index1=10, index2=10;
		int liczba1[10] = {0};
		int liczba2[10] = {0};
		int wynik[10] = {0};
		
		plik >> dane;
		licznik++;
		
		while(dane>0){
			index1--;
			liczba1[index1] = dane%10;
			dane/=10;
			dlugosc++;
		}
		
		//debug(dlugosc, dane, index1, index2, liczba1, liczba2);
		
		for(;index1<=9; index1++){
			index2--;
			liczba2[index1]=liczba1[index2];
		}
		
		for(int b = 9, c = 0; index1 > 0; index1--){
			int a = liczba1[b] + liczba2[b] + c;
			wynik[b] = a%10;
			c = a/10;
			b--;
		}
		
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cout << wynik[i] << "\t|";
	//	}
		
		int start = 10 - dlugosc; // do sprawdzania odwrotnosci, chcê wiedzieæ w którym miejscu ma porównywaæ
		
		if (wynik[start-1] != 0)
		{
			start--;
		}
		
		int l=9;
		for(; start <10; start ++){
			if(wynik[start]!=wynik[l]){
				licznik--;
				break;
			}
			l--;
		}
	}
	plik.close();
	
	cout << "ilosc " << licznik;
	return 0;
}

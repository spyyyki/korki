#include <iostream>

using namespace std;

int main()
{
	int * tablica;
	int rozmiar = 0;
	int opcja;
	do{
		cout<< "Co chcesz zrobic?"<<endl
		<< "1 - dodaj wiek osoby"<<endl
		<< "2 - wyswietl zapisane lata"<< endl
		<< "3 - zamknij program" << endl;
		cin >> opcja;
		switch(opcja){
			case 1:{
				int wiek;
				cout << "Podaj wiek osoby"<<endl;
				cin >> wiek;
				
				if (rozmiar == 0)
				{
					rozmiar++;
					tablica = new int[rozmiar];
					tablica[0] = wiek;
				}
				else
				{
					int * tablicaTemp = tablicaTemp = new int[rozmiar];
					for (int i = 0; i<rozmiar; i++) {
						tablicaTemp[i] = tablica[i];
					}
					delete [] tablica;
					
					rozmiar++;
					tablica = new int[rozmiar];
					for (int i = 0; i<rozmiar-1; i++) {
						tablica[i] = tablicaTemp[i];
					}
					tablica[rozmiar-1] = wiek;
					delete [] tablicaTemp;
				}
				break;
			}
			case 2:{
				for(int i=0; i < rozmiar; i++){
					cout<< tablica[i] << endl;
				}
				break;
			}
			case 3:{
				break;
			}
			default:{
				cout << " Wybrano zla opcje"<<endl;
				break;
			}
		}
		
	}while(opcja!=3);
	
	delete [] tablica;
	
	int * c = new int(10);
	cout << endl << c << " - " << &c << " - " << *c << endl;
	
	return 0;
}

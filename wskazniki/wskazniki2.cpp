#include <iostream>

using namespace std;

void dodaj(int * tablica, int * rozmiar) {
	cout<<"Jaka liczbe chcesz dodac? ";
	int temp;
	cin >> temp;
	cout << *rozmiar << endl;
	if ((*rozmiar) == 0) {
		(*rozmiar)++;
		tablica = new int[(*rozmiar)];
		tablica[0] = temp;
		cout << tablica[0] << endl;
	}
	else {
		cout << "1\n";
		int * tablica_temp = new int[*rozmiar];
		cout << "2\n";
		for(int i = 0; i < (*rozmiar); i++) {
			cout << "----";
			int a = *(tablica+i);
			cout << "----";
			tablica_temp[i] = a;
			cout << "----";
			cout << i << ", ";
		}
		cout << "3\n";
		delete [] tablica;
		cout << "4\n";
		tablica = new int[++(*rozmiar)];
		cout << "5\n";
		for(int i = 0; i < (*rozmiar)-1; i++) {
			tablica[i] = tablica_temp[i];
			cout << tablica[i] << " | ";
		}
		cout << "6\n";
		tablica[(*rozmiar)-1] = temp;
		cout << "7\n";
		cout << tablica[(*rozmiar)-1] << endl;
		delete [] tablica_temp;
	}
}

int main() {
	int * tablica;
	int opcja;
	int rozmiar = 0;
	do{
		cout<<"Co chcesz zrobic? ";
		cin>> opcja ;
		switch(opcja) {
			case 0: {
				dodaj(tablica, &rozmiar);
				break;
			}
			case 1: {
				cout << rozmiar;
				if(rozmiar>0){	
					cout<<"Ktora liczbe chcesz usunac? ";
					int temp;
					cin>> temp;
					if(temp<=rozmiar && temp>0){
						int * tablica_temp = new int[rozmiar];
						for(int i = 0; i < rozmiar; i++){
							tablica_temp[i] = tablica[i];
						}	
						delete [] tablica;
						for(int i = temp; i < rozmiar; i++){
							tablica_temp[i-1]=tablica_temp[i];
						}
						tablica = new int[--rozmiar];
						for( int i = 0; i < rozmiar; i++){
							tablica[i] = tablica_temp[i];
						}
						delete [] tablica_temp;
					}
					else{
						cout<<"Nie ma tylu liczb";
					}
				}
				else{
					cout<<"Nie ma czego usuwac";
				}
				break;
			}
			case 2: {
				cout << rozmiar;
				for(int i = 0; i < rozmiar; i++){
					cout<< tablica[i];
					cout<< " | ";
				}
				break;
			}
			case 3: {
				cout << "Do widzenia";
				break;
			}
			default: {
				cout<<"Nie ma takiej opcji";
				break;
			}
		}	
		cout<< endl;	
	}while(opcja!=3);
	
	delete [] tablica;
	
	return 0;
}

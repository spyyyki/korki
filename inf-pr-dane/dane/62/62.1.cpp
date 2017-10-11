#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int cyfry; 	// sprawdzam ile cyfr ma liczba
	int najwieksza = 0;
	int najmniejsza=999999;
	int najwieksza8;
	int najmniejsza8;
	ifstream plik("liczby1.txt");
	
	while (!plik.eof()){
		int x; 		// wczytana liczba
		int f = 5;	// do wpisywania liczb w tablicê
		int m = 1;	// do przekszta³cania z ósemkowego na dziesiêtny
		int suma = 0;
		int liczba[6];
		
		plik >> x;
		
		if(x>99999){ // sprawdzam ile cyfr ma liczba, potrzebne do przek³¹dania z ósemkowego na dziesiêtny
			cyfry=6;
		}
		else{
			if(x>9999){
				cyfry=5;
			}
			else{
				if(x>999){
					cyfry=4;
				}
				else{
					if(x>99){
						cyfry=3;
					}
					else{
						if(x>9){
							cyfry=2;
						}
						else{
							cyfry=1;
						}
					}
				}
			}
		}
		int y=x;
//		while (y>0)
//		{
//			f--;
//			liczba[f]=y%10;
//			y/=10;
//		}

		for(int a=0; a<cyfry; a++){	// wpisujê w tablicê, nie przekszta³cam jeszcze
			liczba[f]=y%10;
			y/=10;
			f--;
		}
		for(int a=5; a>=6-cyfry; a--){	
			suma+=liczba[a]*m;
			m*=8;
		}
		if(suma>najwieksza){		//sprawdzenie czy liczba jest wieksza od najwiekszej i ew. zapisanie w systemie dziesietnej i osemkowym
			najwieksza=suma;
			najwieksza8 = x;
		}
		if(suma<najmniejsza){		// sprawdza czy liczba jest mniejsza i ew. zapisuje ja w osemkowej i dziesietnej
			najmniejsza=suma;
			najmniejsza8 = x;
		}
	}
	
	ofstream oplik("wyniki.txt");
	
	oplik << najwieksza8 << "\n";
	oplik << najmniejsza8 << "\n";
	
	oplik.close();
	plik.close();
	return 0;
}

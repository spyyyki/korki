#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int cyfry; 	// sprawdzam ile cyfr ma liczba
	int r = 0;		// kiedy s¹ równe
	int w = 0;		// kiedy liczba 1 jest wieksze od liczba 2
	ifstream plik1("liczby1.txt");
	ifstream plik2("liczby2.txt");
	
	cout << "liczba1\tliczba2\tsuma\tr\tw\n";
	while (!plik1.eof() or !plik2.eof()){
		int liczba1; 		// wczytana liczba z liczb1
		int liczba2;		// wczytana liczab z liczb2.
		int f=5;	// do wpisywania liczb w tablicê
		int m=1;	// do przekszta³cania z ósemkowego na dziesiêtny
		int suma = 0;
		int liczba[6];
		
		plik1 >> liczba1;
		plik2 >> liczba2;
		
		if(liczba1>99999){ // sprawdzam ile cyfr ma liczba, potrzebne do przek³¹dania z ósemkowego na dziesiêtny
			cyfry=6;
		}
		else{
			if(liczba1>9999){
				cyfry=5;
			}
			else{
				if(liczba1>999){
					cyfry=4;
				}
				else{
					if(liczba1>99){
						cyfry=3;
					}
					else{
						if(liczba1>9){
							cyfry=2;
						}
						else{
							cyfry=1;
						}
					}
				}
			}
		}
		
		int y=liczba1;
		for(int a=0; a<cyfry; a++){	// wpisujê w tablicê, nie przekszta³cam jeszcze
			liczba[f]=y%10;
			y/=10;
			f--;
		}
		for(int a=5; a>=6-cyfry; a--){	//wpisuje w tablicê i przekszta³cam na system dziesiêtny
			suma+=liczba[a]*m;
			m*=8;
		}
		
		if(suma==liczba2){
			r++;
		}
		
		if(suma>liczba2){
			w++;
		}
		
		cout << liczba1 << "\t" << liczba2 << "\t" << suma << "\t" << r << "\t" << w << "\t" << endl;	
	}
	
	cout << r << endl;
	cout << w << endl;
	
	plik1.close();
	plik2.close();
	return 0;
}

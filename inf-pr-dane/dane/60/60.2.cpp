#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream plik("liczby.txt");
	
	while (!plik.eof()) {
		int dzielnik[100];
		int x;
		int a = 0; // u¿ywana do wpisywania do tablic i do sprawdzania, czy jest 18 dzielników
		
		plik >> x;
		for(int y=1; y<=x; y++){
			if(x%y==0){
				dzielnik[a] = y;
				a++;
			}
		}
	
		if(a==18){
			cout << x << endl;
			for(int n=0; n<18; n++){
				cout << dzielnik[n] << " ";
			}
			cout << "\n\n";
		}
	}

	return 0;
}

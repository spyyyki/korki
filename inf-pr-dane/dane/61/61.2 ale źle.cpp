#include <fstream>
#include <iostream>

using namespace std;

int main(){
	int licznik = 0;
	int maxRoznica = 0;
	ifstream plik("ciagi.txt");
	
	while (!plik.eof()){
		int dlugosc;
		int n1, n2;
		int szescian, szesciannajw=0;
		float liczba, stopien=3;
		
		plik >> dlugosc;
		plik >> n1;
		
		for (int i = 1; i < dlugosc; i++){
			plik >> n2;
			float a = pow(n1, 1/stopien);
			int b= a;
			if(a-b==0){
			szescian = n1;
			if(szescian>szesciannajw){
				szesciannajw=szescian;
				}
			}
			n1 = n2;
		}
		
	}

	return 0;
}

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
		int roznica = -1; // warto�� pocz�tkowa dla rozr�znienia pierwszego obrotu p�tli
		
		// pobieram dlugosc i pierwszy element, �eby m�c obliczy� r�znic�
		// poniewa� w p�tli mog� pobiera� tylko jeden element
		// gdybym pobiera� dwa, to nie m�g�bym por�wnywa� kolejnych element�w ze sob�
		plik >> dlugosc;
		plik >> n1;
		//cout << n1 << " ";
		
		bool czyArytmetyczny = true;
		for (int i = 1; i < dlugosc; i++){
			plik >> n2;
			//cout << n2 << " ";
			// s� dwie opcje gdy nie ma ci�gu
			// 1) gdy zapamietana r�nica jest inna ni� obecna - nie dotyczy pierwszej sytuacji, gdy nie tyle sprawdzamy r�nic�, to musimy j� zainicjowa� warto�ci�
			// 2) gdy r�nica jest 0
			if (((roznica != n2 - n1) && (roznica != -1)) || (roznica == 0))
			{
				czyArytmetyczny = false;
			}
			roznica = n2 - n1;
			n1 = n2;
		}
		
		if (czyArytmetyczny){
			if (roznica > maxRoznica) {
				maxRoznica = roznica;
			}
			licznik++;
		}
		//cout << "\nlicznik = " << licznik << endl;
	}
	
	cout << "liczba: " << licznik << endl;
	cout << "max roznica: " << maxRoznica << endl;
	
	return 0;
}

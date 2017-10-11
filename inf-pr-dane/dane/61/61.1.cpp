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
		int roznica = -1; // wartoœæ pocz¹tkowa dla rozróznienia pierwszego obrotu pêtli
		
		// pobieram dlugosc i pierwszy element, ¿eby móc obliczyæ róznicê
		// poniewa¿ w pêtli mogê pobieraæ tylko jeden element
		// gdybym pobiera³ dwa, to nie móg³bym porównywaæ kolejnych elementów ze sob¹
		plik >> dlugosc;
		plik >> n1;
		//cout << n1 << " ";
		
		bool czyArytmetyczny = true;
		for (int i = 1; i < dlugosc; i++){
			plik >> n2;
			//cout << n2 << " ";
			// s¹ dwie opcje gdy nie ma ci¹gu
			// 1) gdy zapamietana ró¿nica jest inna ni¿ obecna - nie dotyczy pierwszej sytuacji, gdy nie tyle sprawdzamy ró¿nicê, to musimy j¹ zainicjowaæ wartoœci¹
			// 2) gdy ró¿nica jest 0
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

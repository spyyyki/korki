#include <iostream>

using namespace std;
int geometryczny(int pierwszy, int n, int iloczyn){

	if(n==1){
		return pierwszy;
	}
	else{
		return geometryczny(pierwszy*iloczyn, n-1, iloczyn);
	}
	
}

int arytmetyczny(int pierwszy, int n, int roznica){

	if(n==1){
		return pierwszy;
	}
	else{
		return arytmetyczny(pierwszy+roznica, n-1, roznica);
	}
	
}

int sumaGeometryczny(int pierwszy, int n, int iloczyn){

	if(n==1){
		return pierwszy;
	}
	else{
		return pierwszy + sumaGeometryczny(pierwszy*iloczyn, n-1, iloczyn);
	}
	
}

int sumaArytmetyczny(int pierwszy, int n, int roznica){

	if(n==1){
		return pierwszy;
	}
	else{
		return pierwszy + sumaArytmetyczny(pierwszy+roznica, n-1, roznica);
	}
	
}

int main() {
	int pierwszy;	// pierwszy wyraz	
	int n; 	// który wyraz
	int iloczyn; 	//iloczyn
	int opcja;
	do {
		cout << "Wybierz opcjê:\n"
			 << "1 - policz n-ty wyraz ciagu geometrycznego,\n"
			 <<	"2 - policz n-ty wyraz ciagu arytmetycznego,\n"
			 <<	"3 - policz sume n wyrazow ciagu geometrycznego,\n"
			 << "4 - policz sume n wyrazow ciagu arytmetycznego,\n"
			 <<	"0 - zakoncz program\n";
		cin >> opcja;
		if (opcja != 0)
		{
			cout << "Podaj pierwszy wyraz: ";
			cin  >> pierwszy;
			cout << "Podaj n: ";
			cin  >> n;
			cout << "Podaj iloczyn/roznice: ";
			cin  >> iloczyn;
			switch (opcja){
				case 1:{
					cout << geometryczny(pierwszy, n, iloczyn) << endl;
					break;
				}
				case 2:{
					cout << arytmetyczny(pierwszy, n, iloczyn) << endl;
					break;
				}
				case 3:{
					cout << sumaGeometryczny(pierwszy, n, iloczyn) << endl;
					break;
				}
				case 4:{
					cout << sumaArytmetyczny(pierwszy, n, iloczyn) << endl;
					break;
				}
				case 0:{
					break;
				}
				default:{
					cout << "Podano nieprawidlowa wartosc" << endl;
					break;
				}
			}
		}
	} while (opcja != 0);
	
	return 0;
}


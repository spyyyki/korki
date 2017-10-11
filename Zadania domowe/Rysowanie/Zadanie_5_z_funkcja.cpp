#include <iostream>

using namespace std;

void rysowanie_choinki(int szerokosc_pierwszego_poziomu, int ilosc_poziomow) {
	
	int szerokosc_ostatniego_rzedu 	= (szerokosc_pierwszego_poziomu + ilosc_poziomow*2) - 2,
		wysokosc_trojkata 			= szerokosc_pierwszego_poziomu/2 + 1,
		ilosc_spacji_w_rzedzie 		= szerokosc_ostatniego_rzedu/2,
		ilosc_znakow_w_rzedzie 		= 1;
		
	//przerzuca do nastepnego trojkata
	for(int r=0; r<ilosc_poziomow; r++){
		//przerzuca do nastepnego rzedu
		for(int u=0; u<wysokosc_trojkata; u++){
			//wypisuje spacje
			for(int e=0; e<ilosc_spacji_w_rzedzie; e++){
				cout<<" ";
			}
			//wypisuje znaki
			for(int q=0; q<ilosc_znakow_w_rzedzie; q++){
				cout<<"o";
			}
			
			ilosc_spacji_w_rzedzie--;
			ilosc_znakow_w_rzedzie+=2;
			cout<<endl;
		}	
		
	//cout<<endl;
	wysokosc_trojkata++;
	ilosc_spacji_w_rzedzie = szerokosc_ostatniego_rzedu/2;
	ilosc_znakow_w_rzedzie = 1;
	}
}

int main() {
	int szerokosc_pierwszego_poziomu,
		ilosc_poziomow;
		
	cout << "szerokosc pierwszego poziomu: ";
	cin>>szerokosc_pierwszego_poziomu;
	cout << "ilosc poziomow: ";
	cin>>ilosc_poziomow;
	
	rysowanie_choinki(szerokosc_pierwszego_poziomu, ilosc_poziomow);
	
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int szerokosc_pierwszego_poziomu,
		ilosc_poziomow;
		
	cin>>szerokosc_pierwszego_poziomu;
	cin>>ilosc_poziomow;
	
	int szerokosc_ostatniego_rzedu 	= (szerokosc_pierwszego_poziomu + ilosc_poziomow*2) - 2,
		wysokosc_trojkata 			= szerokosc_pierwszego_poziomu/2 + 1,
		ilosc_spacji_w_rzedzie 		= szerokosc_ostatniego_rzedu/2,
		ilosc_znakow_w_rzedzie 		= 1,
		przystosc 					= szerokosc_pierwszego_poziomu%2;
	
	
	if(przystosc==1){
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
	else{
		for(int r=0; r<ilosc_poziomow; r++){
			//przerzuca do nastepnego rzedu
			for(int u=0; u<wysokosc_trojkata; u++){
				//wypisuje spacje
				for(int e=0; e<ilosc_spacji_w_rzedzie; e++){
					cout<<" ";
				}
				//wypisuje znaki
				for(int q=1; q<ilosc_znakow_w_rzedzie; q++){
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
	return 0;
}

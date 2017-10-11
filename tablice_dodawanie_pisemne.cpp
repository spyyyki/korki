#include <iostream>	
#include <cmath>
using namespace std;	

int main(){
	int rozmiar_tab = 20, rozmiar_liczby = 0, rozmiar_liczby2 = 0;
	int l1[rozmiar_tab];
	int l2[rozmiar_tab];
	int wynik[rozmiar_tab];
	int wynik2[rozmiar_tab];
	
	int liczba, liczba2;
	cout << "Podaj liczbe1: ";
	cin >> liczba;
	cout<<"Podaj liczbe2: ";
	cin>>liczba2;
	
	for(int i=1; i<=liczba; i*=10) {
		rozmiar_liczby++;
	}
	for(int i=1; i<=liczba2; i*=10) {
		rozmiar_liczby2++;
	}

	for(int a=rozmiar_liczby-1; a>=0; a--){
		int w = liczba%10;
		liczba/=10;
		l1[a] = w;
	}	
	for(int a=rozmiar_liczby2-1; a>=0; a--){
		int w = liczba2%10;
		liczba2/=10;
		l2[a] = w;
	}
	
	int rozmiar, r;
	if(rozmiar_liczby!=rozmiar_liczby2){
		r = abs(rozmiar_liczby-rozmiar_liczby2);
		
		if(rozmiar_liczby<rozmiar_liczby2){
			rozmiar = rozmiar_liczby2;
			for(int b=rozmiar_liczby-1; b>=0; b--){
				l1[b+r] = l1[b];
				l1[b] = 0;
			}
		}
		if(rozmiar_liczby>rozmiar_liczby2){
			rozmiar = rozmiar_liczby;
				for(int b=rozmiar_liczby2-1; b>=0; b--){
				l2[b+r] = l1[b];
				l2[b] = 0;
			}
		}	
	} else {
		rozmiar = rozmiar_liczby;
	}
	int temp = 0;
	
	for(int c = rozmiar-1 ; c>=0; c--){
		if(c!=rozmiar-1){
			if(temp >= 10) {
				temp /= 10;
			} else {
				temp = 0;
			}
			temp += l1[c] + l2[c];
			wynik[c+1]=temp%10;
		}
		else{
			temp = l1[c] + l2[c];
			wynik[c+1] = temp%10;
		}
	}
	if(temp>=10){
		wynik[0] = temp/10;
	}
	else {
		wynik[0] = 0;
	}
	
	cout << "  | ";
	for (int i = 0; i<rozmiar; i++)
	{
		cout << l1[i] << " | ";
	}
	cout << "\n  | ";
	for (int i = 0; i<rozmiar; i++)
	{
		cout << l2[i] << " | ";
	}
	cout << "\n";
	for (int i = 0; i<=rozmiar; i++)
	{
		cout << wynik[i] << " | ";
	}

	return 0;
}	

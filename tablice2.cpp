#include <iostream>	

using namespace std;	

int main(){
	int rozmiar_tab = 20, rozmiar_liczby = 0;
	int tab[rozmiar_tab];
	// int tab2[] = {1,2,3,4,5,2};
	//int tab2[25] = {1,2,3,4};
	
	int liczba;
	cout << "Podaj liczbê: ";
	cin >> liczba;
	
	for(int i=1; i<=liczba; i*=10) {
		rozmiar_liczby++;
	}
	
	//cout << "Rozmiar liczby: " << rozmiar_liczby << endl;
	for(int a=rozmiar_liczby-1; a>=0; a--){
		int w = liczba%10;
		liczba/=10;
		cout<<w<<endl;
		tab[a] = w;
	}	
	
	for (int i = 0; i<rozmiar_liczby; i++)
	{
		cout << tab[i] << " | ";
	}
	
	for (int i = 0; i<rozmiar_liczby; i+=2)
	{
		if(tab[i]!=0){
			tab[i]-=1;
		}
	}
	
	cout << endl;
	
	for (int i = 0; i<rozmiar_liczby; i++)
	{
		cout << tab[i] << " | ";
	}
	
	
	return 0;
}	

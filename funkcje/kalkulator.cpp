#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int dodawanie(int x, int y){
	int suma = x+y;
	return suma;
}

int odejmowanie(int x, int y){
	int r = x-y;
	return r;
}

int dzielenie(int x, int y){
	int d = x/y;
	return d;
}

int mnozenie(int x, int y){
	int m = x*y;
	return m;
}

int main(){
	string g;
	int x, y, wynik;
	srand(time(NULL));
	/*cout<<"co chcesz wykonac? "<<rand()%100;
	cin>>g;
	cout<<"wprowadz liczby ";
	cin>>x;
	cin>>y;*/
	
	int o=0;
	for(int i = 0; i < 10000; i++) {
		
		if(rand()%100 < 70) {
			//cout<<"prawda\n";
			o++;
		} else {
			//cout<<"falsz\n";
		}
	}
	cout << endl << o;
	
/*	switch(g) {
		case '+': {
			wynik = dodawanie(x, y);
			cout<<wynik;
			break;
		}
		case '-': {
			wynik = odejmowanie(x, y);
			cout<<wynik;
			break;
		}
		case "mnozenie": {
			wynik = mnozenie(x, y);
			cout<<wynik;
			break;
		}
		case "dzielenie": {
			if(y!=0){	
				wynik = dzielenie(x, y);
				cout<<wynik;
			}
			else{
				cout<<"Nie ma takiego dzialania";
			}
			break;
		}
		default: {
			cout << "Niepoprawna nazwa dzialania"
			break;
		}		
	}*/
	
	if(g=="dodawanie"){
		wynik = dodawanie(x, y);
		cout<<wynik;
	}
	if(g=="odejmowanie"){
		wynik = odejmowanie(x, y);
		cout<<wynik;
	}
	if(g=="mnozenie"){
		wynik = mnozenie(x, y);
		cout<<wynik;
	}
	if(g=="dzielenie"){
		if(y!=0){	
			wynik = dzielenie(x, y);
			cout<<wynik;
		}
		else{
			cout<<"Nie ma takiego dzialania";
		}
	}
	
	return 0;
}	

#include <iostream>
using namespace std;

void rysuj_trojkat1(bool czy_gora, int x) {
	int r=x;
	if (czy_gora) {
		for(; x>0; x--){
			for(int y=x; y>0; y--) {
				cout<<"o";
			}
			for(int m=r-x; m>0; m--) {	
				cout<<" ";
			}
			for(int m=r-x; m>0; m--) {	
				cout<<" ";
			}
			for(int y=x; y>0; y--) {
				cout<<"o";
			}
			cout<< endl;
		}
	} else {
		for(; x>0; x--){
			for(int g=r-x; g>=0; g--) {
				cout<<"o";
			}
			for(int h=0; h<x-1; h++) {
				cout<<" ";
			}
			for(int h=0; h<x-1; h++) {
				cout<<" ";
			}
			for(int g=r-x; g>=0; g--) {
				cout<<"o";
			}
			cout<<endl;
		}
	}
}

int main() {
	int x;
	cin>>x;
	
	rysuj_trojkat1(true, x);
	rysuj_trojkat1(false, x);
	
	
	/*for(; x>0; x--)	
	{
		for(int y=x; y>0; y--)
		{
			cout<<"o";
		}
		for(int m=r-x; m>0; m--)
		{	
			cout<<"x";
		}
		
		cout<< endl;
	}*/
	
	/*for(int i=x;i>0;i--) {
		for(int j=x;j>0;j--) {
			if(j>x-i) {
				cout << "o";
			} else {
				cout << "x";
			}
		}
		cout << endl;
	}*/
	
	return 0;
}




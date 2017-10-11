#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int x;		//wczytywana liczba
	int y=999999;		//wartoœæ ostatniej liczby, do sprawdzania czy to ci¹g
	int c=0;	//liczy d³ugoœæ ci¹gu
	int cmax=0;	//liczy d³ugoœæ ci¹gu
	int p=999999;		//pierwszy wyraz ci¹gu
	int pmax=0;		//pierwszy wyraz ci¹gu
	ifstream plik("liczby2.txt");
	
	//cout << "x\ty\tc\tcmax\tp\tpmax\n";
	while (!plik.eof()){
		plik >> x;
		
		if(x < y){
			c=1;
			p=x;
			y=x;
		}
		else{
			c++;
			y=x;
			if (c > cmax)
			{
				cmax = c;
				pmax = p;
			}
		}
		
		//cout << x << "\t" << y << "\t" << c << "\t" << cmax << "\t" << p << "\t" << pmax << endl;	
	}
	
	return 0;
}

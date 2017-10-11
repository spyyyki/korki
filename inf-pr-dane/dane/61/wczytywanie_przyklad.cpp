#include <fstream>
#include <iostream>

using namespace std;

int main(){
	ifstream plik("ciagi.txt");
	
//	while (!plik.eof()){ // End Of File -> EOF
//		int dlugosc;
//		int n1;
//		cin >> dlugosc;
//		cout << dlugosc << endl;
//		for (int i = 0; i < dlugosc; i++){
//			plik >> n1;
//			cout << n1 << "\n";
//		}
//		cout << endl;
//	}
	
	int a = 0xa1bc0d;
	cout << a << " - " << hex << a;
	
	plik.close();
	return 0;
}

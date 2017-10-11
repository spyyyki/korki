#include <iostream>

using namespace std;

void wypisuj_wyrazy() {
	int y;
	cin>>y;
	for (int x=0; x<y; x++)
	{
		// blok 1///////////
		cout<<"Zadanie 1";
		cout<< endl;
		////////////////////
		for(int o=0; o<=x; o++)
		{
			cout<<"Pomiedzy";
			cout<< endl;
		}
	}
}

int main() {
	wypisuj_wyrazy();
	return 0;
}

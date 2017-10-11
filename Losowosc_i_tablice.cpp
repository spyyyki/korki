#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(NULL));

/*	int o=0;
	for(int i = 0; i < 10000; i++) {
		
		if(rand()%100 < 70) {
			//cout<<"prawda\n";
			o++;
		} else {
			//cout<<"falsz\n";
		}
	}
	cout << endl << o;*/
	
	int x=1, y=8;
	
	string opcje[] = {"opcja1","opcja2","opcja3","opcja4","opcja5"};
	int a[] = {1,1,1,1,1};
	int tab[7];
	int mapa[10][10] = 
	{
		{9,9,9,9,9,9,9,9,9,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,0,0,0,0,0,0,0,0,9},
		{9,9,9,9,9,9,9,9,9,9}
	};
	
	int * nazwa;
	switch (mapa[x+1][y]) {
		case 0: {
			break;
		}
		case 9: {
			break;
		}
		default: {
			break;
		}
	}
	
	for(int i = 0; i < 8; i++) {
		cout << a[i] << "\n";
	}
	
	a[3] = 0;
	
	for(int i = 0; i < 5; i++) {
		if(a[i] != 0)
		cout << opcje[i] << " \n";
	}

	//system("PAUSE");
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	int x=0;	
	
	for(; x<=99; x++)
	{
		int r=x/10;
		int t=x%10;
		cout<< r;
		cout<< t;
		cout<< endl;
	}
		
	/*for(int i = 0; i <= 9; i++) {
		for(int j = 0; j <= 9; j++) {
			cout << i << j << endl;
		}
	}*/
	
	return 0;
}

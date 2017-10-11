#include <iostream>
#include <cstring>

using namespace std;

int main () {
	string obecny, poprzedni = "ma";
	while(cin>>obecny)
	{
		if (obecny == poprzedni)
		{
			cout << "Wykryto wyraz!\n";
		}
	}
	
	return 0;
}

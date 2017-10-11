#include <iostream>

using namespace std;

int silnia (int x)
{
	if (x==1){
		cout << 1 << " -> ";
		return 1;
	}
	else{
		int w = x * silnia(x-1);
		cout << w << " -> ";
		return w;
	}
}

int main()
{
	int x;
	cin >> x;
	cout << endl << silnia(x);
	return 0;
}

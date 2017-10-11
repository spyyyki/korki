#include <iostream>

using namespace std;

int potega(int x, int n)
{
	cout << "if(" << n << "==1)\n";
	if(n==1){
		cout << "return " << x << "\n";
		return x;
	}
	else{
		cout << "else\n";
		int w = x*potega(x, n-1);
		cout << "w =" << w << "\n";
		return w;
		cout << "return " << w << "\n";
	}
}

int main()
{
	int x;
	int n;
	do
	{
		cin >> x;
		cin >> n;
		cout << potega(x, n) << endl; 
	}
	while (x != -1);
	
	return 0;
}

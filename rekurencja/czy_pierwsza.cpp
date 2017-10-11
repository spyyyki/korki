#include <iostream>

using namespace std;

int x;
//int czyPierwsza(int x)
//{
//	int y = x - 1;
//	if (y==-1){
//		return -1;
//	}
//	if (y==1){
//		return 1;
//	}
//	else{
//		if(x%y==0){
//			return -1;
//		}
//		else{
//			return y-1;
//		}
//	}
//}

bool czyPierwsza(int y)
{
	y--;
	if (x <= 1)
	{
		return false;
	}
	if (y == 1)
	{
		return true;
	}
	else
	{
		if (x%y == 0) 
		{
			return false;
		}
		else
		{
			return czyPierwsza(y);
		}
	}
}

int main()
{
	do
	{
		cin >> x;
		if (czyPierwsza(x))
		{
			cout << "tak\n";
		}
		else
		{
			cout << "nie\n";
		}
	}
	while (x != -1);
	
	return 0;
}

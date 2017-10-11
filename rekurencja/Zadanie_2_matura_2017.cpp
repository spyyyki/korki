#include <iostream>

using namespace std;

int licz(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		int w = licz(x / 2);
		if (x % 2 == 1)
		{
			return w+1;
		}
		else
		{
			return w-1;
		}
	}
}

//int licz(int 13)
//{
//	if (13 == 1) return 1;
//	else {
//		int 1 = 
//		{
//			if (6 == 1) return 1;
//			else {
//				int 2 = 
//				{
//					if (3 == 1) return 1;
//					else {
//						int 1 = 
//						{
//							if (1 == 1) return 1;
//						}
//						if (3 % 2 == 1) return 1 + 1;
//						else return w - 1;
//					}
//				}
//				if (6 % 2 == 1) return w + 1;
//				else return 2 - 1;
//			}
//		}
//		if (13 % 2 == 1) return 1 + 1;
//		else return w - 1;
//	}
//}

int main()
{
	cout << licz(32);
	return 0;
}


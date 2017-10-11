#include <iostream>

using namespace std;

int main()
{
	char opcja;
	
	do
	{
		cout << "w - wyswietl\n"
			<< "k - koniec programu\n"
			<<"Podaj co chcesz zrobic: ";
		cin >> opcja;
		switch (opcja)
		{
			case 'w':
			{
				cout << "Napis.\n";
				break;
			}
			case 'k':
			{
				cout << "Do widzenia.\n";
				break;
			}
			default:
			{
				cout << "Nie ma takiej opcji.\n";
				break;
			}
		}
		
//		if (opcja == 'w')
//		{
//			cout << "Napis.\n";
//		}
//		else if (opcja == 'k')
//		{
//			cout << "Do widzenia.\n";
//		}
//		else
//		{
//			cout << "Nie ma takiej opcji.\n";
//		}
		
		cout << endl;
	} while (opcja != 'k');
	
	return 0;
}

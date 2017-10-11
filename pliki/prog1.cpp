#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
	cout << "asdasd\n\n";
	//ifstream ifile("asdf.txt");
	//fstream ifile("asdf.txt", ios::in);
	
	ofstream ofile("asdf.txt", ios::app);
	//fstream ofile("asdf.txt", ios::out);
	
	
	string a;
/*	while(cin>>a) {
		cout << a << 1;
	}*/

/*	while(!ifile.eof()) {
		ifile >> a;
		cout << a << endl;
	}*/
	
	for (int i = 0; i<10; i++) {
		ofile << i << " ";
	}
	
	ofile.close();
	
	return 0;
}

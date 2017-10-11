#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string zdanie=" ", wyraz=" ";
	while(wyraz != "."){
		cin>>wyraz;
		zdanie+=" "+wyraz;
	}
	cout<<zdanie;
	
	return 0;
}

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int x, y;
	cin>>x;
	cin>>y;
	int p=x/2+1, o=x/2, a=1;
	for(int l=0; l<p; l++){
		for(int t=0; t<y; t++){
			for(int n=0; n<o; n++){
				cout<<" ";
			}
			for(int j=0; j<a; j++){
				cout<<"o";
			}
			cout<<endl;
		}
		a++;
		a++;
		o--;
	}
	
	return 0;
}

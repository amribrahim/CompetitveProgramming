#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct encryptionpart{







};
int main(){

	int nrow;
	string name,rname;
	char fir;
	while(true){
	cin>>name;
	if(name==".")
		break;
	cin>>nrow;
	rname.clear();
	while(nrow--)
		rname+=name;
	for(int i=0;i<name.length();i++){
			cout<<rname<<endl;
			fir=rname[0];
			rname=&rname[1] ;
			rname+=fir;
	}
	
	}
//system("pause");







	return 0;
}
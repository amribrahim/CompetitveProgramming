#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>
//bool UpdateF(int ID,string username,string age,string gender,string mail,string address)
//{
//int i=0,line1;
//string line2,line3,line4,line5,line6;
//fstream myfile;
//ofstream temp;
//string hhh="ff";
//char *f=hhh;
//myfile.open(hhh);
//temp.open("temp.txt");
//if (myfile.is_open() && temp.is_open())
//{
//while ( myfile >> line1 >> line2 >> line3 >> line4 >> line5 >> line6 )
//{
//if(line1 != ID || line2 != username)
//{
//temp << line1 << endl << line2 << endl << line3 << endl << line4 << endl << line5 << endl << line6 << endl;
//continue;
//}
//else if (line1==ID && line2==username)
//{	
//temp << ID << endl << username << endl << age << endl << gender << endl << mail << endl << address << endl;
//i=1;
//}
//}
//myfile.clear();
//myfile.seekg(0, ios::beg);
//myfile.close();
//temp.close();
//if( remove( "Employee.txt" ) != 0 ); 
//rename("temp.txt","Employee.txt");
//if(i==0)
//return false;
//else 
//return true;
//}
//}
using namespace std;
//bool isvalid(char a){
//	if (a=='b'||a=='d'||a=='q'||a=='p'||a=='i'||a=='o'||a=='v'||a=='w'||a=='x')
//		return true;
//	else return false;
//
//
//
//}
int main(){
/*
string letters;
	while(cin>>letters){
		
		for(int count=0;count<letters.length();count++){
			if((int)letters[count]<'A'){
				cout<<letters[count];

			}
			else if(letters[count]<'P'){

				cout<<(((int)letters[count]-(int)'A')/3)+2;




			}
			else{

				if(letters[count]<'T')
					cout<<7;
				else if(letters[count]<'W')
					cout<<8;
				else 
					cout<<9;


			}


		}
		cout<<endl;
	}
	*/
/*	
int people,shares;
	
	while(cin>>people>>shares){
		people++;
		cout<<shares/people<<endl;

}*/
/*int counter=0;
char x;
string line;
getline(cin,line);
while(!cin.eof()){
	
	for(int cline=0;cline<line.length();cline++){
		if(line[cline]=='"'){
			if(counter%2==0)
				cout<<"``";
			else
				cout<<"''";
			counter++;
			}
		else
		cout<<line[cline];
	}
		cout<<endl;
getline(cin,line);


}*/
/*
string h;
	string sol="";
	cin>>h;
	while(h[0]!='#'){
		
		for(int c=h.length()-1;c>=0;c--){
			if(isvalid(h[c])){
				if(h[c]=='b')
					sol.append("d");
				else if(h[c]=='d')
					sol.append("b");
				else if(h[c]=='q')
					sol.append("p");
				else if(h[c]=='p')
					sol.append("q");
				else sol.append(h.substr(c,1));
			}

			else 
				break;

		}
		if(h.length()==sol.length())
			cout<<sol;
		else cout<<"INVALID";
			sol="";
		cout<<endl
			cin>>h;



	}*/
/*int cases,case1,repetition;
	string sol="",actstr;
	cin>>cases;
	while(cases--){
		cin>>case1>>repetition>>actstr;
		
		for(int countstr=0;countstr<actstr.length();countstr++)
			for(int countrep=0;countrep<repetition;countrep++)
				sol.append(actstr.substr(countstr,1));

		cout<<case1<<' '<<sol<<endl;
		sol="";

	}

*/
/*swelist<int,10,10>var;
for (int i=0;i<10;i++){
	var[i]=i+23;
	var(i)=i+1;


}

for (int i=0;i<10;i++){
	cout<<var[i]<<'\t';
	cout<<var(i)<<endl;


}


*/

unsigned long long int num,tot, temp,tl;
	cin>>tot;
	while(tot--){
		
		cin>>num;
		temp=sqrt(num);		
		if(temp*temp==num)
		{
			if((temp%2!=0||temp==2)&&(temp%3!=0||temp==3)&&(temp%5!=0||temp==5)&&(temp%7!=0||temp==7)&&temp!=1)
		{
			tl=sqrt(temp)+1;
			for(int i=11;i<tl;i++)
		{
			if(temp%i==0){
				temp=-1;
				cout<<"NO"<<endl;
				break;
			}
		}
			if(temp!=-1)
			cout<<"YES"<<endl;
			continue;
			
			}
		}
		
		
			cout<<"NO"<<endl;
	}

//system("pause");



	return 0;
}
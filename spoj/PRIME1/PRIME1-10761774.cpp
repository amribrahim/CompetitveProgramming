#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
bool isbaseprime(long long int x){
	if(x!=1)
		if(x%2!=0||x==2)
			if(x%3!=0||x==3)
				if(x%5!=0||x==5)
					if(x%7!=0||x==7)
						return true;
	return false;



}
bool isadvprime(long long int x,vector<long long int> &primes){
	long long int root=sqrt(x);
	for(long long int i=0;(i<primes.size())&&primes[i]<=root;i++)
		if(x%primes[i]==0)
			return false;
	return true;


}
void genprimesuntil(long long int x,vector<long long int> &primes){
	if (x>=2)
		primes.push_back(2);
	for(int i=3;i<=x;i+=2)
		if(isbaseprime(i)&&isadvprime(i,primes))
			primes.push_back(i);

}
int main(){
	vector<long long int> primes ;
	long long int n,m;
	int num;
	cin>>num;
	while(num--){
		cin>>n>>m;
	genprimesuntil(sqrt(m),primes);

	if(n<=2)
	cout<<2<<endl;
	if (n%2==0)
		n++;
	for(;n<=m;n+=2)
		if(isbaseprime(n)&&isadvprime(n,primes))
			cout<<n<<endl;
	primes=vector<long long int>(0);

	}
	//system("pause");






	return 0;
}

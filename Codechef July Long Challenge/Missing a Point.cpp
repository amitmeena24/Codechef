#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t>0)
	{
	    long long int p;
	    cin>>p;
	int xor_a=0, xor_b=0;

	for(int i=0;i<4*p-1;i++)
	{
	   long long int a,b;
	   cin>>a>>b;

	   xor_a^=a;
	   xor_b^=b;

	}

	cout<<xor_a<<" "<<xor_b<<endl;

	    t--;
	}
	return 0;
}
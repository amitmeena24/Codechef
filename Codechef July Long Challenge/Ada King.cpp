#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t>0)
	{
	    int s;
	    cin>>s;
	    int count=1;

	    for(int i=0;i<8;i++)
	    {
	        for(int j=0;j<8;j++)
	        {
	            if(count<s)
	             cout<<".";

	            else if(count==s)
	             cout<<"O";

	            else
	                cout<<"X";

	        count+=1;
	        }

	        cout<<endl;
	    }
	    t--;
	}
	return 0;
}
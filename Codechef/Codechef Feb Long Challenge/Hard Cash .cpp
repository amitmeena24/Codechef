#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,sum=0,r;
    cin>>t;
    while(t--){
        sum=0;
        long long int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        r=sum%k;
        cout<<r<<endl;
     }
    
}

            
           

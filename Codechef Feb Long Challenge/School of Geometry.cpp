#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
cin>>t;
while(t--){
int n;
long long int sum=0;
cin>>n;
int A[n];
int B[n];
for(int i=0; i<n; i++){
cin>>A[i];
}
for(int i=0; i<n; i++){
cin>>B[i];
}
sort(A,A+n);
sort(B,B+n);
for(int i=0; i<n; i++)
{
if(A[i]<B[i])
 sum+=A[i];
 else
 sum+=B[i];
}
cout<<sum<<endl;
}
return 0;
}
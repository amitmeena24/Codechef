#include<bits/stdc++.h>
#define int      long long int
#define nitro    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define pb       push_back
#define pi       3.1415926535897932384626
#define mod      1000000007
#define endl     '\n'
#define DEBUG    false
#define F        first
#define S        second
#pragma GCC optimize "trapv"

using namespace std;

signed main()
{
 nitro;
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     vector<int> a(n),b(n);
     std::map<int, int> h1,h2,h3,h4,h5;
     for(int i=0;i<n;i++){
     cin>>a[i];
     h1[a[i]]++;
     h3[a[i]]++;
     }
     for(int i=0;i<n;i++){
     cin>>b[i];
     h2[b[i]]++;
     h3[b[i]]++;
     }
     int f=0;
     for(auto i:h3)
     {
         if(i.S%2!=0)
         {
             f=1;
             break;
         }
     }
     int t1[n],t2[n];
     for(int i=0;i<n;i++)
     t1[i]=a[i];
     for(int i=0;i<n;i++)
     t2[i]=b[i];
     sort(t1,t1+n);
     sort(t2,t2+n);
     int p=0;
     for(int i=0;i<n;i++)
     {
         if(t1[i]!=t2[i])
         {
             p=1;
             break;
         }
     }
     if(p==0)
     cout<<0<<endl;
     else if(f==1)
     cout<<-1<<endl;
     else
     {
     	int c=0;
     	int m=INT_MAX;
     	for(int i=0;i<n;i++)
     	m=min(m,a[i]);
     	for(int i=0;i<n;i++)
     	m=min(m,b[i]);
        for(auto i:h1)
        {
            if(i.S>h2[i.F])
            h4[i.F]=(i.S-h2[i.F])/2;
        }
        for(auto i:h2)
        {
            if(i.S>h1[i.F])
            h5[i.F]=(i.S-h1[i.F])/2;
        }
        std::vector<int> v1,v2;
        for(auto i:h4)
        {
            for(int j=0;j<i.S;j++)
            v1.pb(i.F);
        }
        for(auto i:h5)
        {
            for(int j=0;j<i.S;j++)
            v2.pb(i.F);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());
        for(int i=0;i<v1.size();i++)
        {
        	int k1=v1[i];
        	int k2=v2[i];
        	c+=min(2*m,(min(k1,k2)));
        }
        cout<<c<<endl;
     }
 }
 return 0;
}
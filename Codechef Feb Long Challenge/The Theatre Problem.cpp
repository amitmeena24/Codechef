#include<bits/stdc++.h>
 using namespace std;
#define pb push_back;
#define fast_cin() ios_base::sync_with_stdio(false);cin.tie(NULL)

int fun(int x)
{
    if(x==0)
    return -100;
    else
    return x;
}
int main(){
    fast_cin();
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        int n=0,f=0;char s; int arr[5][13];
        cin>>n;
        for(int j=0; j<=12; j++){
            for(int i=0; i<5; i++){
                arr[i][j]={0};
            }
        }
        for(int i=0; i<n; i++){
            cin>>s>>f;
            if(s=='A'){
                arr[1][f]++;
            }
            if(s=='B'){
                arr[2][f]++;
            }
                 if(s=='C'){
                arr[3][f]++;
            }
            if(s=='D'){
                arr[4][f]++;
            }
            }
            int m=-214748;
            for(int i=1;i<5;i++){
                for(int j=1;j<5; j++){
                    if(i!=j){
                        for(int k=1;k<5;k++)
                        if(k!=j&&k!=i){
                            for(int p=1;p<5;p++){
                                if(p!=k&&p!=j&&p!=i){
                                    m=max(m,fun(arr[i][3]*100)+fun(arr[j][6]*75)+fun(arr[k][9]*50)+fun(arr[p][12]*25));
                                    m=max(m,fun(arr[i][3]*100)+fun(arr[j][6]*75)+fun(arr[k][12]*50)+fun(arr[p][9]*25));
                                    m=max(m,fun(arr[i][3]*100)+fun(arr[j][9]*75)+fun(arr[k][6]*50)+fun(arr[p][12]*25));
                                    m=max(m,fun(arr[i][3]*100)+fun(arr[j][9]*75)+fun(arr[k][12]*50)+fun(arr[p][6]*25));
                                    m=max(m,fun(arr[i][3]*100)+fun(arr[j][12]*75)+fun(arr[k][6]*50)+fun(arr[p][9]*25));
                                    m=max(m,fun(arr[i][3]*100)+fun(arr[j][12]*75)+fun(arr[k][9]*50)+fun(arr[p][6]*25));
                                    
                                    m=max(m,fun(arr[i][6]*100)+fun(arr[j][3]*75)+fun(arr[k][9]*50)+fun(arr[p][12]*25));
                                    m=max(m,fun(arr[i][6]*100)+fun(arr[j][3]*75)+fun(arr[k][12]*50)+fun(arr[p][9]*25));
                                    m=max(m,fun(arr[i][6]*100)+fun(arr[j][9]*75)+fun(arr[k][12]*50)+fun(arr[p][3]*25));
                                    m=max(m,fun(arr[i][6]*100)+fun(arr[j][9]*75)+fun(arr[k][3]*50)+fun(arr[p][12]*25));
                                    m=max(m,fun(arr[i][6]*100)+fun(arr[j][12]*75)+fun(arr[k][3]*50)+fun(arr[p][9]*25));
                                    m=max(m,fun(arr[i][6]*100)+fun(arr[j][12]*75)+fun(arr[k][9]*50)+fun(arr[p][3]*25));
                                    
                                    m=max(m,fun(arr[i][9]*100)+fun(arr[j][3]*75)+fun(arr[k][6]*50)+fun(arr[p][12]*25));
                                    m=max(m,fun(arr[i][9]*100)+fun(arr[j][3]*75)+fun(arr[k][12]*50)+fun(arr[p][6]*25));
                                    m=max(m,fun(arr[i][9]*100)+fun(arr[j][6]*75)+fun(arr[k][12]*50)+fun(arr[p][3]*25));
                                    m=max(m,fun(arr[i][9]*100)+fun(arr[j][6]*75)+fun(arr[k][3]*50)+fun(arr[p][12]*25));
                                    m=max(m,fun(arr[i][9]*100)+fun(arr[j][12]*75)+fun(arr[k][3]*50)+fun(arr[p][6]*25));
                                    m=max(m,fun(arr[i][9]*100)+fun(arr[j][12]*75)+fun(arr[k][6]*50)+fun(arr[p][3]*25));
                                    
                                    m=max(m,fun(arr[i][12]*100)+fun(arr[j][3]*75)+fun(arr[k][6]*50)+fun(arr[p][9]*25));
                                    m=max(m,fun(arr[i][12]*100)+fun(arr[j][3]*75)+fun(arr[k][9]*50)+fun(arr[p][6]*25));
                                    m=max(m,fun(arr[i][12]*100)+fun(arr[j][6]*75)+fun(arr[k][3]*50)+fun(arr[p][9]*25));
                                    m=max(m,fun(arr[i][12]*100)+fun(arr[j][6]*75)+fun(arr[k][9]*50)+fun(arr[p][3]*25));
                                    m=max(m,fun(arr[i][12]*100)+fun(arr[j][9]*75)+fun(arr[k][6]*50)+fun(arr[p][3]*25));
                                    m=max(m,fun(arr[i][12]*100)+fun(arr[j][9]*75)+fun(arr[k][3]*50)+fun(arr[p][6]*25));
                                }
                            }
                        }
                    }
                }
            }
            cout<<m<<'\n';
            sum+=m;
        }
        cout<<sum<<'\n';
}
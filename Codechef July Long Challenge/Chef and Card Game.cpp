#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long no) { 
    return no == 0 ? 0 : no % 10 + sumDigits(no / 10); 
} 

int main() {
	int t, p, c, m, x1, x2;
    long long s, r;
  
	cin >> t;

	while(t--) {
        cin >> p;
    
        c = 0;
        m = 0;
        
        for(int i=0; i<p; i++) {
            cin >> s;
            cin >> r;
            
            x1 = sumDigits(s);
            x2 = sumDigits(r);
            
            if(x1 > x2) 
                c++;
            else if(x1 < x2) 
                m++;
            else {
                c++;
                m++;
            }
        }
    
        if(c > m) 
            cout << "0 " << c << endl;
        else if(c < m) 
            cout << "1 " << m << endl;
        else
            cout << "2 " << c << endl;
    }

	return 0;
}
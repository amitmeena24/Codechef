#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, p, i, k;
	long long skippedStrings, total;
    vector<int> s;
    
	cin >> t;

	while(t--) {
        total = 0;
        cin >> p;
        
        for(i=0; i<p; i++) {
          cin >> k;
          s.push_back(k);
          if(i > 0) {
            total += (abs(s[i] - s[i-1]) - 1);
          }
        }
    
        cout << total << endl;
    
        s.clear();
    }

	return 0;
}
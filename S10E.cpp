// October Long Challenge 2019 Div 2

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int ans = 0;
	    vector <int> v(n);
	    for(int i = 0; i < n; i++)
	        cin >> v[i];
	    for(int i = 0; i < n; i++) {
	        int mn = 751;
	        for(int j = i-1; j >= 0 && j >= i - 5; j--)
	            mn = min(mn, v[j]);
	        if(v[i] < mn)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}

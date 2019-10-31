// October Long Challenge 2019 Div 2

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector <int> v(n);
	    for(int i = 0; i < n; i++)
	        cin >> v[i];
	    unordered_map <ll, ll> um, last;
	    int mx = 0, ans = 0;
	    for(int i = 0; i < n; i++) {
	        last[v[i]] = i;
	    }
	    for(int i = 0; i < n; i++) {
	        int val = 0;
	        if(last[v[i]] == i) {
    	        for(int j = v[i]; j <= mx; j += v[i]) {
    	            if(um.find(j) != um.end()) {
    	                val += um[j];
    	            }
    	        }
	        }
	        mx = max(mx, v[i]);
	        um[v[i]]++;
	        ans = max(ans, val);
	    }
	    cout << ans << endl;
	}
	return 0;
}

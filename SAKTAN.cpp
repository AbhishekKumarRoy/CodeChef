// October Long Challenge 2019 Div 2

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int t, n, m, q, x, y;
	cin >> t;
	while(t--) {
	    cin >> n >> m >> q;
	    ll ans = 0;
	    vector <ll> row(n+1, 0), col(m+1, 0);
	    while(q--) {
	        cin >> x >> y;
	        row[x]++;
	        col[y]++;
	    }
	    ll even = 0, odd = 0;
	    for(int i = 1; i < m+1; i++)
	       col[i] & 1 ? odd++ : even++;
	    for(int i = 1; i < n+1; i++)
	        ans += row[i] & 1 ? even : odd;
	    cout << ans << endl;
	}
	return 0;
}

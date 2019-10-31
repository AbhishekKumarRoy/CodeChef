// October Long Challenge 2019 Div 2

// Even Edges(EVEDG)

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll t, n, m;
	cin >> t;
	while(t--) {
	    int u, v, k = 1;
	    cin >> n >> m;
	    vector <int> deg(n, 0), ans(n, 1);
	    for(int i = 0; i < m; i++) {
	        cin >> u >> v;
	        deg[--u]++;
	        deg[--v]++;
	    }
	    if(m & 1) {
	        int i = 0;
	        for(; i < n; i++)
	            if(deg[i]&1)
	                break;
	        if(i == n) {
	            ans[u] = 2;
	            ans[v] = 3;
	            k = 3;
	        }
	        else {
	            ans[i] = 2;
	            k = 2;
	        }
	    }
	    cout << k << endl;
	    for(int i = 0; i < n; i++)
	        cout << ans[i] << " ";
	    cout << endl;
	}
	return 0;
}

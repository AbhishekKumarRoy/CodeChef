//Problem- Doraemon

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define sc second
#define fs first
#define pb push_back
#define deb(x) cout << #x << " -- " << x << endl;

using namespace std;

int main()
 {
    ll t, n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    int ans = 0;
	    vector <vector<ll>> matrix(n, vector <ll> (m, 0));
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < m; j++) {
	            cin >> matrix[i][j];
	        }
	    }
	    vector <vector<ll>> row(n, vector <ll> (m, 0)), col(n, vector <ll> (m, 0));
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < m; j++) {
	            int ctr = 0;
	            for(int k = 0; k < n && k < m; k++) {
	                if(j+k >= m || j-k < 0 || matrix[i][j+k] != matrix[i][j-k] || i+k >= n || i-k < 0 || matrix[i+k][j] != matrix[i-k][j])
	                    break;
	                ctr++;
	            }
	            ans += ctr;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

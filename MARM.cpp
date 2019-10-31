// October Long Challenge 2019 Div 2

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    vector <ll> v(n);
	    for(ll i = 0; i < n; i++)
	        cin >> v[i];
	    if(k <= n) {
            for(ll i = 0; i < k; i++) {
                v[i%n] = v[i%n] ^ v[n-(i%n)-1];
            }
            for(ll i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << endl;
            continue;
	    }
	    for(ll i = 0; i < n; i++) {
                v[i] = v[i] ^ v[n-i-1];
            }
	    vector <vector<ll>> arr(3, vector <ll> (n, 0));
	    arr[0] = v;
	    if(n&1)
	        arr[0][n/2] = 0;
	    for(ll i = 1; i < 3; i++) {
	        arr[i] = arr[i-1];
	        for(ll j = 0; j < n; j++)
	            arr[i][j] = arr[i][j] ^ arr[i][n-(j)-1];
	    }
	    ll row = ((k-1) / n) % 3;
	    ll col = (k-1) % n;
	    if(row == 0) {
	        for(ll i = 0; i <= col; i++)
	            cout << arr[row][i] << " ";
	        for(ll i = col+1; i < n; i++)
	            cout << arr[2][i] << " ";
	    }
	    else {
	        for(ll i = 0; i <= col; i++)
	            cout << arr[row][i] << " ";
	        for(ll i = col+1; i < n; i++)
	            cout << arr[row-1][i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

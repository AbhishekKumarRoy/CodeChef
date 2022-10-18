// Problem link: https://www.codechef.com/problems/FASTFOOD


#include <bits/stdc++.h>

#define ll long long
#define FOR(i,a,b) for(ll i = (ll)(a); i < (ll)(b); i++)

using namespace std;

const int MAX = 3e5 + 5;


int main() {
	ll t, n;
	cin >> t;
	
	while(t--) {
	    ll ans = 0;
	    cin >> n;
	    vector <ll> v1(n);
	    vector <ll> v2(n);
	    vector <ll> sum(n);
	    FOR(i, 0, n) {
	        cin >> v1[i];
	        if(i == 0)
	            sum[i] = v1[i];
	        else
	            sum[i] = v1[i] + sum[i-1]; 
	    }
	    FOR(i, 0, n) {
	        cin >> v2[i];
	    }
	    for(int i = n-2; i >=0 ; i--) {
	        v1[i] += v1[i+1];
	        v2[i] += v2[i+1];

	    }
	    v2.push_back(0);
	    ans = v2[0];
	    int i;
	    for(i = 0; i < n; i++) {
	        ans = max(int(ans), int(sum[i]+v2[i+1]));
	    }
	   
	   // if(i == 0)
	   //     ans = v2[i];
	   // else if(i == n)
	   //     ans = sum[n-1];
	   // else
	   //     ans = v2[i] + sum[i-1];
	    cout << ans << endl;
	}
	return 0;
}

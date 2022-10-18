// Link to problem: https://www.codechef.com/problems/ADADISH

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
    ll t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int ans = 0;
	    vector <int> v(n, 0);
	    for(int i = 0; i < n; i++)
	        cin >> v[i];
	    sort(v.begin(), v.end());
	    if(n == 1)
	        ans = v[0];
	    else if(n == 2)
	        ans = v[1];
	    else if(n == 3) {
	        ans = max(v[2], v[0] + v[1]);
	    }
	    else {
	        ans = min(max((v[0] + v[3]), (v[1] + v[2])), max(v[3], v[0]+v[1]+v[2]));
	    }
	    cout << ans << endl;
	}
	return 0;
}

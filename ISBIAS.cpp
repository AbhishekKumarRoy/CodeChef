//Problem- EQUALITY

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
    ll t, n, l, r, q, val;
    cin >> n >> q;
    vector <ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while(q--) {
        cin >> l >> r;
        --l, --r;
        bool inc = 0, inc2 = 0;
        inc = v[l+1] > v[l];
        inc2 = v[r-1] < v[r];
        if(inc == inc2)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
	return 0;
}

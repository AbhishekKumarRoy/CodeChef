// Problem link: https://www.codechef.com/problems/MATCHS

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n, m;
	int t;
	cin >> t;
	
	while(t--) {
	    cin >> n >> m;
	    int i = 0, p;
	    while(n > 0 && m > 0) {
	        i++;
	        if(n > m)
	        {
	            p = n / m;
	            if(p > 1 || p*m == n)
	                break;
	            n -= p*m;
	        }
	        else
	        {
	            p = m / n;
	            if(p > 1 || p*n == m)
	                break;
	            m -= p*n;
	        }
	    }
	    cout << (i%2 == 1 ? "Ari" : "Rich") << endl;
	}
	return 0;
}


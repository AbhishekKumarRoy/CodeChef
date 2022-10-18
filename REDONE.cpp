// Problem statement : https://www.codechef.com/problems/REDONE

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ll n;
	int t;
	cin >> t;
	ll mod = 1e9 + 7;
	vector <ll> dp(1e6 + 1);
	for(int i = 1; i < 1e6+1; i++)
	{
	    dp[i] = (i + dp[i-1] + (dp[i-1]*i) ) % mod;
	}
	while(t--) {
	    cin >> n;
	    cout << dp[n] << endl;
	}
	return 0;
}


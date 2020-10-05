//Problem- Breaking Bricks

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
    ll t, s, w1, w2, w3, sum;
    cin >> t;
    while(t--) {
        cin >> s >> w1 >> w2 >> w3;
        if( (w1+w2+w3) <= s)
            cout << "1";
        else if(w1 + w2 <= s || w2 + w3 <= s)
            cout << "2";
        else
            cout << "3";
        cout << endl; 
    }
    return 0;
}

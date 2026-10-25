#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll power(ll a,ll b,ll c){
    a%=c;
    ll res=1;
    while(b>0){
        if (b&1)
            res = (__int128_t)(res*a)%c;
        a=(__int128_t)(a*a)%c;
        b>>=1;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a;ll b;ll c;
    cin >> a >> b >> c;
    cout << power(a,b,c);
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAX = 1e9;
bool isprime[MAX+1];
void sieve(ll n){
    fill(isprime,isprime+n+1,true);
    isprime[0]=isprime[1]=false;
    for (ll i=2;i*i<=n;i++){
        if(isprime[i]==true)
            for (int j=i*i;j<=n;j+=i)
                isprime[j]=false;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a;
    cin >> a;
    sieve(a);
    for (int i=2;i<=a;i++)
        if (isprime[i])
            cout << i << " ";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int n,q;cin >> n >> q;
    vector<long long> mang(n);
    for (int i=0;i<n;i++)
        cin >> mang[i];
    while(q--){
        int stv;
        cin >> stv;
        int l=0,r=n-1;
        while(l<=r){
            int m = l +(r-l)/2;
            if (stv>mang[m])
                l = m+1;
            else if (stv<mang[m])
                r = m-1;
            else{
                cout << m+1 << endl;
                break;
            }
        }
    }
    return 0;
}

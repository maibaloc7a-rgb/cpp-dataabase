#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int n,q;cin >> n >> q;
    vector<int> mang(n);
    map<int,vector<int>>pos;
    for (int i=0;i<n;i++){
        cin >> mang[i];
        pos[mang[i]].push_back(i);
    }
    while (q--){
        int l,r,x; cin >> l >> r >> x;
        if (pos.find(x) == pos.end()){
            cout << 0 << endl;
            continue;
        }
        auto& so = pos[x];
        auto it1 = lower_bound(so.begin(),so.end(),l-1);
        auto it2 = upper_bound(so.begin(),so.end(),r-1);
        int count = it2 - it1;
        cout << count << endl;
        }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    vector<int>b(a);
    for (int i=0;i<a;i++)
        cin >> b[i];
    vector<int>sub;
    for (int x:b){
        auto it = lower_bound(sub.begin(),sub.end(),x);
        if (it == sub.end())
            sub.push_back(x);
        else
            *it = x;
    }
    cout << sub.size();
    return 0;
}

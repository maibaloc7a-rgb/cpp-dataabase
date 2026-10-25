#include <bits/stdc++.h>

using namespace std;
void xnp(int n , string s =""){
    if (s.size() == n) {
        cout << s << endl;
        return;
    }
    xnp(n,s + "0");
    xnp(n,s + "1");
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    xnp(a);
    return 0;
}

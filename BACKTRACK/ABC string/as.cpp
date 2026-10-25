#include<bits/stdc++.h>
using namespace std;
void xau(int n, string a = ""){
    if (a.length()==n){
        cout << a << endl;
        return;
    }
    for (char x:{'A','B','C'})
        if (a.empty() || a.back()!=x)
            xau(n,a+x);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int a;cin >> a;
    xau(a);
    return 0;
}

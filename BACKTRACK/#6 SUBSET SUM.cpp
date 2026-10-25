#include<bits/stdc++.h>
using namespace std;
bool so(int n,long long sum,long long target,const vector<long long>& mang){
    if (sum == target)
        return true;
    for(int j=n;j<mang.size();j++)
        if (so(j+1,sum + mang[j],target,mang))
            return true;
    return false;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    long long a,b;cin >> a >> b;
    vector<long long>mang(a);
    for (int i=0;i<a;i++)
        cin >> mang[i];
    if (so(0,0,b,mang))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

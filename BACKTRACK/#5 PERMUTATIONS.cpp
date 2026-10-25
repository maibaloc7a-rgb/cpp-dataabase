#include<bits/stdc++.h>
using namespace std;
void tc(int b,const vector<int>& n,vector<int>& m,vector<bool>& visited){
    if (b == m.size()){
        for (int x:m)
            cout << x << " ";
        cout << endl;
        return;
    }
    for (int i=0;i<n.size();i++){
        if (!visited[i]){
            visited[i]=true;
            m.push_back(n[i]);
            tc(b,n,m,visited);
            m.pop_back();
            visited[i]=false;
        }
    }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int a,b;cin >> a >> b;
    vector<int>mang;
    for (int i=1;i<=a;i++)
        mang.push_back(i);
    vector<int>sct;
    vector<bool> visited(a,false);
    tc(b,mang,sct,visited);
    return 0;
}

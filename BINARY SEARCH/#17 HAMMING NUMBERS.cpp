#include<bits/stdc++.h>
using namespace std;
vector<long long>hamming;
const long long LIM = 1e18;
void sinhsohamming(){
    for (long long p2=1;p2<=LIM;p2*=2){
        for (long long p3=p2;p3<=LIM;p3*=3){
            for (long long p5=p3;p5<=LIM;p5*=5){
                hamming.push_back(p5);
                if (p5>LIM/5)break;
            }
            if (p3>LIM/3)break;
        }
        if (p2>LIM/2)break;
    }
    sort(hamming.begin(),hamming.end());
    hamming.erase(unique(hamming.begin(),hamming.end()),hamming.end());
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    int q;cin >> q;
    sinhsohamming();
    while (q--){
        long long stv;cin >> stv;
        long long l=0,r=hamming.size()-1;
        bool check = false;
        while(l<=r){
            long long m=l+(r-l)/2;
            if (stv>hamming[m])
                l=m+1;
            else if (stv<hamming[m])
                r=m-1;
            else{
                check = true;
                cout << m+1 << endl;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }
    return 0;
}

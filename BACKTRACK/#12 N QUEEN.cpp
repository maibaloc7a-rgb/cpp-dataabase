#include<bits/stdc++.h>
using namespace std;
int n,cnt = 0;
bool cot[30],cheo1[30],cheo2[30];
void queen(int i){
    if (i>n){
        cnt++;
        return;
    }
    for (int j=1;j<=n;j++)
        if (!cot[j] && !cheo1[i+j] && !cheo2[i-j+n]){
            cot[j] = true;
            cheo1[i+j] = true;
            cheo2[i-j+n] = true;

            queen(i+1);

            cot[j] = false;
            cheo1[i+j] = false;
            cheo2[i-j+n] = false;
        }
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    cin >> n;
    queen(1);
    cout << cnt;
    return 0;
}

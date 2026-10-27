#include<bits/stdc++.h>
using namespace std;
long long a[4][4];
long long max_mushroom = LONG_MIN;
void backtrack(int r,int c, long long cur_sum){
    cur_sum += a[r][c];
    if (r == 4-1 && c == 4-1){
        max_mushroom = max(max_mushroom, cur_sum);
        return;
    }
    if (c+1<4)
        backtrack(r,c+1,cur_sum);
    if (r+1<4)
        backtrack(r+1,c,cur_sum);

}
int main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            cin >> a[i][j];
    backtrack(0,0,0);
    cout << max_mushroom;
    return 0;
}

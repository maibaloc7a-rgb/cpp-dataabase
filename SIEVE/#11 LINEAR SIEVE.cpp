#include<bits/stdc++.h>
using namespace std;
void linearsieve(int n,vector<int>& min_primes, vector<int>& primes){
    min_primes.assign(n+1,0);
    primes.clear(); // Xóa sạch dữ liệu cũ nếu gọi hàm nhiều lần
    for (int i=2;i<=n;i++){
        if (min_primes[i]==0)
        {
            min_primes[i] = i;
            primes.push_back(i);
        }
        for (int p:primes){
            if (p>min_primes[i] || i*p >n)
                break;
            min_primes[i*p] = p;
        }
    }
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(0);
    int n; cin >> n;
    vector<int>min_primes;
    vector<int>primes;
    linearsieve(n,min_primes,primes);
    cout << primes.size();
    return 0;
}

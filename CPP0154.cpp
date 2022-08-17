//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
const long long big = 1e6;

void solve(int n, int k) {
    int sum = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        int tmp = i % k;
        sum += tmp;
    }
    
    if ( sum == k ) cout << 1;
    else cout << 0;
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        long long n, k;
        cin >> n >> k;
        solve(n,k);
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
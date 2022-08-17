//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
const long long big = 1e6;
vector <long long> res;

int check(int a, int m) {
    for (int i = 1 ; i < m ; i++)
    {
        if ( (i*a) % m == 1 )
        {
            return i;
        }
    }
    return -1;
}

int main() {
    faster();
    int t;
    cin >> t;
    while ( t-- )
    {
        long long a, m;
        cin >> a >> m;
        cout << check(a,m);
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
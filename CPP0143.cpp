//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
const long long big = 1e6;
vector <long long> res;

vector <long long> F(100);

void fibonacci() {
    F[0] = 0;
    F[1] = 1;
    for (int i = 2 ; i <= 97 ; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
}

int main() {
    faster();
    fibonacci();
    int t;
    cin >> t;
    while ( t-- )
    {
        long long n;
        cin >> n;
        cout << F[n];
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
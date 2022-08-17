//I'm HuyNho or you can call me Chimmey
#include <bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define matrix vector <vector<long long>>
#define MOD 1000000007
const long long big = 1e6;
vector <long long> res;

bool isPrime[1000001];
vector <long long> a;

void Erastothenes() {
    for (int i = 0 ; i <= 1000000 ; i++)
	{
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2 ; i * i <= 1000000 ; i++)
	{
        if ( isPrime[i] == true )
		{
            for (int j = i * i ; j <= 1000000 ; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 0 ; i <= 1000000 ; i++)
    {
        if ( isPrime[i] == true )
        {
            a.push_back(i);
        }
    }
}

int main() {
    faster();
    Erastothenes();
    int t;
    cin >> t;
    while ( t-- )
    {
        long long n;
        cin >> n;
        for (int i = 2 ; i < 1000000 ; i++)
        {
            if ( isPrime[i] == true && isPrime[n-i] == true )
            {
                cout << i << " " << n-i;
                break;
            }
            if ( i >= n )
            {
                break;
            }
        }
        if ( t != 0 )
        {
            cout << endl;
        }
    }
}
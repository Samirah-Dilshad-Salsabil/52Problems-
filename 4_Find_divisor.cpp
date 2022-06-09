#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n;
ll m;
cin >> m;

for (ll j = 0 ; j<m ; j++) 
{
    cin >> n;
    cout << "Case 1: " ;
    for (ll i = 1 ; i<=n ; i++)
    {
        
        if (n%i==0)
        {
            cout<< i << " " ;
        }

    }
    
}

return 0;
}
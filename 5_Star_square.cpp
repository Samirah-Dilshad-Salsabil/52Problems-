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
    for (ll i = 1 ; i<=n ; i++)//wil creat vertical line of star
    {
        for (ll i = 1 ; i<=n ; i++)//wil creat horzonta  line of star
        {
             cout<< "*";
        }

    cout<< endl;
              
    } 
}

return 0;
}
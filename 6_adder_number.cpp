#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll m;
ll n;
cin >> m;

for (ll j = 0 ; j<m ; j++) 
{
    cin>> n ;
    int num = n;
    for (ll i = 0 ; i<4 ; i++)
    {
        num = (num/10);
    }

    cout << num<< "   " << n<< endl;
    ll sum =(num%10)+ (n%10);
    cout<< "Sum = " << sum << endl;
}

return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
int n[5] ;
ll m;
cin >> m;

for (ll j = 0 ; j<m ; j++) 
{
    for(int i=0; i<5; i++)
    {
        cin>>n[i];
    }
    ll sum = 0;
    sum= n[0] + n[4]  ;
    cout<< "Sum = " << sum << endl;
}

return 0;
}
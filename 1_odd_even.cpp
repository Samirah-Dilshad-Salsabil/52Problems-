#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n;
ll m;
cin >> m;

for (ll i = 0 ; i<m ; i++) {
    cin >> n;
    if (n%2==0)
    {
        cout<< "even"<< endl;
    }

    else
    {
        cout<< "odd"<<endl;
    }
}


return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(ll k) {
  if (k> 1) {
      return k * factorial(k - 1);
  }
  else{
      return 1;
  }
}

int main()
{
ll n,number;
cin>>n;
for (int i=0; i<n; i++)
{
    cin >> number;
    cout<< factorial(number)<< endl;
}
return 0;
}


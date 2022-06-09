//count number of zeros at the end of the factorial of any number
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll count_last_zeros(ll zeros){
    ll c = 0;
    while(zeros > 0){
        if(zeros%5==0)c++;
        if(zeros%25==0)c++;
        if(zeros%125==0)c++;
        if(zeros%625==0)c++;
        zeros--;
    }
    return c;
    }

int main()
{
ll n,number;
cin>>n;
for (int i=0; i<n; i++){
    cin >> number;
    cout << count_last_zeros(number)<< endl;
}
return 0;
}


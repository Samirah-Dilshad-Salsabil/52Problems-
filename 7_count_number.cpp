#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n,c;
cin >> n;

for (ll j = 0 ; j<n ; j++) 
{   
    int *Arr[1000],i=0,sizeofArr=0; 
    while(1){ 
        Arr[i] = new int; 
        cin >> *Arr[i]; 
        if(cin.get() == '\n'){   //exit loop if ENTER is pressed 
            break; 
        } 
        i++; 
        sizeofArr++; 
    } 
    cout<<sizeofArr+1;

}

return 0;
}


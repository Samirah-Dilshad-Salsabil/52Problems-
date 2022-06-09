#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void Arrange_in_decreasing_order() 
{
    int c=0;
    for (int i = 1000 ; i>=1 ; i--)
    {
        cout << i << " ";
        c+=1;
        if(c==5){
            cout<< endl;
            c=0;
        }
    }
}


int main(){
    Arrange_in_decreasing_order();
return 0;
}
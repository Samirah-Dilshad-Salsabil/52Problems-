#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
// Perfect Square
int n, number;
cin >> n;
for(int i=0; i<n ; i++)
{
    cin>> number;
    int Testing_square_root= sqrt(number);
    double square_root= sqrt(number);
    if( ceil(square_root) == floor(square_root)) // also can be if(Testing_square_root == square_root ) 
    // ciel round the highest num like 2.3 becaome 3
    // floor round the lowest num like 2.3 becaome 2
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout<< "NO" << endl;
        cout<< ceil(square_root) << "      "<< floor(square_root);
    }

}
return 0;
}


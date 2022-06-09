#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
int n;
cin>>n;
int Total_ball= 300;
int Run_array[3];

for (int i=0; i<n; i++)
{
    cin >> Run_array[0] >> Run_array[1]>> Run_array[2];
    int Target= Run_array[0]+1;
    int Current_run= Run_array[1];
    int remaining_ball= Run_array[2];
    double played_over= (Total_ball-remaining_ball);
    double remained_run=Target - Current_run;
    double Current_run_rate= (Current_run / played_over)*6;
    double Required_run_rate= (remained_run/remaining_ball)*6;
    cout << setprecision (2) << fixed << Current_run_rate << " " <<Required_run_rate<< endl;
}
return 0;
}


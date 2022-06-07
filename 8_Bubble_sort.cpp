#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
// Bubble sort
int n ,size;
cin>> n >> size;


for(int a= 0 ; a<n ;a++)
{
    int array[size];
    for(int y=0 ; y<size ; y++)
    {
        cin>> array[y];
    }

    for (int step = 0; step < (size-1); ++step) {
    int swapped = 0;
    for (int i = 0; i < (size-step-1); ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
    // no swapping means the array is already sorted so no need of further comparison
    if (swapped == 0)
      break;
  }

    for(int x=0 ; x<size ; x++)
    {
        cout<<  array[x];
    }
}


return 0;
}


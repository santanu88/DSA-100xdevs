// take array of n and store n values in array

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    //take input all in n index
    for (int  i = 0; i <= n-1; i++)
    {
        cin >> a[i];
    }
    //
     for (int  i = 0; i <= n-1; i++)
    {
        cout << a[i] << " ";
    }
    
}
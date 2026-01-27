
// to print all eben numbers from 1 to N
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        if (i%2 ==0)
        {
            cout << i<< endl;
        }
        
        
        i++;
    }
    
}
//  2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20

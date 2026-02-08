#include <iostream>
using namespace std;
int main()
{
    long long X, target;
    cin >> X >> target;
    long long occur[X];

    for (int i = 0; i < X; i++)
    {
        cin >> occur[i];
    }

    long long ctn = 0;
    for (int i = 0; i < X; i++)
    {
        if (occur[i] == target)
        {
          ctn++;
        }
        
    }
    cout << ctn << endl;
}
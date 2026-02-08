#include <iostream>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    long long target;
    cin >> target;

    long long element[X];
    for (int i = 0; i < X; i++)
    {
        cin >> element[i];
    }

    bool flag = false;

    for (int i = 0; i < X; i++)
    {
        if (element[i] == target)
        {
            flag = true;
            break;
        }
       }
        if (flag)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
  
}
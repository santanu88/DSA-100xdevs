#include <iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    long long sort[N];

    for (int i = 0; i < N; i++)
    {
        cin >> sort[i];
    }
    long long flag = true;
    for (int i = 1; i < N; i++)
    {
        if (sort[i] >= sort[i - 1])
        {
        }
        else
        {
            flag = false;
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
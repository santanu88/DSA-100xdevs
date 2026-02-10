#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) // repeats t time // 2--2then 1
    {

        int N;
        cin >> N;
        int sort[N];

        for (int i = 0; i < N; i++)
        {
            cin >> sort[i];
        }
        int ctn0 = 0, ctn1 = 0;
        for (int i = 0; i < N; i++)
        {
            if (sort[i] == 0)
            {
                ctn0++;
            }
            else
            {
                ctn1++;
            }
        }

        for (int i = 0; i < ctn0; i++)
        {
            cout << "0 ";
        }
        for (int i = 0; i < ctn1; i++)
        {
            cout << "1 ";
        }

        cout << endl;
    }
}
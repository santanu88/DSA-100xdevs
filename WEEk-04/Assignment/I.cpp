#include <iostream>
using namespace std;
int main()
{

    int N;
    cin >> N;
    int sort[N];

    for (int i = 0; i < N -1 ; i++)
    {
        cin >> sort[i];
    }

    for (int i = N-1 ; i >= 0; i--)
    {
      cout << sort[i] << " ";
      sort[N] = sort[i];
    }
    
}
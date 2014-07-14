#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        int in,out;
        cin >> out >> in;
        count = count - out + in;
        max = count > max ? count:max;

    }

    cout << max << endl;

    return 0;
}


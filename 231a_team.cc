#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        int p,v,t;
        cin >> p >> v >> t;

        count += (p+v+t) >> 1;

    }

    cout << count << endl;

    return 0;
}

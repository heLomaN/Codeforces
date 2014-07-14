#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 0;
    for(int ind = 0;ind < n;ind++)
    {
        string s;
        cin >> s;
        if(s.at(1) == '+')
            ++c;
        else 
            --c;
    }

    cout << c << endl;

    return 0;
}


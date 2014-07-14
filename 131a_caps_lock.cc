#include<iostream>
#include<cctype>
using namespace std;

bool meet_rule(string s)
{
    for(char &c:s.substr(1))
    {
        if(islower(c))
            return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if(meet_rule(s))
    {
        for(char &c:s)
        {
        if(true )
        {
            if(islower(c))
                c = toupper(c);
            else 
                c = tolower(c);
        }
        }
    }
    cout << s << endl;
    return 0;
}


#include<iostream>
#include<string>

using namespace std;

int main (){
    string s;
    cin >> s;
    
    if (string::npos == s.find('H') && 
            string::npos == s.find('Q') && 
            string::npos == s.find('9'))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}




#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int c = 1;
    for (int i = 1; i < s.size();i++){
        if(s[i-1] == s[i])
            ++c;
        else
            c = 1;
        
        if(7 == c){
           break;
        }
    }

    cout << ((7 == c) ? "YES":"NO") << endl;

    return 0;
}



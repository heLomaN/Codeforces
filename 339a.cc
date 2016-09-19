#include<iostream>
#include<vector>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i+=2){
        for(int j = i; j < s.length(); j+=2){
            if(s[j] < s[i]){
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
            }
        }
    }

    cout << s << endl;

    return 0;
}

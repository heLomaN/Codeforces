#include<iostream>
#include<cctype>

using namespace std;

int compare(string a, string b){
    for(int i = 0; i <= a.length(); i++){
        char ca = toupper(a[i]);
        char cb = toupper(b[i]);

        if(ca != cb){
            return ca < cb ? -1 : 1;
        }
    }

    return 0;
}

int main(){
    string a, b;
    cin >> a >> b;
   
    cout << compare(a, b) << endl;

    return 0;
}


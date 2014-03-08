#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
  int n;
  cin >>n;
  string str[100];
  // to_string not support in many env
  for(int i=0;i<n;i++){
    cin >> str[i];
    int len=str[i].length();
    if(len>10){
      char first = str[i][0];
      char last = str[i][len-1];
      ostringstream ostr;
      ostr << first << len-2 << last;
      string num = ostr.str();
      str[i]=num;//.append(last);
    }
  }
  for(int i=0;i<n;i++)
    cout << str[i] << endl;
  return 0;
}

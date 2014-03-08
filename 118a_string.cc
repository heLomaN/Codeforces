#include<iostream>
#include<sstream>
using namespace std;
int main(){
  string str;
  cin >> str;
  ostringstream ostr;
  for(auto i:str){
    char t=tolower(i);
    if(t == 'a' || t=='o' || t=='y'||t=='e' ||t=='u' || t=='i')
      ;
    else
      ostr<< '.' << t;
  }
  cout << ostr.str() << endl;
  return 0;
}

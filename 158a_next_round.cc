#include<iostream>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  int scores[50];
  for(int i=0;i<n;i++)
    cin >> scores[i];

  int count = 0;
  for(int ind = 0;scores[ind]>0 && scores[ind] >=scores[k-1] && ind <n;ind ++)
    count++;
  cout << count << endl;
  return 0;
}

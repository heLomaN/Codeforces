#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin >> n;
  // can't initialize a vector with its element;
  //vector<int> test(1,2,3,4);
  vector<int> stat(4,0);
  for(int i = 0;i < n;i++){
    int tmp;
    cin >> tmp;
    stat[tmp-1] += 1;
  }

  int num_taxi = 0;
  num_taxi += stat[3];
  if(stat[2]>= stat[0]){
    num_taxi += stat[2];
    num_taxi += (stat[1]+1)/2;
  }
  else{
    num_taxi += stat[2];
    stat[0] -= stat[2];
    num_taxi += (stat[0] + stat[1]*2 -1)/4 + 1;
  }

  cout << num_taxi << endl;
  return 0;
}

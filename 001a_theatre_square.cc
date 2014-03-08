#include<iostream>
#include<limits>
using namespace std;

int main(){
  long long m,n,a;
  //10e9 *10e9 need longlong,refer to limits
  //cout << numeric_limits<long>::max() << endl;
  cin >> m >> n >> a;
  cout << ((m-1)/a + 1)*((n-1)/a + 1) << endl;
  return 0;
}

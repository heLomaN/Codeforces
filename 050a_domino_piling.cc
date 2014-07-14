#include<iostream>
using namespace std;
int main(){
  int m,n;
  cin >> m >> n;
  /*int w=m/2,l=n/2;
  int row_left = m%2,col_left = n%2;
  if(row_left && col_left)
  cout << w*l*2 */
  cout << m*n/2 << endl;
  return 0;
}

#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

int dist(ll n, ll s, ll t){
    ll d = (t + n - s) % n;
    return d;
}

int main(){
    int n, m;
    vector<int> nums;

    cin >> n >> m;
    nums.push_back(1);

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        nums.push_back(t);
    }

    ll d = 0;
    for(int i = 1; i < nums.size(); i++){
        d += dist(n, nums[i-1], nums[i]);
        //cout << d << endl;
    }

    cout << d << endl;

    return 0;
}



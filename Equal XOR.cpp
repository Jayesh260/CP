#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>occ[n + 1], single, doubleFirst, doubleSecond;
    for(int i = 1; i <= 2 * n; i++) {
        int x; 
        cin >> x;
        occ[x].push_back(i);
    }
    for(int i = 1; i <= n; i++) {
        if(occ[i].back() <= n) 
        doubleFirst.push_back(i);
        else if(occ[i].front() > n) 
        doubleSecond.push_back(i);
        else 
        single.push_back(i);
    }
    vector<int>L, R;
    for(int i = 0; i < min({doubleFirst.size(), doubleSecond.size(), (size_t)k}); i++){
        L.push_back(doubleFirst[i]);
        L.push_back(doubleFirst[i]);
        R.push_back(doubleSecond[i]);
        R.push_back(doubleSecond[i]);
    }
    for(int i = 0; i < single.size(); i++) {
        if(L.size() == 2 * k) 
            break;
        L.push_back(single[i]);
        R.push_back(single[i]);
    }
    for(int i = 0; i < 2 * k; i++) 
        cout << L[i] << " \n"[i == 2 * k - 1];
    for(int i = 0; i < 2 * k; i++) 
        cout<<R[i] << " \n"[i == 2 * k - 1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}

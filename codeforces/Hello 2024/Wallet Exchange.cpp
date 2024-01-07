#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
	int a,b;
    cin>>a>>b;
    if((a+b)%2==0)
    cout<<"Bob"<<endl;
    else
    cout<<"Alice"<<endl;
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

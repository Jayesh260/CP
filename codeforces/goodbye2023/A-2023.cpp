#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
    lli n,b,prod=1; 
	cin>>n>>b;
    lli arr[n];
    for(lli i=0;i<n;i++){
        cin>>arr[i];
        prod*=arr[i];
    }
    if(2023%prod==0){
        cout<<"YES\n";
        cout<<2023/prod<<" ";
        for(int i=1;i<b;i++){
            cout<<1<<" ";
        }
        cout<<'\n';
    }else{
        cout<<"NO\n";
    }
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

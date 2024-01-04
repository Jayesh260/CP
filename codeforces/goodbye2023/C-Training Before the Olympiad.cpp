#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const int mod=1e9 +7;
#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define sz(x) (int)(x).size()
const int MXN =1e5+5, INF=1e9+5; 
void solve(){
	int n;
	cin>>n;
	lli vec[n];
	for(int i=0 ; i<n ; i++){
        cin>>vec[i];
    }
	cout<<vec[0]<<" ";
	lli sum=vec[0];
	lli even =(vec[0]%2==0);
	lli odd=(vec[0]%2==1);
	for(int i=1;i<n;i++){
		sum+=vec[i];
		even+=(vec[i]%2==0);
		odd+=(vec[i]%2==1);
		lli have=odd/3;
		lli left=(odd-have);
		cout<<sum - have - left%2  <<" ";
	}
	cout<<endl;
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

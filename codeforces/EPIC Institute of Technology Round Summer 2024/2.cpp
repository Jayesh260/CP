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
    vector <lli> arr;
    for(int i=0;i<n;i++){
        lli temp;
        cin>>temp;
        arr.push_back(temp);
    } 
    lli ans=0,m=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            ans+=arr[i-1]-arr[i];
            m=max(m,arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    ans+=m;
    cout<<ans<<endl;
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
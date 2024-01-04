#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli gcd(int a, int b){  
    if (b == 0)  
        return a;  
    return gcd(b, a % b); 
}  
void solve(){
	lli a,b;
	cin>>a>>b;
	lli lcm=a*b/gcd(a,b);
	if (lcm == b) 
	cout << lcm*(b/a)<<endl;
    else 
	cout << lcm<<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}

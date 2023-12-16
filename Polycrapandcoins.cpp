#include <iostream>
using namespace std;
typedef long long int lli;
void solve(){
	int n;
	cin>>n;
	int totalcoins =n/3;
	int c1=totalcoins;
	if(totalcoins+(totalcoins*2)==n){
		cout<<totalcoins<<" "<<totalcoins<<endl;
	}
	else{
		if((totalcoins+1)+(totalcoins*2)==n)
		cout<<totalcoins+1<<" "<<totalcoins<<endl;
		else
		cout<<totalcoins<<" "<<totalcoins+1<<endl;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}

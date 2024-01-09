#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	string s1,s2;
	cin>>s1>>s2;
	int a1=int(s1[0]),a2=int(s1[1]),b1=int(s2[0]),b2=int(s2[1]);
	int dist1=max(a1-a2,a2-a1),dist2=max(b1-b2,b2-b1);
	if(dist1==dist2)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}

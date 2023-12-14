#include<bits/stdc++.h>
using namespace std;
int no=0;
int length(int n){
    if (n<=1){
        return 0;
        }
    if(n%2==0){
        no++;
        return length(n/2);
    }
    else if (n%2!=0){
        no++;
        return length(((3*n) +1));
    }
}
int main(){
    int n;
    cin>>n;
    length(n);
    cout<<no+1<<endl;
}

// #include <iostream>
// using namespace std;
// int main (){
// 	unsigned int i,j, cl, mcl;	
// 	while(cin >> i >> j){
// 		unsigned int i2, j2;
// 		i2 = i<=j ? i:j;
// 		j2 = i<=j ? j:i; 
// 		cl=0;
// 		mcl=0;		
// 		for(int k=i2; k<=j2; k++){
// 			cl=0;
// 			int k2=k;			
// 			while(k2 !=1 ){
// 				if(k2%2 ==1) { k2 = k2*3 +1; cl++;	}
// 				else { k2 /= 2;	cl++;	}
// 			}
// 			cl++;
// 			if(cl>mcl) 
//                 mcl =cl;
// 		}		
// 		cout << i << " " << j << " " << mcl << "\n";
// 	}
// return 0;	
// }
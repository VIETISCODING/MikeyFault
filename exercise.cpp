#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;

ll nt(ll n){
	for(ll i=2;i<=sqrt(n);i++){
	    if(n%i==0) return 0; 
	} 
	return n>1; 
} 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,i=1,cnt=0;
		cin>>n;
		while(i*i<=n){
			if(nt(i)) cnt++;
			i++; 
		} 
		cout<<cnt<<endl; 
	} 
} 


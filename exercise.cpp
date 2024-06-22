#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;


int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		ll ok=0,min=10e-7;
		for(ll i=0;i<n;i++){	 
			for(ll j=i+1;j<n;j++){
				if(a[i]<a[j]){
					if(min<a[j]-a[i]){
						ok=1;
						min=a[j]-a[i];
					} 
				} 
			} 
		} 
		if(ok==0) cout<<"-1"<<endl;
		else cout<<min<<endl; 
	} 
} 

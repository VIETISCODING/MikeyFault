#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;

ll ok(ll n){
    for(ll i=2;i<=sqrt(n);i++){
    	if(n%i==0) return i;
	}
	return n;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
        cin>>n;
	    for(ll i=1;i<=n;i++){
	    	cout<<ok(i)<<" ";
		}
		cout<<endl;
	}
}

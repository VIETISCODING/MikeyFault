#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;

ll fibonacci(ll n){
	vector<ll> v;
	v.push_back(0),v.push_back(1);
    ll a[100];
	a[0]=0,a[1]=1;
	for(ll i=2;i<100;i++){
		a[i]=a[i-1]+a[i-2];
		v.push_back(a[i]);
	}
	ll ok=0;
	for(ll x:v){
		if(n==x) ok=1;
	}
	if(ok==0) return 0;
	else return 1;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
        cin>>n;
        if(fibonacci(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}


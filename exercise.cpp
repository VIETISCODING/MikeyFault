#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;
ll lcm(ll a,ll b){
	return a*(b/__gcd(a,b));
}
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll x,y,z,n;
	    cin>>x>>y>>z>>n;
	    ll s=lcm(x,lcm(y,z));
		if(s>=pow(10,n)) cout<<"-1"<<endl;
		else cout<<s*(ll)ceil(pow(10,n-1)/s)<<endl;
	} 
} 

#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
        ll n,cnt=0;
        cin>>n;
        for(ll i=1;i<=sqrt(n);i++){
        	if(n%i==0){
        		if(i%2==0){
        			cnt++;
        			if((n/i)%2==0 && (n/i)!=i) cnt++;
				} 
				else if(n%2==0) cnt++;
			} 
		}
		cout<<cnt<<endl;
    } 
}

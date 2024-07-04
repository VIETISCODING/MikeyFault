#include<bits/stdc++.h> 
typedef long long ll; //using ll=long long
using namespace std;
ll k=1;
class SinhVien{
	private:
		
	public:
		string msv,ten,lop,ns;
		float gpa;
	    friend istream& operator>>(istream& in,SinhVien& a){
	    	cin.ignore();
	    	getline(cin,a.ten);
	    	cin>>a.lop>>a.ns>>a.gpa;
	    	return in;
		}	
		friend ostream& operator<<(ostream& out,SinhVien a){
            string token,s = "";
            stringstream ss(a.ten);
            while (ss >> token) {
                s+=toupper(token[0]);
                for(ll i=1;i<token.length();i++) s+=tolower(token[i]);
                s+=" ";
            }
            s.erase(s.length()-1);
            a.ten=s;
			if(k<10) a.msv="B20DCCN00";
			else a.msv="B20DCCN0";
			a.msv+=to_string(k);
			k++;
			if(a.ns[1]=='/') a.ns.insert(0,"0");
			if(a.ns[4]=='/') a.ns.insert(3,"0");
			cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns;
			printf(" %.2f\n",a.gpa);
			return out;
		}
};
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

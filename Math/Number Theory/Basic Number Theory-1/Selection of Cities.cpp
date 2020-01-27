#include <iostream>
typedef long long int ll;
using namespace std;

ll fast_pow(int a, ll n){
    ll result =1;
    ll power=n;
    ll value=a;
    while(power>0){
        if(power&1){
            result *=value;
            result %=1000000007;
        }
        value *=value;
        value %=1000000007;
        power /=2;
    
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t;
	ll ans,n;
	for(cin>>t;t;--t){
	    cin>>n;
	    ans= fast_pow(2,n);
	    cout<<ans-1<<"\n";
	}
	return 0;
}

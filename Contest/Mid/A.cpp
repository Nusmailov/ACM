#include <iostream>
#include <cmath>
#include <set>
#include <deque>
#include <vector>
#include <algorithm>

#define ll long long
#define pb push_back
using  namespace std;

ll rvr(ll x){
	if(x < 10) return x;
	else{
		ll c = 1;
		deque<ll> d;
		while(x != 0){
			d.pb(x % 10);
			x /= 10;
		}
		while(true){
			int i = 0;
			if(d[i] == 0){
				d.pop_front();
				i++;
			}
			else{
				break;
			}
		}
		ll ans = 0;
		ll b = 1;
		for(int i = d.size() - 1;i >= 0; --i){
			ans += b * d[i]; 
			b *= 10;
		}
		return ans;
	}	

	
}

int main(){
        ll k, m,n;
	cin >> n;
	for(int  i = 0; i< n;i++){
		cin >> m >> k;
		ll t = rvr(m);
		ll r = rvr(k);
		ll ans = t +r;
		cout << rvr(ans) << endl;
	}	
	return 0;
}

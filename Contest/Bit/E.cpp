#include <bits/stdc++.h>
 
using namespace std;

#define pb push_back
#define ppb pop_back
#define mp make_pair 
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const ll MOD = 1e9; 
const ll N = 100100;
const ll NMAX = 20;
const ll LIMIT = (1<<20)+5;

deque<ll> d, d2;
string s,t;

ll n,m,k,x,y, cnt, cnt2, ans;

int main() {
    cin.sync_with_stdio(false);
    cin >> n >> m;
    if(n == m){
    	cout << 0; 
    	return 0;
    }
    for(ll i = 63; i >= 0; i--){
    	x = (n >> i) & 1;
    	y = (m >> i) & 1;
    	if(x != y){
    		k = i;
    		break;
    	}
    }
    ans = pow(2, k + 1)-1;
    printf("%I64d\n", ans);
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;

#define pb push_back
#define ppb pop_back
#define mp make_pair 
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const long long MOD = 1e9;
const long long N = 100100;

deque<ll> d, d2;
string s,z,ans;
char y[N],c[N];
vector<char> v;
ll n,k = 1,m,x,mx = 0,ar;
void solve(string s){
        c[s.size()] = 'z';
        for(int i = s.size() - 1; i >= 0; i--){
            c[i] = min(s[i], c[i + 1]);
        }
        for(int i = 0; i < s.size(); i++){
                while(!v.empty() && v.back() <= c[i]){
                        ans += v.back();
                        v.pop_back();
                }
                v.pb(s[i]);
        }
        while(!v.empty()){
                ans += v.back();
                v.pop_back();
        }
        cout << ans << endl;
}
int main(){
	cin >> s;
	solve(s);	
	return 0;
}

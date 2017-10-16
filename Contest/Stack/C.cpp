#include <bits/stdc++.h>
 
using namespace std;
	  
#define pb push_back
#define ppb pop_back
#define mp make_pair 
#define all(x) x.begin(), x.end()
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

deque<char> D,D2;
ll cnt,cnt2;
string s;
std::vector<int> v;
ll sum, sum2, n,v1, v2, t1, t2;
int main(){
	getline(cin,s);
	bool log = 1;
	for(int i = 0;i < s.size(); i++){
		if(s[i] == '-')	v.pb(1);
		else{
			v.pb(0);
		}
		if(v.size() >= 2 && v[v.size() - 1] == v[v.size() - 2]){
			v.ppb();
			v.ppb();
		}
	}
	if(v.size() == 0){
		cout << "YES";
	}
	else{
		cout << "NO"; 
	}
	return 0;
}

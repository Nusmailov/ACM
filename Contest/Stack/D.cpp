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
ll top, ans, cnt, cnt2;
string s;
std::vector<int> v;
ll a[100100];
ll sum, sum2, n,k,v1, v2, t1, t2;
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> k;
		while(top && k > a[top - 1]){
			if(ans < (k ^ a[top - 1]))    ans = max(ans, k^a[top-1]);
				top--;
		}
		if(top) ans = max(ans,k^a[top-1]);
		a[top++] = k;
	}
	cout << ans;
	return 0;
}

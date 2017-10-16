#include <bits/stdc++.h>

#define ll long long 
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	ll ans=0,cnt = 0,mx = 0;
	string s;
	cin >> s;
    for(int i = 0; i< s.size();i++){
        if(s[i] == '(') cnt++;
        else if(cnt) ans++,cnt--;
    }
    cout << ans*2;
	return 0;
}

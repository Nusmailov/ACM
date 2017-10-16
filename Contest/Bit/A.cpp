#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

std::vector<double> d;

int main(){ 
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll ans=0;
    string s;
    cin >> s;
    ans = 0;
    for(ll i = 0; i < s.size(); ++i) {
        if(s[i] == '4') {
            ans += 1 << (s.size() - i - 1);
        } else {
            ans += 1 << (s.size() - i);
        }
    }
    cout << ans;
    return  0;
}

#include <bits/stdc++.h>

#define ll long long 
#define pb push_back
#define mp make_pair
using namespace std;
deque<char> d,d2;
string str;
int main(){
	cin >> str;
    int len = str.size();
    vector<pair<char, int> > vc;
    string res;
    for (int i = 0; i < len; ++i)
    {
        if (i == 0 || str[i] != res[res.size()-1])
        {
            res += str[i];
        }
        else
        {
            res.resize(res.size()-1);
        }
    }
    cout << res << endl;
	return 0;
}

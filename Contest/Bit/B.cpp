#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define N 1000001

using namespace std;
int argc;
char* argv[N];
int main()
{
	string s;
	cin >> s;
	int n = s.size();
	
	if (n % 2 == 0)
	{
		if (string(n / 2, '7') + string(n / 2, '4') < s)
			cout << string(n / 2 + 1, '4') + string(n / 2 + 1, '7') << endl;
		else
		{
			string t;
			bool done = false;

			int n4 = n / 2;
			int n7 = n / 2;

			for (int i = 0; i < s.size(); i++)
			{
				bool is4 = false;
				if (n4 > 0)
				{
					if (done || s[i] < '4')
						is4 = true;
					else if (s[i] == '4')
					{
						for (int j = i + 1; j <= n; j++)
						{
							if (j == n)
							{
								is4 = true;
								break;
							}
							char c = (j <= i + n7 ? '7' : '4');

							if (c > s[j])
								is4 = true;

							if (c != s[j])
								break;
						}
					}
				}
				if (is4)
				{
					t += '4';
					n4--;
				}
				else
				{
					t += '7';
					n7--;
				}
				if (t[i] > s[i])
					done = true;
			}

			cout << t << endl;
		}
	}
	else
		cout << string(n / 2 + 1, '4') + string(n / 2 + 1, '7') << endl;
	
	return 0;
}

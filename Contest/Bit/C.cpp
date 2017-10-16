#include <bits/stdc++.h>
 
using namespace std;

#define pb push_back
#define ppb pop_back
#define mp make_pair 
#define all(x) x.begin(), x.end()
const long long MOD = 1e9; 
const long long N = 100100;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
deque<ll> d, d2;
string s;
const int NMAX=20;
const int LIMIT=(1<<20)+5;

int n,m,k;
long long a[NMAX][NMAX];
long long dp[LIMIT][NMAX],b[NMAX];

int Numara(int x)
{
    if (x==0) return 0;
    return (1+Numara(x-(x^(x&(x-1)))));
}

int main()
{
    int i,j,conf,aux;
    long long mx,x,y,z;

    cin.sync_with_stdio(false);
    cin>>n>>m>>k;
    for (i=1;i<=n;i++) cin>>b[i];
    	for (i=1;i<=k;i++){
            cin>>x>>y>>z;
            a[x][y]=z;
        }

    for (conf=1;conf<(1<<n);conf++)
        for (i=0;i<n;i++)
            if (conf&(1<<i))
            {
                //pe i il pun ultimul
                aux=conf-(1<<i);
                if (aux>0)
                {
                    for (j=0;j<n;j++)
                        if (aux&(1<<j))
                            dp[conf][i]=max(dp[conf][i],dp[aux][j]+a[j+1][i+1]+b[i+1]);
                }
                else dp[conf][i]=b[i+1];
            }
    mx=0;
    for (conf=0;conf<(1<<n);conf++)
        if (Numara(conf)==m)
            for (i=0;i<n;i++)
                mx=max(mx,dp[conf][i]);
    cout<<mx<<"\n";
    return 0;
}

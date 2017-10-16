#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int a[2000];
stack<int> s;
vector<int> fin;
int main() 
{
	int i,j,n,b,c,d,e;
	bool check;
	cin>>n;
	int cur;
	while(n!=0)
	{
		cur=1;
		for(i=1;i<=n;i++)
			cin>>a[i];
		fin.clear();
		while(!s.empty())
			s.pop();
		check=true;
		for(i=1;i<=n;i++)
		{
			if(a[i]==cur)
			{
				fin.push_back(a[i]);
				cur++;
				continue;
			}
			while(!s.empty() && s.top()==cur)
			{
				fin.push_back(s.top());
				cur++;
				s.pop();
				
			}
			s.push(a[i]);
		}
		while(s.size()!=0)
		{
			fin.push_back(s.top());
			s.pop();
		}
		check=true;
	
		for(i=0;i<fin.size()-1;i++)
			if(fin[i]+1!=fin[i+1])
			{
				check=false;
				break;
			}
		if(check==true)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		cin>>n;
	}


	return 0;
}

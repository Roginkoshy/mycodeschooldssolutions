#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	set<int> s;
	for(int i=0;i<10;i++)
	{
		s.insert(10-i);
	}
	set<int>::iterator it=s.find(6);
	s.erase(it);
	s.insert(0);
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}

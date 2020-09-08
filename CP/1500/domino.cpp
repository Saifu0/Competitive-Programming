#include<bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
using namespace std;
 
int main()
{
	int n , ar[101] , br[101];
	cin>>n;
	int eve = 0;
	int odd = 0;
	bool flag = 0;
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i]>>br[i];
		ar[i]%=2 , br[i]%=2;
		odd+=ar[i] , eve+=br[i];
		if(ar[i]!=br[i]) flag = 1;
	}
	
	if((odd+eve)%2)
	cout<<-1;
	else
	if((odd%2==0 && eve%2==0))
	cout<<0;
	else
	if(flag)
	cout<<1;
	else
	cout<<-1;
}
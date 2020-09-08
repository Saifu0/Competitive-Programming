#include<iostream>
#include<algorithm>
using namespace std;

// int gcd(int a, int b){
// 	if(b==0) return a;
// 	return gcd(b,a%b);
// }

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		int a,b,rem=1;
		printf("enter the value of a and b ");
		scanf("%d%d",&a,&b);
		
		//if(b>a) swap(a,b);

		cout << __gcd(a,b) << endl;
}
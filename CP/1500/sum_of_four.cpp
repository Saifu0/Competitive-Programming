
#include<bits/stdc++.h> 
using namespace std; 

#define ll long long


int compare (const void *a, const void * b) 
{ 
	return ( *(int *)a - *(int *)b ); 
} 


void find4Numbers(vector<pair<ll,ll>> A, int n, ll X) 
{ 
	int l, r; 

	sort(A.begin(), A.end());


	for (int i = 0; i < n - 3; i++) 
	{ 
		for (int j = i+1; j < n - 2; j++) 
		{ 
			
			l = j + 1; 
			r = n-1; 

			while (l < r) 
			{ 
				if( A[i].first + A[j].first + A[l].first + A[r].first == X) 
				{ 
					cout << A[i].second+1<<" " << A[j].second+1 << 
						" " << A[l].second+1 << " " << A[r].second+1; 
					return;
				} 
				else if (A[i].first + A[j].first + A[l].first + A[r].first < X) 
					l++; 
				else 
					r--; 
			}
		} 
	} 

	cout << "IMPOSSIBLE" << endl;
} 

int main() 
{ 
	vector<pair<ll,ll>> a;
	int n; ll x;
	cin >> n >> x;
	for(int i=0;i<n;i++){
		ll x; cin >> x;
		a.push_back({x,i});
	}
	find4Numbers(a, n, x); 
	return 0; 
} 



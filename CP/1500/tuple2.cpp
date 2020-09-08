#include<bits/stdc++.h>
using namespace std;

#define int long long
#define INT_F_MAX 1e18

const int N = 10;

int x[10],y[10];
int ans = INT_F_MAX;

void update(int n){
	ans = min(ans,n);
}

void get(){
	int change = 0;

	set<int> upd;

	for(int i=0;i<3;i++)  if(x[i]-y[i]==0) change++;
			if(change==3)      upd.insert(0ll);
			else if(change==2) upd.insert(1ll);
			else if(change==1){
				set<int> s;
				for(int i=0;i<3;i++) if((y[i]-x[i])!=0) s.insert(y[i]-x[i]);
				if(s.size()==1) upd.insert(1ll);
				else update(1);
				s.clear();
				int count=0;
				for(int i=0;i<3;i++) {
					if(x[i]!=y[i] && x[i]!=0 && y[i]%x[i]==0){
						int val = y[i]/x[i];
						s.insert(val);
						count++;
					}
				}
				if(count==1) upd.insert(2ll);
				else if(count==2 && s.size()==1) upd.insert(1ll);
				else if(count==2 && s.size()==2) upd.insert(2ll);
				else upd.insert(2ll);
			}
		    else{
				set<int> s;
				for(int i=0;i<3;i++){
					if((y[i]-x[i])!=0) s.insert(y[i]-x[i]);
				}
				upd.insert(s.size());
				s.clear();
				int count=0;
				for(int i=0;i<3;i++){
					if(x[i]!=y[i] && x[i]!=0 && y[i]%x[i]==0){
						int val = y[i]/x[i];
						s.insert(val);
						count++;
					}
				}
				if(count==3) upd.insert(s.size());
				else if(count==2){
					if(s.size()==1) upd.insert(2ll);
					else upd.insert(3ll);
				}            
			}
		    
		    

	int a=x[0],b=x[1],c=x[2];
	int p=y[0],q=y[1],r=y[2];

	if(a!=b){
				if((p-q)%(a-b)==0 && (q*a-p*b)%(a-b)==0){
					int val = (p-q)/(a-b);
					int val2 = (q*a-p*b)/(a-b);
					if((c*val+val2)==r) upd.insert(2ll);
				}
			}
    
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++){
				int k=1;
				if(i==j) continue;
				if((i==1 && j==2) || (i==2 && j==1)) k=0;
				else if((!i && j==1) || (i==1 && !j)) k=2;
				int bacha_hua_ = y[i]/x[i];
				int chal_chal_pata_h = y[i] - x[i];
				int chhye_1 = x[j] + chal_chal_pata_h;
				int chhye_2 = x[k] + chal_chal_pata_h;
				if(x[j]&&x[k]){
					if(((y[j]-chal_chal_pata_h)%x[j]==0 && (y[k]-chal_chal_pata_h)%x[k]==0))
						if((y[j]-chal_chal_pata_h)/x[j] == (y[k]-chal_chal_pata_h)/x[k])
							upd.insert(2ll);
				}
				if(chhye_1&&chhye_2){
					if((y[j]%chhye_1==0 && (y[k]%chhye_2==0)))
						if((y[j]/chhye_1==y[k]/chhye_2))
							upd.insert(2ll);
				}
				if(x[i] && y[i]%x[i]==0){
					if((y[j]-bacha_hua_*x[j])==(y[k]-bacha_hua_*x[k])) upd.insert(2ll);
					if(bacha_hua_ && y[j]%bacha_hua_==0 && y[k]%bacha_hua_==0){
						int bacha_hua_1 = y[j]/bacha_hua_;
						int bacha_hua_2 = y[k]/bacha_hua_;
						if((bacha_hua_1-x[j])==(bacha_hua_2-x[k])) upd.insert(2ll);
					}
				}
				if(x[i] && y[i]%x[i]==0){
					int bacha_hua_3 = y[i]/x[i];
					if((bacha_hua_3*x[j] && x[k]) && (y[j]%(bacha_hua_3*x[j])==0 && y[k]%x[k]==0)){
						if(y[j]/(bacha_hua_3*x[j]) == y[k]/x[k]) upd.insert(2ll);
					}
					if((y[j]-bacha_hua_3*x[j])==(y[k]-x[k])) upd.insert(2ll);
				}
				if(x[j]&&x[k]&&(y[j]-chal_chal_pata_h)%x[j]==0 && (y[k]-chal_chal_pata_h)%x[k]==0){
					if((y[j]-chal_chal_pata_h)/x[j]==(y[k]-chal_chal_pata_h)/x[k]) upd.insert(2ll);
				}
				if((y[j]-x[j]-chal_chal_pata_h)==(y[k]-x[k])) upd.insert(2ll);
				if((x[j]+chal_chal_pata_h) && (x[k])){
					if((y[j]%(x[j]+chal_chal_pata_h))==0 && (y[k]%x[k])==0 && y[j]/(x[j]+chal_chal_pata_h) == y[k]/x[k])
						upd.insert(2ll);
				}
			}
		}
    
    
    	auto it = upd.begin();
    	cout << *it << endl;
		  
}

int32_t main(){
	int test;
	cin >> test;
	while(test--){
		for(int i=0;i<3ll;i++) 
			cin >> x[i];
		for(int i=0;i<3ll;i++) 
			cin >> y[i];
		ans = INT_F_MAX;
		// cout << ans << " ";
		get();
		// cout << ans << endl;
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solution() {
	int x,y,k;cin>>x>>y>>k;
	int count=0;
	if (x==y) {
		cout<<0<<endl;
	}
	if (x<y) {
		do
		{	
			count++;
			x+=k;
			continue;
		}while (x<=y);
		if (x-k==y) {
			cout<<count-1<<endl;
		} else if (x-k<y) {
			cout<<count<<endl;
		}
	} else if (x>y) {
		do 
		{
			count++;
			y+=k;
			continue;
		} while(y<=x);
		if (y-k==x) {
			cout<<count-1<<endl;
		} else if (y-k<x) {
			cout<<count<<endl;
		}
	}
}

int main() {
	int t;cin>>t;
	while(t--){
	solution();
	}
	return 0;
}

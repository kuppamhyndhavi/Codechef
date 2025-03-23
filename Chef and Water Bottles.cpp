#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,k;
	    cin>>n>>x>>k;
	    int cap=min(n,k/x);
	    cout<<cap<<endl;
	}
	return 0;

}

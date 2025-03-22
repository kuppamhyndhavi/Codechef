#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n=2,m;
	    cin>>n>>m;
	    cout<<n+max(0,n-m)<<endl;
	}
	    return 0;
	

}

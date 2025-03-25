#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    
	    int o=(n+1)/2;
	    int e=(n/2);
	    int td=(o*b)+(e*a);
	    cout<<td<<endl;
	}
	

}

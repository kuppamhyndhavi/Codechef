#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int r=log2(n);
	    int tt = a*r+b*(r- 1);
	    cout<<tt<<endl;
	    
	}

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,n;
	    cin>>x>>n;
	    int rp=(n+99)/100;
	    int tp=max(0,rp-x);
	    cout<< tp<<endl;

	}

}

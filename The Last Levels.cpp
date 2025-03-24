#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int tt=x*y;
	    int b=(x-1)/3;
	    tt+=b*z;
	    cout<<tt<<endl;
	}
	return 0;

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int mm=x/y;
	    int st=x%y;
	    int tm = mm + st;

	    cout<<tm<<endl;
	}

}

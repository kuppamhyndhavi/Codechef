#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    int r=r1+r2+r3+r4;
	    if(r==0){
	        cout<<"IN"<<endl;
	    }
	    else{
	        cout<<"OUT"<<endl;
	    }
	}
	return 0;

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int dis=0;
	    if(x>5000){
	        dis=500;
	    }
	    else if(x>1000){
	        dis=100;
	    }
	    else if(x>100){
	        dis=25;
	    }
	    int famt=x-dis;
	    cout<<famt<<endl;
	}
	return 0;

}

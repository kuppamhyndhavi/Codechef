#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
        int fc=(x-1)/10+1;
        int fcf=(y-1)/10+1;
        int tff=abs(fc-fcf);
        cout<<tff<<endl;
	}

}

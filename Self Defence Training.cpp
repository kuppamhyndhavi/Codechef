#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    for(int i=0;i<n;i++){
	        int age;
	        cin>>age;
	    
	    if( age>=10 && age<=60){
	        count++;
	    }
	    }
	    cout<<count<<endl;
	    
	}

}

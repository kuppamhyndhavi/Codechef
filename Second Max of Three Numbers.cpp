#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int arr[3]={a,b,c};
	    sort(arr,arr+3);
	    cout<<arr[1]<<endl;
	}
	

}

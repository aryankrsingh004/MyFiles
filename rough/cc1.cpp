#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0 ; i < T ; i++ ){
	    long long int n,k,l;
	    cin>>n>>k>>l;
	    long long A[n];
	    for(int i=0; i<n ;i++){
	        cin>>A[i];
	    }
	    
	    std::sort(A, A + n, greater<int>());

	    
	    long long int count=0;
	    for(int i = l-1; i < n ; i = i + k ){
	        count=count + A[i];
	        //cout<<A[i]<<endl;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
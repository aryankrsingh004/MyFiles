#include <iostream>
using namespace std;

void normalSieve(int n, vector<int>& arr)
{
    // prime[i] is going to store true if
    // if i*2 + 1 is composite.
    bool prime[n / 2];
    memset(prime, false, sizeof(prime));
 
    // 2 is the only even prime so we can
    // ignore that. Loop starts from 3.
    for (int i = 3; i * i < n; i += 2) {
        // If i is prime, mark all its
        // multiples as composite
        if (prime[i / 2] == false)
            for (int j = i * i; j < n; j += i * 2)
                prime[j / 2] = true;
    }
 
    // writing 2 separately
    // printf("2 ");
    arr.push_back(2);
 
    // Printing other primes
    for (int i = 3; i < n; i += 2)
        if (prime[i / 2] == false)
            arr.push_back(i);
}

void arr2(vector<int>& arr){
    for(int i = 1; i < 1000001; i*=2){
        
    }
}

int main() {
	// your code goes here
	int t;cin>>t;
	vector<int> arr;
	normalSieve(1000000, arr);
	while(t--){
	    int h;cin>>h;
	    
	}
	return 0;
}

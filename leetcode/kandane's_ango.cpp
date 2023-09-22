#include<iostream>
#include<vector>
using namespace std;


int maxSubArray(vector<int>& nums) {
        
        int n=size(nums);
        int temp=0;
        int sum = INT_MIN;
        for(int i = 0; i<n; i++){
            temp+=nums[i];

                if(temp > sum){
                    sum=temp;
                }

                if(temp < 0){
                    temp=0;
                }
        }return sum;
    }
 
int main(){
    vector<int> nums {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums);
}


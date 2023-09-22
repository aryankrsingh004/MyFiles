#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        cout<<nums.size();
        for(int i=0; i < nums.size()-1; i++){
            for(int j = i+1 ; i <= nums.size()-1; j++ ){
                if(nums[i]+nums[j] == target){
                    ans={i,j};
                    return ans;
                    exit(0);
                }
                else continue;
            }
        }
        return ans;
    }

int main(){
    vector<int>& nums={2,7,11,15};
    

    return 0;
}
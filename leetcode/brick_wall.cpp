#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> farr;
        int ans = 0;
        for(int x = 0; x <= size(wall)-1; x++){
            int a = 0;
            for(int j = 0; j < size(wall[x])-1; j++){
                a += wall[x][j];
                farr[a]++;
                ans = max(ans, farr[a]);
            }
        }
    return size(wall) - ans;
    }

int main(){
    vector<vector<int>> q{{1,2,2,1},{3,1,2},{1,3,2},{2,4},{3,1,2},{1,3,1,1}};
    vector<vector<int>> q1{{1},{1},{1}};
    cout<<leastBricks(q1);
    return 0;
}
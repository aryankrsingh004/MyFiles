#include<iostream>
#include<vector>
using namespace std;

    int leastBricks(vector<vector<int>>& wall) {
        int count=0;
        for(int i= 0; i< size(wall[0]); i++){
            count+= wall[0][i];
        }
        //cout<<count<<endl;


        for(int i=0; i < size(wall); i++){
            //cout<<"hi ";
            for(int j=1; j <= size(wall[i])-2; j++){
                wall[i][j] = wall[i][j] + wall[i][j-1];
                //cout<<"hi ";
            }
        }


        for(int i=0; i < size(wall); i++){
            for(int j=0; j <= size(wall[i])-2; j++){
                //cout<<wall[i][j]<<" ";
                //cout<<"hi ";
            }
            //cout<<endl;
        }
        

        //cout<<count<<" ";
        //int farr[wall[0][size(wall[0])-1]] {0};
        int farr[count] {0};
        for(int i=0; i < size(wall); i++){
            for(int j=0; j<size(wall[i])-1; j++){
                farr[wall[i][j]]++;
            }
        }


        for(int i=0; i < (sizeof(farr) / sizeof(farr[0])); i++){
            cout<<farr[i]<<" ";
        }
        cout<<endl;


        int ans=0;
        for(int i=0; i < (sizeof(farr) / sizeof(farr[0])); i++){
            ans=max(ans, farr[i]);
        }


    return size(wall) - ans;
    }

int main(){
    vector<vector<int>> q = {{1,2,2,1},{3,1,2},{1,3,2},{1,1,1,1,1,1},{3,1,2},{1,3,1,1}};
    vector<vector<int>> q1 {{1},{1},{1}};
    cout<<leastBricks(q);
}


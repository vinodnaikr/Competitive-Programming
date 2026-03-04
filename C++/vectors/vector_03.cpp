#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> arr,int target){
    int n=arr.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;

}
// two pair sum
int main(){
    vector<int> arr={1,2,3,4,5};
    int target=5;

    vector<int> ans = pairSum(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
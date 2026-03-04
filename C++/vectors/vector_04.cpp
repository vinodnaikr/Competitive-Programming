#include<iostream>
#include<vector>
using namespace std;
// Two pair sum optimised approach
vector<int> pairSum(vector<int> arr,int target){
    int n=arr.size();
    vector<int> ans;
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int target=5;
    vector<int> ans = pairSum(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
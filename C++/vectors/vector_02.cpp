#include<iostream>
#include<vector>
// optimized approach kadane's algorithm
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int max_sum=INT8_MIN;
    int curr_sum=0;
    for(int start=0;start<size;start++){
        // int curr_sum=0;
        curr_sum+=arr[start];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0){
            curr_sum=0;
        }
        // max_sum=max(max_sum,curr_sum);
    }
    cout<<max_sum<<endl;
    return 0;
}
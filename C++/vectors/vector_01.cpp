// /maximum subarray sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int max_sum=INT8_MIN;
    for(int start=0;start<size;start++){
        int curr_sum=0;
        for(int end=start;end<size;end++){
            curr_sum+=arr[end];
            max_sum=max(max_sum,curr_sum);
        }
    }
    cout<<max_sum<<endl;
    return 0;
}
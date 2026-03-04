#include<iostream>
using namespace std;
// program to print all the unique values in an array
void printUnique(int arr[],int size){
    for(int i=0;i<size;i++){
        bool isDuplicate=false;
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                isDuplicate=true;
                break;
            }
            // cout<<"The unique elements are:"<<arr[j];
        }
        
        if(!isDuplicate){
            cout<<arr[i]<<endl;
        }
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"The uniqe elements are";
    printUnique(arr,5);
}
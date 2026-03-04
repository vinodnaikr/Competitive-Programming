// function to swap min and max elements in an array
#include<iostream>
using namespace std;
void swapMinMax(int arr[],int size){
    int minIndex=0;
    int maxIndex=0;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
    }
    swap(arr[maxIndex],arr[minIndex]);
    cout<<"The swap is sucessfull";
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    swapMinMax(arr,5);

}
#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,15,22,-15,1,24};
    int size=6;
    int largest=INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The Largest is:"<<largest;
}
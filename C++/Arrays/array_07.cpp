// /program to calaculate sum and product of all the elements in an arry
#include<iostream>
using namespace std;
void sumAndProduct(int arr[],int size){
    int sum=0;
    int product=1;
    // sum
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"The sum is:"<<sum<<endl;
    cout<<"The product is:"<<product<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    sumAndProduct(arr,size);
}
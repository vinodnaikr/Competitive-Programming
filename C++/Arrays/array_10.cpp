// program to print the intersection if two arrays
#include<iostream>
using namespace std;
void intersectionOfArrays(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}
int main(){
    int arr1[]={1,3,5,7,0};
    int size1=5;
    int arr2[]={1,2,3,4,5,6,7,8,9};
    int size2=10;
    cout<<"The intersection of the two arrays is:";
    intersectionOfArrays(arr1,arr2,size1,size2);
}
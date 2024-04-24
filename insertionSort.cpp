#include<iostream>
using namespace std;
void insertionSort(int* arr,int n){
  
    for( int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){//shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={6,5,-5,98,93,4,3,2,1};
    int size =sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    cout<<"The sorted array by insertionSort is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
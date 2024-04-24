#include<iostream>
#include<vector>
using namespace std;
void selectionSort(int* arr,int n){
    int minIndex;
    for(int i=0;i<n-1;i++){
        minIndex = i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
    
}
int main(){
    int a[] = {6,7,5,8,2};
    selectionSort(a,5);
    cout<<"The sorted array using selection sort is: "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

}
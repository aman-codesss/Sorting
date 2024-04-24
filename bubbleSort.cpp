#include<iostream>
using namespace std;
int bubbleSort(int *arr,int n){
    bool isSwapped =false;//checks whether array is already sorted
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwapped = true;
            }
        }
        if(isSwapped==false)
        break;//breaks the loop if found already sorted array on 1st loop
    }//also the time complexity is reduced from O(n^2) to O(n) for best case scenario(already sorted)
}
int main(){

    int a[]={70,7,456,8,2,-4,4};
    int size=sizeof(a)/sizeof(int);
    bubbleSort(a,size);
    cout<<"The sorted array using bubble sort is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}


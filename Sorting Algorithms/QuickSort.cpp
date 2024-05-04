#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
int pivot=arr[l];
int i=l+1;
int j=r;
while(i<=j){
    if(arr[i]>pivot && arr[j]<pivot){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    else if(arr[i]<=pivot)
    i++;
    else if(arr[j]>pivot)
    j--;
}
int temp=arr[l];
arr[l]=arr[j];
arr[j]=temp;
return j;
}
void quicksort(int arr[],int l,int r){
if(l<r){
int pi=partition(arr,l,r);
quicksort(arr,l,pi-1);
quicksort(arr,pi+1,r);
}
}
int main(){
int arr[5]={5,4,3,2,1};
quicksort(arr,0,4);
    
    
    for(int l=0; l<5; l++){
     cout<<arr[l]<<" ";
}
return 0;
}

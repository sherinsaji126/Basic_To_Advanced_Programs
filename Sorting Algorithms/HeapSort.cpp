#include<iostream>
using namespace std;
void heapify(int arr[],int i,int n){
int largest=i;
int l=2*i+1;
int r=2*i+2;
if(l<n && arr[largest]<arr[l]){
largest=l;
}
if(r<n && arr[largest]<arr[r]){
    largest=r;
}
if(largest!=i){
int temp=arr[i];
arr[i]=arr[largest];
arr[largest]=temp;
heapify(arr,largest,n);
}
}
void heap_sort(int arr[],int n){
for(int j=n-1;j>=0;j--){
    int temp=arr[0];
    arr[0]=arr[j];
    arr[j]=temp;
    heapify(arr,0,j);
}

}
int main(){
    int arr[]={15,5,20,1,17,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
cout<<"MAX-heap: ";
for(int j=0;j<n;j++){
    cout<<arr[j]<<"\t";
}
heap_sort(arr,n);
cout<<"\nsort-heap: ";
for(int j=0;j<n;j++){
    cout<<arr[j]<<"\t";
}
return 0;
}

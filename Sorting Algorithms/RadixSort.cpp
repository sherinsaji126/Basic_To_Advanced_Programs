#include<iostream>
using namespace std;

int getmax(int arr[],int n);
void countsort(int arr[],int n,int pos);

void radixsort(int arr[],int n){
    
int max=getmax(arr,n);
for(int pos=1;max/pos>0;pos*=10){
    countsort(arr,n,pos);
}
}
int getmax(int arr[],int n){
   
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
    
}
void countsort(int arr[],int n,int pos){
    int k=9;
int count[n]={0};
for(int i=0;i<n;i++){
   ++count[arr[i]/pos%10]; 
}
for(int j=1;j<=k;j++){
    count[j]=count[j-1]+count[j];
}
int array[n];
for(int m=n-1;m>=0;m--){
array[--count[arr[m]/pos%10]]=arr[m];

}
for(int i = 0; i < n; i++) {
        arr[i] = array[i];
    }
    

}
int main(){
    
int arr[]={432,8,530,90,88,23,11,45,677,199};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The array is : ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
radixsort(arr,n);
cout<<"\nafter radix sort : ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}

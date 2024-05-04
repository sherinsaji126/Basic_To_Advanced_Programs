#include<iostream>
using namespace std;
void countsort(int arr[],int n,int k){
int count[k+1]={0};
for(int i=0;i<n;i++){
   ++count[arr[i]]; 
}
for(int j=1;j<=k;j++){
    count[j]=count[j-1]+count[j];
}
int array[n];
for(int m=n-1;m>=0;m--){
array[--count[arr[m]]]=arr[m];

}
for(int i = 0; i < n; i++) {
        arr[i] = array[i];
    }

}
int main(){
    int k=9;
int arr[]={2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The array is : ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
countsort(arr,n,k);
cout<<"\nafter counting sort : ";
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}

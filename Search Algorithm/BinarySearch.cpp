#include<iostream>
using namespace std;
void binary(int first,int last,int arr[],int value){
int mid= (first+last)/2;
if(arr[mid]==value){
    cout<<"Element is present at index:  "<< mid;
}
else if(arr[mid]>value){
    last=mid-1;
    binary(first,last,arr,value);
}
else{
first=mid+1;
binary(first,last,arr,value);
}
}
int main(){
int value,first,last;
int arr[]={12,23,45,56,67,89,90,100,101};
cin>>value;
last=8;
first=0;
binary(first,last,arr,value);
return 0;
}

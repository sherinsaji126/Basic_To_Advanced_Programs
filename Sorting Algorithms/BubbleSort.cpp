#include<iostream>
using namespace std;
// using recursion
// void bubble(int arr[],int num){
//  for(int j=0;j<num-1;j++){
//  if(arr[j]>arr[j+1]){
//      int temp = arr[j];
//      arr[j]=arr[j+1];
//      arr[j+1]=temp;
//  }
// }
// num=num-1;
// bubble(arr,num);
// }
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int k=0;k<num;k++){
        cin>>arr[k];
    }
    // bubble(arr,num);

int i=0;
while(i<num-1){
int j=0;
while(j<(num-i)-1){
if(arr[j]>arr[j+1]){
    int temp = arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}
j++;
}
i++;
}
for(int i=0; i<num; i++){
     cout<<arr[i]<<" ";
}
return 0;
}

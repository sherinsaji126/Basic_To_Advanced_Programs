#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>arr1={6,7,8,9,10};
    vector<int>arr2(arr.size()+arr1.size());
    int count=0;
    int i=0,j=0;
    while(i<arr.size()&&j<arr1.size()){
        
          if(arr[i]<arr1[i]){
            arr2[count++]=arr[i++];
            
          } else{
            arr2[count++]=arr1[i++];
          
          }
    }
        while(i<arr.size()){
            arr2[count++]=arr[i++];
        }
        while(j<arr2.size()){
            arr2[count++]=arr1[j++];
        }

        for(auto array:arr2){
            cout<<array<<" ";
        }
        
    return 0;
    }
    


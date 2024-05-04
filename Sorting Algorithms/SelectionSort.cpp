#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={5,17,3,9,15,1};
    int temp;
    cout<<"array before sorted: "<<endl;
    for(auto array:arr){
            cout<<array<<" ";
        }
        cout<<endl;
        cout<<"array after sorting: "<<endl;
    for (int i = 0; i<arr.size();++i){
        for(int j=i+1;j<arr.size();++j){
          if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
          }   
        }
        for(auto array:arr){
            cout<<array<<" ";
        }
        
        cout<<endl;
    }
    
}

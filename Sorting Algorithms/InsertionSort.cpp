#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    vector<int>arr={5,17,3,9,15,1};
    int temp,loc;
    for (int i = 1; i<arr.size();++i){
        temp=arr[i];
        loc=i-1;
        while(loc>=0 && arr[loc]>temp){
            arr[loc+1]=arr[loc];
            loc--;
        }
        arr[loc+1]=temp;
        for (auto array:arr){
            cout<<array<<" ";
        }
        cout<<endl;
    }
    
}

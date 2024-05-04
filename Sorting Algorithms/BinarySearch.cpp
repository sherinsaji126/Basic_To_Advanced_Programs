#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void searchBinary(int begin,int end,vector<int> array,int key){
int mid=int((begin+end)/2);
if(key==array[mid]){
    cout<<"element is found at index: "<<mid+1;
}
if(key<array[mid]){
    searchBinary(begin,mid-1,array,key);
}else if(key>array[mid]){
  searchBinary(mid+1,end,array,key);
} 
}
int main(){
    int size,key;
cout<<"enter the size and key: ";    
cin>>size>>key; 
vector<int>array(size);
for(int i=0; i<size; i++){
    cin>>array[i];
}
sort(array.begin(),array.end());
searchBinary(0,array.size()-1,array,key);

return 0;
}

/*
    1 
   3 2 
  6 5 4
 10 9 8 7
*/
#include<iostream>
using namespace std;
int main(){

int num;

cout<<"Enter The Number Of Rows: ";
cin>>num;
int temp;int count=0;
for(int k=1;k<=num;k++){
count+=k;
for(int i=num-k+1;i>0;i--){
    cout<<" ";
}
temp=count;
for(int j=k;j>0;j--){
    cout<<temp<<" ";
    temp--;
}

cout<<endl;
}

}
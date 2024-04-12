/*
     1 
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
*/

#include<iostream>
using namespace std;
int main(){

int num;

cout<<"Enter The Number Of Rows: ";
cin>>num;

for(int k=1;k<=num;k++){
for(int i=num-k+1;i>0;i--){
    cout<<" ";
}

for(int j=1;j<=k;j++){
    cout<<k<<" ";
    
}
cout<<endl;
}

}

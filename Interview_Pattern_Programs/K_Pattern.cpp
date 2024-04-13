/*

*****
****  
***    
**      
*               
**      
***    
****  
***** 

*/

#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter The Number Of Rows: ";
cin>>num;
for(int k=num;k>0;k--){
    for(int j=k;j>0;j--){
        cout<<"*";
    }
    for(int i=num-k;i>0;i--){
        cout<<" ";
    }
    cout<<endl;
}
for(int k=2;k<=num;k++){
    for(int j=k;j>0;j--){
        cout<<"*";
    }
    for(int i=num-k;i>0;i--){
        cout<<" ";
    }
    cout<<endl;
}
return 0;
}
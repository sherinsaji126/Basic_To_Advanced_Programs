/*
******
*    *
*    *
*    *
*    *
******
*/
#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter The Number Of Rows: ";
cin>>num;
for(int row=1;row<=num;row++){
if(row==1 ||row==num){
for(int col=1;col<=num;col++){
cout<<"*";
}
}
else{
    cout<<"*";
    for(int j=1;j<=num-2;j++){
   
   cout<<" ";
    } 
    cout<<"*";
}
cout<<endl;
}
return 0;
}
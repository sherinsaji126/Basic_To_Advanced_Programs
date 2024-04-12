/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
********** 

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
    for(int i=1;i<=num*2-2*k;i++){
        cout<<" ";
    }
    for(int x=k;x>0;x--){
        cout<<"*";
    }
    cout<<endl;
}
for(int k=1;k<=num;k++){
    for(int j=1;j<=k;j++){
        cout<<"*";
    }
    for(int i=1;i<=num*2-2*k;i++){
        cout<<" ";
    }
    for(int x=k;x>0;x--){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}
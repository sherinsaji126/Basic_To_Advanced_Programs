/*

* * * * * 
 * * * *
  * * *
   * *
    * 
   * *
  * * *
 * * * * 
* * * * *

*/
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter the rows : ";
cin>>num;
for(int i=1;i<=num;i++){
    for(int j=num-i+1;j<num;j++){
        cout<<" ";
    }
    for(int k=num-i+1;k>0;k--){
      cout<<"*"<<" ";
    }
    cout<<endl;
}
for(int i=num-1;i>0;i--){
    for(int j=num-i+1;j<num;j++){
        cout<<" ";
    }
    for(int k=num-i+1;k>0;k--){
      cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}
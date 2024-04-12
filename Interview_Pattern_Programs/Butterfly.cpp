/*
55555
54444
54333
54322
54321
*/
#include<iostream>
using namespace std;
int main(){
    int num,value;

cout<<"Enter The Number Of Rows =";
cin>>num;
for(int i=1;i<=num;i++){
    
    for(int k=num;k>num-i;k--){
    cout<<k;
    }
    value=num-i;
    for(int j=value;j>0;j--){
    cout<<value+1;
    }
 cout<<endl;
}

return 0;
}

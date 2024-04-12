#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter The Number Of Rows: ";
cin>>num;
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
for(int k=num-1;k>=1;k--){
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
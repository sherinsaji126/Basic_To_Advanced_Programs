/*
1 
2 3 
4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;
int main(){

int num,temp=1;

cout<<"Enter The Number Of Rows: ";
cin>>num;

for(int k=1;k<=num;k++){
for(int j=1;j<=k;j++){
    cout<<temp++<<" ";
}

cout<<endl;
}

}
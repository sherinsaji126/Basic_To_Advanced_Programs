# sherin_the_analyst
sherin the great 
#include<iostream>
using namespace std;
int main(){

int num;

cout<<"Enter The Number Of Rows: ";
cin>>num;

for(int k=1;k<=num;k++){
for(int i=0;i<2*(num-k);i++){
    cout<<" ";
}

for(int j=1;j<=k;j++){
    cout<<char(j+64)<<" ";
}
for(int j=k-1;j>0;j--){
    cout<<char(j+64)<<" ";
}
cout<<endl;
}

}
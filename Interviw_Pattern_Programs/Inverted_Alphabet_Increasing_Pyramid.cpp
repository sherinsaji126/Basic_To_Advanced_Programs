/*ABCDE
  ABCD
  ABC
  AB
  A
*/
#include<iostream>
using namespace std;
int main(){
int size;
cout<<"enter the size=";
cin>>size;

for(int i=size;i>0;i--)
{
for(int j=i;j>0;j--){
cout<<char(i-j+65);

}

cout<<endl;
}

    return 0;
}
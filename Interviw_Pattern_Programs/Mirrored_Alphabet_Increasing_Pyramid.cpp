/*      
         A
       B A
     C B A
   D C B A
 E D C B A
*/
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size=";
    cin>>size;

//first loop for number of rows
for(int i=1;i<=size;i++)
{
//second loop for spaces from left
for(int j=size-i;j>0;j--)
 {
    cout<<" ";
 }
//third loop for printing characters in each rows
for(int k=i;k>0;k--)
 {
    cout<<char(k+64);
 }
cout<<endl;
}
return 0;
}
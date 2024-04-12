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
     cout<<"enter upto how many rows: ";
     cin>>size;
for(int i=1;i<=size;i++)
 {  for(int j=i;j>0;j--)
   {
       cout<<char(j+64);
   }
 
cout<<endl;
 }
     return 0;
}
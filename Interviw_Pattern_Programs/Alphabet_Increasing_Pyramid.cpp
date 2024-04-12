/*A
  AB
  ABC
  ABCD
  ABCDE
*/
#include<iostream>
using namespace std;
int main(){
int rows=4;
// first loop for printing rows
for(int i=0;i<=rows;i++){
   // second loop for printing character in each rows
 for(int j=0;j<=i;j++){
cout<<char(j+65);//typecasting
}
 cout<<"\n";
}
return 0;
}
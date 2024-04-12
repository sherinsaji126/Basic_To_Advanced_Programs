/*   *     
    * *    
   * * *   
  * * * *  
 * * * * * 
  * * * *  
   * * *  
    * *   
     * 
*/
#include<iostream>
using namespace std;
int main(){

int num;

cout<<"Enter The Number Of Rows: ";
cin>>num;

for(int k=1;k<=num;k++){

for(int i=num-k+1;i>0;i--){
    cout<<" ";
}

for(int j=k;j>0;j--){
    cout<<"*"<<" ";
    
}

cout<<endl;
}
for(int k=num-1;k>0;k--){

for(int i=num-k+1;i>0;i--){
    cout<<" ";
}

for(int j=k;j>0;j--){
    cout<<"*"<<" ";
    
}

cout<<endl;
}

}
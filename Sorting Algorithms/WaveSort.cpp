#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int>&nums,int val,int nval){
int temp=nums[val];
nums[val]=nums[nval];
nums[nval]=temp;
}
void wave(vector<int>&nums){
int val=1;
while(val<nums.size()){
    if(nums[val]>nums[val-1]){
        swap(nums,val,val-1);
       
    }
    if(nums[val]>nums[val+1]&& val<=nums.size()-2){
        swap(nums,val,val+1);
        
    }
 val+=2;
}

}
int main(){
vector<int>nums{1,3,4,7,5,6,2};
wave(nums);
for(auto i:nums){
    cout<<i<<" ";
}
return 0;
}

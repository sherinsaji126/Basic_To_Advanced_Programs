#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int>&nums,int low,int mid){
int temp=nums[low];
nums[low]=nums[mid];
nums[mid]=temp;

}
void dnf(vector<int>&nums){
    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums,low,mid);
            low++;mid++;

        } else if(nums[mid]==1){
            mid++;
        }
        else {
            swap(nums,high,mid);
            high--;
        

        }
    }
}
int main(){
    vector<int>nums{1,0,2,1,0,1,2,1,2};
    dnf(nums);
    for(auto i: nums){
    cout<<i<<" ";
    }
return 0;
}

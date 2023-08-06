#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
         int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }


int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    int val=3;

    cout<<"answer "<<removeElement(arr,val);
    return 0;
}
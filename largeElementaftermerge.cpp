#include <iostream>
#include<vector>
// #include<conio.h>
using namespace std;

long long maxArrayValue(vector<int>& nums){
        
    int len = nums.size(), curr_sum = nums[len - 1], ans = curr_sum;
    for (int i = len - 2; i >= 0; i--)
    {
        // If the current element is greater than the current sum
        // Then it will never get merged with the succeeding elements
        // The current sum is changed to this element
        // Else add the current element to the current sum
        curr_sum = ((curr_sum >= nums[i]) ? curr_sum + nums[i] : nums[i]);
        // Keep updating the maximum element that can be achieved
        ans = max(ans, curr_sum);
    }
    return ans;
}

int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(3);

    int ans=maxArrayValue(arr);
    cout<<"largest element is "<<ans;
}

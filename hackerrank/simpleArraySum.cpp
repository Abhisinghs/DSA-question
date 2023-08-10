#include<iostream>
#include<vector>
using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum=0;
    int len=ar.size()-1;
    for(int i=0;i<=len;i++){
        sum+=ar[i];
    }
    return sum;

}

int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(21);
    arr.push_back(25);
    arr.push_back(13);

    cout<<"sum of array element is  "<<simpleArraySum(arr);
    return 0;
}
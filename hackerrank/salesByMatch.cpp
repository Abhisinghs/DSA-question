#include<iostream>
#include<vector>
#include<fstream>
using namespace std;


//find unique number in array 
int sockMerchant(int n, vector<int> ar) {
    
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                count++;
                ar[j]=-i;
                break;
            }
        }
    }return count;
}

int main(){
    vector<int> arr{10, 20, 20, 10, 10, 30, 50, 10, 20};
    int ans= sockMerchant(9,arr);
    cout<<ans;
    return 0;
}
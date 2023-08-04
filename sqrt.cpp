#include<iostream>
using namespace std;

//function for find the square root of number 
int mySqrt(int x) {
    int s=0,e=x;
    long long int mid=s+(e-s)/2;
    long long int ans=0;
    while(s<=e){
        long long int square=mid*mid;
        if(square==x)
            return mid;
        else if(square<=x){
            ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Square root is "<<mySqrt(num);
    return 0;
}
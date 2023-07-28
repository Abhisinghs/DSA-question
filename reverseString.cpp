#include <iostream>
#include <vector>
using namespace std;


//function that reverse a string 
void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
int main(){
    vector<char>c{'h','e','l','l','o'};

    //print array before reverse 
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    reverseString(c);

    //print array after reverse
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    return 1;
    
}


//Time complexity : loop 1 - n/2  -> o(n/2) -> o(n)
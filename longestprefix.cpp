#include <iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans="";
    sort(strs.begin(),strs.end());
    int n=strs.size();
    string first=strs[0],last=strs[n-1];
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]!=last[i]){
            return ans;
        }
        ans+=first[i];
    }
    return ans;
}

int main(){
    vector<string> input_str;
    input_str.push_back("flower");
    input_str.push_back("flowers");
    input_str.push_back("flzong");
    string str=longestCommonPrefix(input_str);
    cout<<"answer is "<<str;
    return 1;
}
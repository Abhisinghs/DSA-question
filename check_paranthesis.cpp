#include <iostream.h>
using namespace std;

bool isValid(string s) {
    vector<char> ansv;
    if(s.size()==1)
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
            ansv.push_back(s[i]);
        }

        if (s[i] == ']') {
             if(ansv.size()==0)
                return false;
            if (ansv[ansv.size() - 1] != '[') {
                return false;
            }
            ansv.pop_back();
        }
        if (s[i] == '}') {
             if(ansv.size()==0)
                return false;
            if (ansv[ansv.size() - 1] != '{') {
                return false;
            }
            ansv.pop_back();
        }
        if (s[i] == ')') {
             if(ansv.size()==0)
                return false;
            if (ansv[ansv.size() - 1] != '(') {
                return false;
            }
            ansv.pop_back();
        }
    }
    if (ansv.size() == 0) {
        return true;
    }
    else {
        return false;
    }
    }

int main(){
    string s='(){}[]';
    //call the function and pass value
    if(isValid(s)){
        cout<<"valid string";
    }else{
        cout<<"not valid string";
    }
    return 1;
}

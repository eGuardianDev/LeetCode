  

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

string reverseWords(string s) {
    vector<string> data;
    
    string temp = "";
    for(int i =0 ;i<s.length();i++){
        if(s[i] != ' '){
            temp +=s[i];
        }
        else{
              if(temp != ""){
                    data.push_back(temp);
                }
            temp = "";
        }
    }
    if(temp != ""){
        data.push_back(temp);
    }
    
    string to_return;
    for(int i =data.size()-1 ; i>=0;i--){
        to_return += data[i];
        if( i!=0) to_return += " ";
    }
    
    return to_return;
}

int main()
{
    
    cout << reverseWords("deez nuts");

    return 0;
}

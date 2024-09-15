/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
       
       string pref;
       
       
        for(int i =0;i<strs[0].length();i++){
            bool flag = false;
            for(int j =1; j<strs.size();j++){
                if(i >= strs[j].length()) {
                    flag = true;
                    break;
                }
                if(strs[0][i] != strs[j][i]){
                    flag = true;
                }
            }
                if(flag == false){
                    pref += strs[0][i];
                }else{
                    return pref;
                }
        }
        return pref;
    }
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}

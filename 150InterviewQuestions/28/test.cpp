/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

using namespace std;
#include <iostream>
int strStr(string haystack, string needle) {
    int index =0;
    int indexToReturn = -1;
    for(int i =0;i<haystack.length();i++){
        if(haystack[i] == needle[index]){
            if(indexToReturn == -1){
                indexToReturn = i;
            }
            if(index == needle.length()-1){
                if(indexToReturn !=-1){
                    return indexToReturn;
                }
            }
            index++;
            
        }else{
            if(indexToReturn != -1){
                i = indexToReturn ;
            }
            indexToReturn = -1;
            index = 0;
            
        }
    }
    
    return -1;
    
}
int main()
{
    std::cout<< strStr("mississippi", "pi");

    return 0;
}

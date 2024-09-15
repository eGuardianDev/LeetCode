class Solution {
public:
    int strStr(string haystack, string needle) {
    int index =0;
    int indexToReturn = -1;
    for(int i =0;i<haystack.length();i++){
        if(haystack[i] == needle[index]){
            if(indexToReturn == -1){
                indexToReturn = i;
            }
            if(index == needle.length()-1){
                return indexToReturn;
            }
            index++;
            
        }else{
            if(indexToReturn != -1){
                i = indexToReturn;
            }
            indexToReturn = -1;
            index =0;
        }
    }
    
    return -1;
    
}
};

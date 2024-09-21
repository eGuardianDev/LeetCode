class Solution {
public:
 
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
};

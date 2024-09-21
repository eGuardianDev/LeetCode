class Solution {
public:
int candy(vector<int>& ratings) {
    int count = 0;
    
    vector<int> kids(ratings.size(),1);
    
    for(int i = 0;i<ratings.size();i++){
        bool fl = false;
        if(i-1 >=0){
            if(ratings[i] >ratings[i-1]){
                fl = true;
            }
        }
        if(fl){
            kids[i] = (kids[i-1]+1);
        }
    }
    
     
    for(int i = ratings.size();i>=0;i--){
        bool fr = false;
            if( i+1 <= ratings.size()-1){
                if(ratings[i] > ratings[i+1]){
                    fr= true;
                }
            }
        if(fr){
              if(kids[i] <= kids[i+1] +1){
                kids[i] = kids[i+1] +1;
            }
        }
    }

    for(int i =0;i<kids.size();i++){
        // std::cout << ratings[i] << " " <<kids[i] << "\n";
        count+=kids[i];
    }
    return count;
}
};

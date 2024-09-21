#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class RandomizedSet {
vector<int> cost;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
      
        if(std::find(cost.begin(), cost.end(), val) != cost.end()) {
            return false;
        } else {
            cost.push_back(val);
            return true;
        }
    }
    
    bool remove(int val) {
        if(find(cost.begin(), cost.end(), val) != cost.end()) {
            auto it = find(cost.begin(), cost.end(), 
                        val); 
        
            // If element is found found, erase it 
            if (it != cost.end()) { 
                cost.erase(it); 
              }       
            return true;
        } else {
            return false;
        }
    }
    
    int getRandom() {
        return cost[1+ (rand() % cost.size())];
    }
};


int main(){
    
 
    RandomizedSet* obj = new RandomizedSet();
    bool param_1 = obj->insert(1);
     param_1 = obj->insert(2);
     param_1 = obj->insert(1);
    bool param_2 = obj->remove(1);
    int param_3 = obj->getRandom();
    std::cout <<param_3;

    return 0;
}
/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
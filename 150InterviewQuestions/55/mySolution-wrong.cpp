/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int goal = nums.size()-1;
    int past =0;
    while(true){
        past = goal;
        goal-= nums[goal-1];
        if(goal == past) return 0;
        if(goal <= 0) break;
    }
    return 1;
}

int main()
{
    vector<int> data = {1,2,3,0,0};
    cout << canJump(data);
    
    return 0;
}

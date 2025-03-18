#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            for (int j = 0; j < nums.size() - 1; j++){
                for (int i = j + 1; i < nums.size(); i++ ){
                    int suma = 0;
                    suma = nums[j] + nums[i];
                    if (suma == target){
                        vector<int> ind = {j , i};
                        return  ind;
                    }
                }

            }
            return {0,0};
            }
    };

int main(){
    Solution sol;
    int target = 10;
    vector<int> nums ={2,5,5,11}, resul;
    resul = sol.twoSum(nums, target);
    cout << resul[0] ;
    cout << resul[1];
    return 0;
}
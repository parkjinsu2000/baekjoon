#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums) {
    unordered_map<int, int> countMap;


    for (int num : nums) {
        countMap[num]++;
    }

  
    int n = nums.size() / 2;

  
    return min((int)countMap.size(), n);
}

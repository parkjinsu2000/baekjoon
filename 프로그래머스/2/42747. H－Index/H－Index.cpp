#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
 
    sort(citations.begin(), citations.end());

    int answer = 0;

    for(int i = 0; i<=citations.size(); i++)
    {
         if(citations[citations.size()-i]>=i)
             answer = i;
        
         
    }
    

    return answer;
}

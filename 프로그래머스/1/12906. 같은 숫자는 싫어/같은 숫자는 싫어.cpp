#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            answer.push_back(arr[i]);
        }
    }

    // 마지막 원소도 포함해줘야 함
    if (!arr.empty()) {
        answer.push_back(arr.back());
    }

    cout << "Hello Cpp" << endl;
    return answer;
}
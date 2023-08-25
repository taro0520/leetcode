class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        vector<int> temp;
        temp.clear();
        answer.clear();
        temp.push_back(1);
        answer.push_back(temp);
        if(numRows>1)
        {
            temp.push_back(1);
            answer.push_back(temp);
            for(int i = 2; i < numRows; ++i)
            {
                temp.clear();
                temp.push_back(answer[i-1][0]);
                for(int j = 0; j < answer[i-1].size() - 1; ++j)
                    temp.push_back(answer[i-1][j] + answer[i-1][j+1]);
                temp.push_back(answer[i-1][answer[i-1].size() - 1]);
                answer.push_back(temp);
            }
        }
        return answer;
    }
};
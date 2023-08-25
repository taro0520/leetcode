class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        vector<int> temp2;
        temp.clear();
        temp.push_back(1);
        temp2=temp;
        if(rowIndex>0)
        {
            temp.push_back(1);
            temp2=temp;
            for(int i = 1; i < rowIndex; ++i)
            {
                temp2.clear();
                temp2.push_back(temp[0]);
                for(int j = 0; j < temp.size() - 1; ++j)
                    temp2.push_back(temp[j] + temp[j+1]);
                temp2.push_back(temp[temp.size() - 1]);
                temp=temp2;
            }
        }
        return temp2;
    }
};
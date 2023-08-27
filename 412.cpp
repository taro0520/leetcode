class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i = 1; i <= n; ++i)
        {
            if(i % 15 == 0 && i > 14)
                ans.push_back("FizzBuzz");
            else if(i % 3 == 0 && i > 2)
                ans.push_back("Fizz");
            else if(i % 5 == 0 && i > 4)
                ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));
        }
        return ans;
    }
};

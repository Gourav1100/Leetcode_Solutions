class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        int current = 1;
        while(result.size() != n) {
            result.push_back(current);
            if (current * 10 <= n) {
                current *= 10;
            } else {
                while(current >= n || current % 10 == 9) {
                    current /= 10;
                }
                current += 1;
            }
        }
        return result;
    }
};
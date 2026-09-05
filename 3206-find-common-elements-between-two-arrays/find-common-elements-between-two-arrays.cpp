class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& a, vector<int>& b) {

        set<int> sA;
        set<int> sB;

        for (int i = 0; i < a.size(); i++) {
            sA.insert(a[i]);
        }

        for (int i = 0; i < b.size(); i++) {
            sB.insert(b[i]);
        }

        int countA = 0;
        int countB = 0;

        for (int i = 0; i < a.size(); i++) {
            if (sB.count(a[i])) {
                countA++;
            }
        }

        for (int i = 0; i < b.size(); i++) {
            if (sA.count(b[i])) {
                countB++;
            }
        }

        return {countA, countB};
    }
};
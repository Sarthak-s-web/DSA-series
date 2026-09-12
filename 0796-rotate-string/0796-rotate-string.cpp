class Solution {
public:
    bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) {
        return false;
    }

    int n = goal.length();

    for (int start = 0; start < n; start++) {
        bool matched = true;

        for (int i = 0; i < n; i++) {

            // Circular movement in goal
            int j = (start + i) % n;

            if (s[i] != goal[j]) {
                matched = false;
                break;
            }
        }
         if (matched) {
            return true;
        }
    }
    return false;
    }
};
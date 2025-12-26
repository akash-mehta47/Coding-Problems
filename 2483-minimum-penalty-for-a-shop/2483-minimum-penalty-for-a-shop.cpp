class Solution {
public:
    int bestClosingTime(string customers) {
        
        int current_penalty = 0;
        for (char c : customers) {
            if (c == 'Y') {
                current_penalty++;
            }
        }
        
        int min_penalty = current_penalty;
        int best_hour = 0;
        
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y') {
                current_penalty--;
            } else {
                current_penalty++;
            }
            if (current_penalty < min_penalty) {
                min_penalty = current_penalty;
                best_hour = i + 1;
            }
        }
        
        return best_hour;
    }
};
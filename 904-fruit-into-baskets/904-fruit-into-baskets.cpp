class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int last_fruit = -1;
        int second_last_fruit = -1;
        int last_fruit_count = 0;
        int current_max = 0;
        int max_count = 0;
        
        for(auto fruit: fruits) {
            if (fruit == last_fruit || fruit == second_last_fruit) {
                current_max += 1;
            } else {
                current_max = last_fruit_count + 1;
            }
            
            if(fruit == last_fruit) {
                last_fruit_count += 1;
            } else {
                last_fruit_count = 1;
            }
            
            if(fruit != last_fruit) {
                second_last_fruit = last_fruit;
                last_fruit = fruit;
            }
            
            max_count = max(current_max, max_count);
        }
        return max_count;
    }
};
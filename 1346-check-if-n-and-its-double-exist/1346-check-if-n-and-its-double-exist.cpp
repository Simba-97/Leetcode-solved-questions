class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int num,size = arr.size();
        for(int i = 0;i < size; i++){
            num = 2*arr[i];
            for(int j = 0; j < size; j++){
                    if(j != i && num == arr[j]){
                        return true;
                    }
            }
            
        }
        return false;
    }
};
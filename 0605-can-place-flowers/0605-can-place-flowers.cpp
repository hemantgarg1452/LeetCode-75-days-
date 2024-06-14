class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//Approach 1
        for(int i=0; i< flowerbed.size(); i++){
            if((flowerbed[i]==0) && (i == 0 || flowerbed[i-1]==0)
                                 && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)){
                flowerbed[i] =1;
                n--;
            } 
        }        
        if(n>0) return false;
        return true;




//Approach 2        
        // int result =0;
        // int size = flowerbed.size();
        // for(int i=0; i<flowerbed.size() && result<n; i++){
        //     if(flowerbed[i] == 0){
        //         int next = (i == size-1) ? 0 : flowerbed[i+1];
        //         int prev = (i == 0) ? 0 : flowerbed[i-1];

        //     if(next == 0 && prev == 0){
        //         flowerbed[i] = 1;
        //         result++;
        //     }    
        //     }
        // }
        // return result == n;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int i=0;      //i placed at 0 index
        int j=0;      //j also placed at 0 index means both i and j are start..
        int k=size-1; //k placed at last index because this should be 2 so last..

        while(j<=k){ //loop continues until J cross K..

            if(nums[j]==1){ //if nums[j] already is 1 then move J because J must be 1
                j++;
            } 
            else if(nums[j]==2){ //if J is 2 then swap with K bcz K should be 2 and 2 will last in array
                swap(nums[j], nums[k]);
                k--;       //also decrement K by one.. 
            } 
            
            else{
                swap(nums[j], nums[i]); //else if J is 0 then swap with I because I should be 0 and I placed at startig...
                i++; //increase i and j both bcz they are at same index..
                j++;
            }
        }
    }
};

// JAVA first simple Approach----------->>

// int zero = 0, one = 1, n = nums.length;
//     for(int num : nums){
//         if(num==0) zero++;
//         else if(num==1) one++;
//     }

//     for(int i=0; i<zero; i++){
//         nums[i]=0;
//     }

//     for(int i=zero; i<zero + one; i++){
//         nums[i]=1;
//     }

//     for(int i=zero + one; i<n; i++){
//         nums[i]=2;
//     }

// JAVA Second Approach (Same as C++ approach)--------------->>

// int i=0, j=0, k=nums.length-1;

//     while(j<=k){    
//         if(nums[j]==0) swap(i++, j++, nums);

//         else if(nums[j]==1) j++;

//         else swap(j, k--, nums);
//     }

// private void swap(int i, int j, int[]nums){
//     int tempp = nums[i];
//       nums[i] = nums[j];
//       nums[j] = temp;
// }    












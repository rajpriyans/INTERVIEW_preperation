class Solution {
    public:
      void quickSort(vector<int>& nums, int low, int high) {
       int n=nums.size();
       if(low<high){
        int pivotidx=partition(nums,low,high);
       quickSort(nums,low,pivotidx-1);
       quickSort(nums,pivotidx,high);  
       }
      }
  
    public:
      int partition(vector<int>& nums, int low, int high) {
       int idx=low-1;
       int pivot=nums[high];
       for(int j=low;j<high;j++){
           if(nums[j]<=pivot){
               idx++;
               swap(nums[idx],nums[j]);
           }
       }
       idx++;
       swap(nums[idx],nums[high]);
       return idx;
      }
  };
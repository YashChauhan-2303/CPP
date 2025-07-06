// class FindSumPairs {
// private:
//     vector<int> nums1, nums2;
//     unordered_map<int,int> mp2;
// public:
//     FindSumPairs(vector<int>& v1, vector<int>& v2) {
//         nums1 = v1;
//         nums2 = v2;
//         for (int num : nums2) {
//             mp2[num]++;
//         }
//     }
    
//     void add(int index, int val) {
//         int oldVal = nums2[index];
//         mp2[oldVal]--;
//         nums2[index] += val;
//         mp2[nums2[index]]++;
//     }
    
//     int count(int tot) {
//         int count=0;
//         unordered_map<int,int> mp1;
//         for(int i=0; i<nums1.size(); i++){
//             mp1[nums1[i]]++;
//         }
//         for(auto& pair: mp1){
//             if(mp2.count(tot - pair.first)){
//                 count += (pair.second * mp2[tot - pair.first]);
//             }
//         }
//         return count;
//     }
// };

// /**
//  * Your FindSumPairs object will be instantiated and called as such:
//  * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
//  * obj->add(index,val);
//  * int param_2 = obj->count(tot);
//  */
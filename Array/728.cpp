// class Solution {
// public:
//     bool toCheck(int n){
//         int num = n;
//         while(num > 0){
//             int dig = num%10;
//             if(dig == 0 || n%dig != 0) return false;
//             num /= 10;
//         }
//         return true;
//     }

//     vector<int> selfDividingNumbers(int left, int right) {
//         vector<int> arr;

//         for(int i=left; i<=right; i++){
//             if(toCheck(i)) arr.push_back(i);
//         }

//         return arr;
//     }
// };
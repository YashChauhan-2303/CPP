// class Solution {
// public:
//     string multiply(string num1, string num2) {
//         int num1Size = num1.size();
//         int num2Size = num2.size();

//         string result = "";
//         vector<int> total(num1Size + num2Size,0);

//         for(int i = num1Size - 1; i >= 0; i--){
//             for(int j = num2Size - 1; j >= 0; j--){
//                 int prod = (((num2[j] - '0') * (num1[i] - '0')) + total[i + j + 1]);
//                 total[i + j + 1] = prod % 10;
//                 total[i + j] += prod / 10;
//             }
//         }

//         int i = 0;

//         while(i < total.size() && total[i] == 0) {
//             i++;
//         }

//         if(i == total.size()) {
//             return "0";
//         }

//         while(i < total.size()) {
//             result += char(total[i] + '0');
//             i++;
//         }       

//         return result;
//     }
// };
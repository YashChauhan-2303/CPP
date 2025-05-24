//66. Plus One

#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int num = 1;
    int n = digits.size();
    for ( int i=n-1; i>=0; i--){
        if (digits[i]<9){
            digits[i]++;
            break;
        } else if (digits[i]==9){
            if (i==0){
                digits[i]=0;
                reverse(digits.begin(),digits.end());
                digits.push_back(1);
                reverse(digits.begin(),digits.end());
                break;
            }
            digits[i]=0;
        }
    }
    return digits;
}

int main(){
    vector<int> digits = { 7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6 };
    digits = plusOne(digits);
    for(int i=0; i<digits.size(); i++){
        cout<< digits[i] << " ";
    }
    return 0;
}
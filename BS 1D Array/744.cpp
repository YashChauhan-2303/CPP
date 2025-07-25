//744. Find Smallest Letter Greater Than Target

#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int i=0, j=letters.size()-1;
    char ans = letters[0];
    while(i<=j){
        int mid = i + (j-i)/2;
        if (letters[mid]>target){
            ans = letters[mid];
            j = mid-1;
        } else i = mid + 1;
    }
    return ans;
}

int main(){
    vector<char> letters= { 'c','f','j' };
    char target = 'c' ;
    cout << nextGreatestLetter(letters,target);
    return 0;
}
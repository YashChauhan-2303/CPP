//2469. Convert the Temperature

#include<bits/stdc++.h>
using namespace std;

vector<double> convertTemperature(double celsius) {
    vector<double> ans;
    ans.push_back(celsius + 273.15);
    ans.push_back((celsius * 9/5) + 32);
    return ans;
}

int main(){
    double celsius = 36.50;
    vector<double> ans = convertTemperature(celsius);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
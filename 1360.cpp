//1360. Number of Days Between Two Dates

#include<bits/stdc++.h>
using namespace std;

int daysBetweenDates(string date1, string date2) {
    string yr1 = date1.substr(0,4), yr2 = date2.substr(0,4);
    int year1 = stoi(yr1), year2 = stoi(yr2);
    yr1 = date1.substr(5,7), yr2 = date2.substr(5,7);
    int month1 = stoi(yr1), month2 = stoi(yr2);
    yr1 = date1.substr(8,10), yr2 = date2.substr(8,10);
    int day1 = stoi(yr1), day2 = stoi(yr2);

    int ans = 0; 

    if(year1>year2){
        if(year1-year2 > 1){
            ans = (year1-year2) * 365 + (month1-month2)*30
        }
    }

}

int main(){
    return 0;
}
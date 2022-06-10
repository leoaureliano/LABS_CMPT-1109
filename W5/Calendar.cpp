#include <iostream>

using namespace std;

bool is_leap(int a_year){
    if(a_year % 4 == 0){
        if(a_year % 100 == 0){
            if(a_year % 400 == 0){
                return true;
            }else {
                return false;
            }
        }else {
            return true;
        }
    } else {
    return false;
    }
    int number_of_days_in_a_month(int a_month)
    {
        if (a_month == 1 || a_month == 3 || a_month == 5 || a_month == 7 || a_month == 8 || a_month == 10 || a_month == 12)
            return 31;
        else
            return 30;
    }
}
int main(){

    string calendar;
    int year;

    cout << "Enter the name of the output file: \n";
    cin >> calendar; 
    cout << "Enter the year fir which you wish to generate the calendar: \n";
    cin >> year;
    cout << "Calendar for year " << year << endl;
    cout << is_leap(year);


    const int  WEEK = 5;
    const int DAYS_PER_WEEK = 7;
    int day_of_month = 1;
    int arr[WEEK][DAYS_PER_WEEK];

    for (int i = 0; i < WEEK; i++){
        for (int i = 0; i <5; i++){
            for( int j = 0; j < DAYS_PER_WEEK && number_of_days_in_a_month(1); j++){
                arr[i][j] = day_of_month++;
            }
        }
    }
    int couther = 1;

    for (int i = 0; i < WEEK; i++){
        for( int j = 0; j < DAYS_PER_WEEK && couther <= number_of_days_in_a_month(1); j++){
            cout << arr[i][j] << " ";
            couther ++;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int date, month, year;
    cout << "Enter the date(dd mm yyyy) : ";
    cin >> date >> month >> year;
    int arr_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string arr_day[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int d1 = ((year - 1) % 400);
    int extra_day = (d1 / 100) * 5 + ((d1 % 100) / 4) * 2 + ((d1 % 100) - (d1 % 100) / 4);
    int sum_day = 0;
    int i = 0;
    while (i != month - 1)
    {
        sum_day += arr_month[i];
        i++;
    }
    sum_day = (sum_day + date + extra_day) % 7;

    cout << arr_day[sum_day] << endl;

    return 0;
}
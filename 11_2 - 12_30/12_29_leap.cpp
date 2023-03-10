#include <stdio.h>
struct date{
    int month;
    int day;
    int year;
};
int numberOfDays(struct date d);
int isLeap(struct date d);
int main(int argc, char const *argv[])
{
    struct date today,tomorrow;
    printf("Please enter today's date (YY/MM/DD): ");

    scanf("%i %i %i",&today.year,&today.month,&today.day);
    if(today.day!=numberOfDays(today)){//不是月末最后一天
        tomorrow.month = today.month;
        tomorrow.day = today.day+1;
        tomorrow.year = today.year;
    }
    else if(today.month==12){
        tomorrow.month = 1;
        tomorrow.day = 1;
        tomorrow.year = today.year+1;
    }
    else{//是月末最后一天
        tomorrow.month = today.month+1;
        tomorrow.day = 1;
        tomorrow.year = today.year;
    }
    printf("Tomorrow's date is %i-%i-%i.\n",
    tomorrow.year,tomorrow.month,tomorrow.day);

    return 0;
}
int numberOfDays(struct date d){
    int days;
    const int daysPerMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month==2 && isLeap(d))
    {
        days=29;
    }
    else{
        days = daysPerMonths[d.month-1];
    }
    return days;
}
int isLeap(struct date d){
    bool leap = false;
    if (d.year%4==0 && d.year%100!=0 || d.year%400==0)
    {
        leap = true;
    }
    return leap;
    
}
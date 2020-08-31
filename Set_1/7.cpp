#include<bits/stdc++.h>
using namespace std;
#define N 1000001
int firstday[29];
int lastday[29];
int checkleap(int Y)
{
	if(Y%400==0)
		return 1;
	else if((Y%4==0) && (Y%100!=0))
		return 1;
	return 0;		
}
int findm(int months, int yearss){
    int findmonth, leapyr;
    if((yearss%100==0) && (yearss%400!=0))
        leapyr = 0;
    else if(yearss % 4 == 0)
        	leapyr = 1;
    else
        leapyr = 0;
    findmonth = 3 + (2 - leapyr) * ((months + 2) / (2 * months))+ (5 * months + months / 9) / 2;
    findmonth = findmonth % 7;
    return findmonth;
    }
int weekday(int date, int month, int year) {
    int dayWeek, yr, yd;
	yr = year % 100;
	yd = year / 100;
    dayWeek = 1.25 * yr + findm(month, year) + date - 2 * (yd % 4);
    dayWeek = dayWeek % 7;
    switch (dayWeek)
	{
    	case 0: return 6; break;
    	case 1:	return 7; break;
    	case 2: return 1; break;
    	case 3: return 2; break;
    	case 4: return 3; break;
    	case 5: return 4; break;
    	case 6: return 5; break;
    	default: return 0;
    }
    return 0;
}
int main()
{
	int day;
	for(int i=1; i<=28; i++)
	{
		firstday[i] = weekday(1,2,i);
		if(checkleap(i))
			day = 29;
		else
			day = 28;	
		lastday[i] = weekday(day,2,i);
	}
	for(int i=1; i<=28; i++)
	{
		cout<<i<<" "<<firstday[i]<<"\t"<<lastday[i]<<"\n";
	}
    return 0;
}

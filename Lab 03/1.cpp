#include<iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time() : hours(0), minutes(0), seconds(0)		
    { 	}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {	}

    void DisplayTime() const
    {
        if(hours < 10)						// if hours smaller than 10, display 0X:00 instead of X:00
            cout << "0";
        cout << hours << ":";
        if(minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if(seconds < 10)
            cout << "0";
        cout << seconds << endl;
    }

    Time AddTo(Time timeAdd)
    {
        Time temp;
        temp.seconds = seconds + timeAdd.seconds;
        temp.minutes = minutes + timeAdd.minutes;
        temp.hours = hours + timeAdd.hours;

        if(temp.seconds >= 60)				//ex: 75 second = 1 munite 15 secs
        {
        	temp.minutes += temp.seconds / 60;
            temp.seconds = temp.seconds % 60;
        }

        if(temp.minutes >= 60)
        {
            temp.hours += temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        }

        if(temp.hours > 12)
        {
            temp.hours = temp.hours % 12;
        }

        return temp;
    }
};

int main()
{
    Time time1(0, 0, 0);
    Time time2(0, 0, 3600);
    Time time3;

    time3 = time1.AddTo(time2);
    time3.DisplayTime();

    return 0;
}

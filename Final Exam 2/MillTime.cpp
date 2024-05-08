// MillTIme.cpp
//
//#include "stdafx.h"
#include <iostream>
using namespace std;
class Time
{
protected:
	int hour;
	int min;
	int sec;
public:
	Time(int h, int m, int s)
	{
		hour = h; min = m; sec = s;
	}

	int getHour()
	{
		return hour;
	}

	int getMin()
	{
		return min;
	}

	int getSec()
	{
		return sec;
	}
};

class MilTime : public Time
{
private:
	int milHours;
	int milSeconds;
public:
	MilTime(int h = 0, int s = 0) : Time(0, 0, s)
	{

		try{
			if (h < 0 || h > 2359){
				//Throw when an invalid hour (< 0 or > 2359) is passed to the class.
				throw std::invalid_argument("Hours must be in range of 0 and 2359 (inclusive)");
				//cout << "Hours must be in the range 0 - 2359.\n";
				milHours = 0;
				milSeconds = 0;
			}
			else if (s < 0 || s > 59){
				//Throw when an invalid number of seconds (< 0 or > 59) is passed to the class.
				throw std::invalid_argument("Seconds must be in range of 0 and 59 (inclusive)");
				//cout << "Seconds must be in the range 0 - 59.\n";
				milSeconds = 0;
			}
			else{
				milHours = h;
				milSeconds = s;
			}
			convert();
		}

		catch (const std::invalid_argument& e){
			cout << e.what() << endl;
		}
		


		
		
		
		
		
	}

	void convert()
	{
		double temp;

		if (milHours > 1200)
			hour = milHours - 1200;
		else
			hour = milHours;

		hour /= 100;
		temp = (milHours - 1200) / 100.0;
		min = static_cast<int>(((temp - static_cast<int>(temp)) * 100));
	}

	void setTime(int h, int s)
	{
		
			// Create a MilTime object.
			MilTime timeObj(hour, sec);

			// Display the hour in military and
			// standard formats.
			cout << "The hour in military format is "
				<< timeObj.getHour() << endl;
			cout << "The hour in standard format is "
				<< timeObj.getStandHr() << endl;

			// Display the minutes.
			cout << "The minutes are "
				<< timeObj.getMin() << endl;

			// Display the seconds.
			cout << "The seconds are "
				<< timeObj.getSec() << endl;
		
	}

	int getHour()
	{
		return milHours;
	}

	int getStandHr()
	{
		return hour;
	}
};

int main()
{
	// Create a MilTime object for 1445 hours, 27 seconds.
	MilTime timeObj(1445, 27);

	// Display the hours, minutes, and seconds.
	cout << "The hour in military format is "
		<< timeObj.getHour() << endl;
	cout << "The hour in standard format is "
		<< timeObj.getStandHr() << endl;
	cout << "The minutes are "
		<< timeObj.getMin() << endl;
	cout << "The seconds are "
		<< timeObj.getSec() << endl;
	return 0;
}

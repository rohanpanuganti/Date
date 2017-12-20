// Rohan Panuganti
// Date.cpp
// 4/3/17

#include "Date.h"
#include <string>
#include <iostream>

using namespace std;

Date::Date() {
  year = month = day = 0;
}

Date::Date(int y, int m, int d) {
  setDate(y, m, d);
}

void Date::setDate(int y = 0, int m = 0, int d = 0){
  year = y;
  month = m;
  day = d;
}

void Date::displayDate() const{
  cout << month << "/" <<  day << "/" << year << endl;
}

string Date::findSeason() const{

  if((month == 3 && day >= 21) || (month > 3 && month < 6) ||
     (month == 6 &&  day < 21)){
    return "Spring";
  }

  else if((month == 6 && day >= 21) || (month > 6 && month < 9) ||
     (month == 9 && day < 23)){
    return "Summer";
  }

  else if((month == 9 && day >= 23) || (month > 9 && month < 12) ||
     (month == 12 && day < 22)){
    return "Autumn";
  }
  
  else {
    return "Winter";
  }
}

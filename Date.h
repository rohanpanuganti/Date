// Rohan Panuganti
// Date.h
// 4/3/17

#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date {
private:
  int year;
  int month;
  int day;

public:
  Date();
  Date(int, int, int);
  void setDate(int, int, int);
  void displayDate() const;
  string findSeason() const;
};
#endif

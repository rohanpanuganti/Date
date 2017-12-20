#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main() {
  Date d;

  cout << endl;
  d.setDate(2012, 1, 1);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;

  d.setDate(1995, 3, 10);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;

  d.setDate(2015, 6, 20);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;

  d.setDate(2000, 9, 22);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;

  d.setDate(1980, 12, 25);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;

  d.setDate(2001, 11, 22);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;
  
  d.setDate(2017, 10, 31);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;

  d.setDate(2011, 9, 23);
  d.displayDate();
  cout << d.findSeason() << endl;
  cout << endl;
  
  return 0;
}
  




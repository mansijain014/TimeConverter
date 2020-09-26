#include <iostream>
using namespace std;

class Time
{
private:
  int h, m, s;
  long totaltime;
  void calculate(){
    totaltime = h * 3600 + m * 60 + s;  
  }
public:
  void getData ()
  {
    cout << "Enter time: ";
    cout << "\nHours? ";
    cin >> h;
    cout << "\nMinutes? ";
    cin >> m;
    cout << "\nSeconds? ";
    cin >> s;
  }
  void putData (){
    calculate();  
    cout << "Total Time(in seconds): " << totaltime;  
  }
};

int main ()
{
  Time T;
  T.getData();
  T.putData();
  return 0;
}

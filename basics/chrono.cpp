#include <chrono>
#include <ctime>
#include <iostream>
#include <ostream>
#include <string>

int main() {
  //? DURATIONS
  std::chrono::seconds sec(5);
  std::chrono::minutes min(2);
  std::chrono::hours hr(1);

  //? TIME POINT
  std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();

  //? CLOCK
  std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
  // Get the time_point 1 hour from now
  std::chrono::system_clock::time_point one_hour_from_now =
      now + std::chrono::hours(1);

  //? CALENDAR TIME
  std::chrono::system_clock::time_point now2 = std::chrono::system_clock::now();
  std::time_t now_c = std::chrono::system_clock::to_time_t(now2);
  std::cout << "Current time: " << std::ctime(&now_c) << std::endl;

  //! PARSING A TIME POINT TO STRING
  time_t tmp = std::chrono::system_clock::to_time_t(one_hour_from_now);
  tm *tinfo = localtime(&tmp);
  char output[70];
  std::string toDisplay = "%Y-%m-%d %H:%M:%S";
  strftime(output, sizeof(output), toDisplay.c_str(), tinfo);
  std::cout << output << std::endl;

  return 0;
}
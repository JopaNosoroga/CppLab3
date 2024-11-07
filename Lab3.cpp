#include <iostream>
#include <map>
#include <string>
#include <vector>

class Time {
protected:
  long long second;

public:
  void NewSecond(long long temp_second) { second = temp_second; }
  std::string outputTime() {
    while (second > 60 * 60 * 24)
      second -= 60 * 60 * 24;

    std::string sec = std::to_string(second % 60);
    std::string min = std::to_string((second / 60) % 60);
    std::string hour = std::to_string((second / 60 / 60) % 24);
    if (sec.size() < 2)
      sec += "0";
    if (min.size() < 2)
      min += "0";
    return hour + ":" + min + ":" + sec;
  }
  Time(long long temp_second) { second = temp_second; }
};

class House {
protected:
  int CountFloor;

public:
  House(int temp_floor) { CountFloor = temp_floor; }
  std::string outputFloor() {
    std::string endi;
    if (CountFloor % 10 == 1 && CountFloor != 11)
      return "Дом с " + std::to_string(CountFloor) + " этажом.";
    return "Дом с " + std::to_string(CountFloor) + " этажами.";
  }
};

class Employee {
protected:
  static inline std::vector<std::string> AllEmployee;
  static inline std::string boss;
  std::string name;
  std::string departament;

public:
  Employee(std::string temp_name, std::string temp_departament) {
    name = temp_name;
    departament = temp_departament;
    AllEmployee.push_back(name);
  }

  void NewBoss(std::string temp_boss) { boss = temp_boss; }

  std::string outputEmployee() {
    if (name == boss)
      return name + " начальник отдела " + departament;
    return name + " работает в отделе " + departament +
           ", начальник которого " + boss;
  }

  std::vector<std::string> outputAllEmployee() { return AllEmployee; }
};

class Pistol {
protected:
  int countCartridge;

public:
  Pistol(int temp_count = 5) { countCartridge = temp_count; }
  std::string shot() {
    if (countCartridge > 0) {
      countCartridge -= 1;
      return "Бах";
    }
    return "Клац";
  }
};

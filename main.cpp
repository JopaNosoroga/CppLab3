#include "Lab3.h"
#include <iostream>
#include <vector>

int main() {
  int choice;
  do {
    std::cout << "Введите номер задания, для выхода введите 0: ";
    std::cin >> choice;
    switch (choice) {
    case 0:
      break;
    case 1: {
      Time ti(10);
      std::cout << ti.outputTime() << '\n';
      ti.NewSecond(10000);
      std::cout << ti.outputTime() << '\n';
      ti.NewSecond(100000);
      std::cout << ti.outputTime() << '\n';
      break;
    }
    case 2: {
      House home(1);
      std::cout << home.outputFloor() << '\n';
      House home1(5);
      std::cout << home1.outputFloor() << '\n';
      House home2(23);
      std::cout << home2.outputFloor() << '\n';
      break;
    }
    case 3: {
      Employee em1("Петров", "IT");
      Employee em2("Козлов", "IT");
      Employee em3("Сидоров", "IT");
      em2.NewBoss("Козлов");
      std::cout << em1.outputEmployee() << '\n';
      std::cout << em2.outputEmployee() << '\n';
      std::cout << em3.outputEmployee() << '\n';
      break;
    }

    case 4: {
      Employee em1("Петров", "IT");
      Employee em2("Козлов", "IT");
      Employee em3("Сидоров", "IT");
      std::vector<std::string> all = em3.outputAllEmployee();
      for (int i = 0; i < 3; i++)
        std::cout << all[i] << '\n';
    } break;
    case 5: {
      House home1(2);
      House home2(35);
      House home3(91);
      std::cout << home1.outputFloor() << '\n';
      std::cout << home2.outputFloor() << '\n';
      std::cout << home3.outputFloor() << '\n';
      // home3.CountFloor = 0;
      break;
    }
    case 6: {
      Pistol PM(3);
      for (int i = 0; i < 5; i++) {
        std::cout << PM.shot() << '\n';
      }
      break;
    }
    default:
      std::cout << "Ошибка ввода!" << '\n';
    }
  } while (choice != 0);
  return 0;
}

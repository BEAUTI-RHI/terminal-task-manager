#include <iostream>

#include <TaskManager/app.hpp>

int main () {
  bool running {true};
  
  TaskManager::App app(std::cin, std::cout);

  app.run();

  return 0
};

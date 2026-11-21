#include <istream>
#include <ostream>
#include <iomanip>

#include <TaskManager/app.hpp>

namespace TaskManager {
  namespace {
    int MenuSize {8};
  }
  void App::run() {
    out_ << "\nWelcome to the Terminal Task Manager\n";
    
    bool running {true};
    while (running) {
      print_menu(MenuSize);
    }
    
    out_ << "\nGoodBye! for now\n";
  }

  void App::print_menu(int menu_size=3) {
    out_ << "\n====== Menu ======\n";

    for (size_t i {}; i < menu_size; i++) {
      out_ 
        << i+1 << ". Menu Item";
    }
  }
};

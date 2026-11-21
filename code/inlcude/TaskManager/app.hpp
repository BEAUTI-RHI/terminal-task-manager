#pragma once

#include <iosfwd>

namespace TaskManager {
  class App {
    public:
      App(std:istream& in, std::ostream& out) : in_(in), out_(out) {}
  

      void run();

    private:

      void print_menu();
  };
}

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
public:
  Harl(void);
  ~Harl(void);
  typedef void (Harl::*funcPtr)(void);
  typedef std::string lvl;
  void complain( std::string level );

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif // HARL_HPP
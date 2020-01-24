#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>

class Processor {
 public:  // TODO: See src/processor.cpp
  Process(int pid);
  int Pid() const;
  std::string Command() const;
  std::string Ram() const;
  std::string User() const;
  long int UpTime() const;
  float CpuUtilization() const;
  void CpuUtilization(long active_ticks, long system_ticks);
  long Jiffies() const;
  bool operator<(const Process& a) const;
  bool operator>(const Process& a) const;

  // TODO: Declare any necessary private members
 private:
  int pid_;
  float cpu_{0};
  long cached_active_ticks_{0};
  long cached_idle_ticks_{0};
  long cached_system_ticks_{0};
};

#endif
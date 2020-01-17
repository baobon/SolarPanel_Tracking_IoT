#ifndef _PROGRAM_ADAPTOR_H_H_
#define _PROGRAM_ADAPTOR_H_H_
 #include "Arduino.h"

extern unsigned long ul_currentMililis;
class Program_Adaptor_Class{
  public:
  
  unsigned long ul_lastMillis;
  unsigned long ul_timeRepeat;
  unsigned int ui_stateProgram;
  unsigned int ui_stateStatus;
  
  virtual void setup(){};
  virtual void loop(){};
};

#endif

#ifndef _LIGHT_ON_COMMAND_H_
#define _LIGHT_ON_COMMAND_H_

#include "../command.h"
#include "light.h"

class LightOnCommand : public Command
{
  public:
    LightOnCommand(Light light) : Command("LightOn"), light_(light) {}
    void Execute(void) const;
    void Undo(void) const;

  private:
    Light light_;
};

#endif // _LIGHT_ON_COMMAND_H_

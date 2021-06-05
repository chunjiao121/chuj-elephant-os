#include "init.h"
#include "print.h"
#include "interrupt.h"
#include "timer.h"
#include "memory.h"
#include "thread.h"
#include "console.h"
#include "keyboard.h"

void InitAll()
{
    sys_putstr("init_all..\n");
    IdtInit();
    TimerInit();
    VmemInit();
    ThreadInit();
    ConsoleInit();
    KeyboardInit();
    return;
}

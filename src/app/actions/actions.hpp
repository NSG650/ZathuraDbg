#ifndef ZATHURA_ACTIONS_HPP
#define ZATHURA_ACTIONS_HPP
#include "../app.hpp"
extern void runActions();
extern void startDebugging();
extern void debugContinueAction(bool skipBP = false);
extern bool debugAddBreakpoint(int lineNum);
extern bool debugRemoveBreakpoint(int lineNum);
#endif //ZATHURA_ACTIONS_HPP

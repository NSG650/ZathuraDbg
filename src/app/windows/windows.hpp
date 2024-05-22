#ifndef windows_hpp
#define windows_hpp
#include "../tasks/editorTasks.hpp"
#include "../../../vendor/ordered-map/include/tsl/ordered_map.h"
#include "../integration/interpreter/interpreter.hpp"

extern void registerWindow();
extern void consoleWindow();
extern void hexEditorWindow();
extern void stackEditorWindow();
#endif
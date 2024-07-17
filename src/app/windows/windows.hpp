#ifndef windows_hpp
#define windows_hpp
#define IMGUI_DEFINE_MATH_OPERATORS
#include "../tasks/editorTasks.hpp"
#include "../../../vendor/ordered-map/include/tsl/ordered_map.h"
#include "../../../vendor/log/clue.hpp"
#include "../integration/interpreter/interpreter.hpp"
#include "../../../vendor/imgui/misc/cpp/imgui_stdlib.h"
#include "../arch/arch.hpp"
#include <list>

struct newMemEditWindowsInfo{
    MemoryEditor memEditor;
    uint64_t address{};
    size_t size{};
};


enum arch{
    x86 = 0,
    ARM,
    RISCV
};

extern const uc_mode x86Modes[];
extern const uc_mode armModes[];
extern const char* x86ModeStr[];
extern const char* armModeStr[];
extern tsl::ordered_map<std::string, std::string> registerValueMap;
extern std::unordered_map<std::string, std::string> tempRegisterValueMap;
extern bool codeHasRun;
extern bool stepClickedOnce;
extern void registerWindow();
extern void updateRegs(bool useTempContext = false);
extern void consoleWindow();
extern void hexEditorWindow();
extern uint64_t hexStrToInt(const std::string& val);
extern void stackEditorWindow();
extern std::vector<std::string> parseRegisters(std::string registerString);
extern MemoryEditor memoryEditorWindow;
extern void stackWriteFunc(ImU8* data, size_t off, ImU8 d);
extern void hexWriteFunc(ImU8* data, size_t off, ImU8 d);
extern MemoryEditor stackEditor;
extern int checkHexCharsCallback(ImGuiInputTextCallbackData* data);
extern const char* items[];
#endif
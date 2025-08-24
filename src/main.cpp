#include <Windows.h>
#include <spdlog/spdlog.h>
#include "F4SE/F4SE.h"

constexpr uintptr_t kMovOffset = 0xFE69F9; // Offset to LockpickingMenu::DamageLockpick + 179
constexpr size_t kMovLength = 7;

void NopInstruction(uintptr_t address, size_t length)
{
    DWORD oldProtect;
    VirtualProtect(reinterpret_cast<void*>(address), length, PAGE_EXECUTE_READWRITE, &oldProtect);
    memset(reinterpret_cast<void*>(address), 0x90, length); // 0x90 = NOP
    VirtualProtect(reinterpret_cast<void*>(address), length, oldProtect, &oldProtect);
}

F4SE_PLUGIN_LOAD(const F4SE::LoadInterface* a_f4se)
{
    F4SE::Init(a_f4se);

    // Base address
    uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA("Fallout4.exe"));
    uintptr_t target = base + kMovOffset;

    NopInstruction(target, kMovLength);

    spdlog::info("NOPped mov instruction at Fallout4+0x{:X}", kMovOffset);

    return true;
}
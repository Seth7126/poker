// ============================================================
// 函数名称: sub_4269a8
// 虚拟地址: 0x4269a8
// WARP GUID: 4c49f67d-f944-5608-a139-0126ebe4fced
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetClipboardData
// [内部子函数调用]: sub_41bc68, sub_42663c, sub_4265f4, sub_426610
// [被调用的父级函数]: sub_426ab0
// ============================================================

int32_t __convention("regparm")sub_4269a8(BOOL arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    sub_42663c(arg1)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4265f4(arg1)
    HANDLE hMem = nullptr
    sub_41bc68(arg2, &hMem)
    int16_t var_e
    HANDLE hMem_1
    SetClipboardData(zx.d(var_e), hMem_1)
    
    if (hMem != 0)
        SetClipboardData(9, hMem)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_1c_1)(int32_t* arg1 @ ebp) = sub_426a24
    return sub_426610(arg1)
}

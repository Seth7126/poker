// ============================================================
// 函数名称: sub_426a2c
// 虚拟地址: 0x426a2c
// WARP GUID: 613db08f-9159-5c8f-8b36-c9eb53bdebad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetClipboardData
// [内部子函数调用]: sub_42663c, sub_4265f4, sub_426610
// [被调用的父级函数]: sub_426ab0
// ============================================================

int32_t __convention("regparm")sub_426a2c(BOOL arg1, int32_t* arg2)
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
    (*(*arg2 + 0x5c))(&hMem, ExceptionList, var_20, var_1c)
    int16_t var_e
    HANDLE hMem_1
    SetClipboardData(zx.d(var_e), hMem_1)
    
    if (hMem != 0)
        SetClipboardData(9, hMem)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_426aa8
    return sub_426610(arg1)
}

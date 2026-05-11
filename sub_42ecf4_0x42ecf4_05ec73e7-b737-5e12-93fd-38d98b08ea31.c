// ============================================================
// 函数名称: sub_42ecf4
// 虚拟地址: 0x42ecf4
// WARP GUID: 05ec73e7-b737-5e12-93fd-38d98b08ea31
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DestroyWindow
// [内部子函数调用]: sub_40c7bc
// [被调用的父级函数]: sub_42ecf0, sub_444830
// ============================================================

void* __convention("regparm")sub_42ecf4(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    *(arg1 + 0x44) |= 0x200
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (DestroyWindow(*(arg1 + 0x14c)) == 0)
        sub_40c7bc()
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* (__stdcall* var_c_1)(void* arg1 @ ebp, int32_t arg2) = sub_42ed48
    *(arg1 + 0x44) &= 0xfdff
    return arg1
}

// ============================================================
// 函数名称: sub_49db7b
// 虚拟地址: 0x49db7b
// WARP GUID: c00f4785-b9d8-5c19-bfed-b9f4c5a3cf6e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTempPathA
// [内部子函数调用]: sub_49d840, sub_404078, sub_4043ac, sub_40423c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_49db7b(char* arg1, int16_t arg2, void* arg3 @ ebp)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx += 1
    *arg1 += arg1.b
    *(arg3 + 0x63) += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_4 = 0
    int32_t* var_8 = entry_ebx
    void* var_c = arg3
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4043ac(arg1, 0x104)
    uint8_t* lpBuffer = sub_40423c(*arg1)
    sub_4043ac(arg1, GetTempPathA(sub_404078(*arg1), lpBuffer))
    sub_49d840(*arg1, arg3 - 4)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1, int32_t arg2) = sub_49dbea
    sub_403df8(arg3 - 4)
    return arg3 - 4
}

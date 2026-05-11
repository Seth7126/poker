// ============================================================
// 函数名称: sub_49db84
// 虚拟地址: 0x49db84
// WARP GUID: 2c6292de-cbcb-59b9-ac89-e1e106fd8ca9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTempPathA
// [内部子函数调用]: sub_49d840, sub_404078, sub_4043ac, sub_40423c, sub_403df8
// [被调用的父级函数]: sub_49ebd4
// ============================================================

int32_t* __convention("regparm")sub_49db84(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4043ac(arg1, 0x104)
    uint8_t* lpBuffer = sub_40423c(*arg1)
    sub_4043ac(arg1, GetTempPathA(sub_404078(*arg1), lpBuffer))
    sub_49d840(*arg1, &var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_49dbea
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}

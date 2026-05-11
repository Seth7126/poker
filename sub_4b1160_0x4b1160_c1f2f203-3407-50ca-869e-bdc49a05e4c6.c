// ============================================================
// 函数名称: sub_4b1160
// 虚拟地址: 0x4b1160
// WARP GUID: c1f2f203-3407-50ca-869e-bdc49a05e4c6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408b34, sub_403e90, sub_408ebc, sub_403e1c, sub_49df54
// [被调用的父级函数]: sub_4b19b0, sub_4b008c, sub_4b0427, sub_4b17c4
// ============================================================

int32_t __convention("regparm")sub_4b1160(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    char* var_14 = nullptr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403e90(&var_8, *(arg1 + 0x70))
    int32_t ecx
    ecx.b = 1
    sub_49df54(ecx, 0x4b120c, &var_8, &var_c, 1)
    sub_408b34(var_8, &var_10)
    sub_403e90(&var_8, var_10)
    *(arg1 + 0x6c) = sub_408ebc(sub_49df54(0, 0x4b120c, &var_8, &var_14, 1), 0xffffffff)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_4b11fa
    return sub_403e1c(&var_14, 4)
}

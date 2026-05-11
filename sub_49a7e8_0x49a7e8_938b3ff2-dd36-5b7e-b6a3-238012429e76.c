// ============================================================
// 函数名称: sub_49a7e8
// 虚拟地址: 0x49a7e8
// WARP GUID: 938b3ff2-dd36-5b7e-b6a3-238012429e76
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetProcAddress
// [内部子函数调用]: sub_403828, sub_499960, sub_405ae8, sub_403e1c, sub_409ae0, sub_403010
// [被调用的父级函数]: sub_499a58
// ============================================================

int32_t __convention("regparm")sub_49a7e8(int32_t arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool c = unimplemented  {imul eax, eax, 0x3}
    
    if (c)
        sub_403010()
        noreturn
    
    if (data_52f600 != 0)
        *(&data_52f608)[arg1 * 3] = GetProcAddress(data_52f600, (&data_52f60c)[arg1 * 3])
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3) = sub_49a899
        return sub_403e1c(&var_c, 2)
    
    sub_405ae8(data_5303e8, &var_c)
    char* eax_2 = var_c
    int32_t var_14 = (&data_52f60c)[arg1 * 3]
    char var_10 = 6
    sub_409ae0(0, &var_14, eax_2, &var_8)
    int32_t edx_3
    edx_3.b = 1
    sub_499960(sub_4998ec+0x48, edx_3, var_8, 0x276d)
    sub_403828()
    noreturn
}

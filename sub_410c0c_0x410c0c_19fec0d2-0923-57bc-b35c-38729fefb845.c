// ============================================================
// 函数名称: sub_410c0c
// 虚拟地址: 0x410c0c
// WARP GUID: 19fec0d2-0923-57bc-b35c-38729fefb845
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_404138, sub_40401c, sub_40301c, sub_403df8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_410c0c(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10c = ebx
    int32_t esi
    int32_t var_110 = esi
    int32_t edi
    int32_t var_114 = edi
    int32_t var_8 = 0
    int32_t* var_118 = &var_4
    int32_t (* var_11c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char var_108[0x100]
    sub_40401c(sub_40301c(*arg1, &var_108), &var_108)
    ebx.w = 0xffff
    
    if (sub_4032ac(arg1) != 0)
        ebx.w = 0xffff
        ebx.w = 0xfffe
        sub_4032ac(sub_4032ac(arg1), &var_8)
        
        if (var_8 != 0)
            int32_t var_124_1 = var_8
            void* const var_128_1 = &data_410cb8
            int32_t var_12c_1 = *arg2
            sub_404138(arg2, 3)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_118_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_410ca8
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}

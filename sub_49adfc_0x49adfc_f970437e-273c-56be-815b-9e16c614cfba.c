// ============================================================
// 函数名称: sub_49adfc
// 虚拟地址: 0x49adfc
// WARP GUID: f970437e-273c-56be-815b-9e16c614cfba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_40b4b0, sub_403df8
// [被调用的父级函数]: sub_4a39d4, sub_4a3789, sub_49aac0
// ============================================================

char** __convention("regparm")sub_49adfc(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((*(*arg1 + 0x60))(arg3, ExceptionList, var_14, var_10) != 0xffffffff)
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = sub_49ae62
        char** result = &var_8
        sub_403df8(result)
        return result
    
    sub_405ae8(data_52ff14, &var_8)
    int32_t edx_2
    edx_2.b = 1
    sub_40b4b0(sub_498fba+0x452, edx_2, var_8)
    sub_403828()
    noreturn
}

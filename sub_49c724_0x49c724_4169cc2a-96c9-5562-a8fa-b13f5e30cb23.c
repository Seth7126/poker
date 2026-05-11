// ============================================================
// 函数名称: sub_49c724
// 虚拟地址: 0x49c724
// WARP GUID: 4169cc2a-96c9-5562-a8fa-b13f5e30cb23
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_403df8, sub_40b4b0, sub_403010
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_49c724(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 4) s>= 0x40)
        sub_405ae8(data_52fff4, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_49aac0+0x26c, edx_1, var_8)
        sub_403828()
        noreturn
    
    *(arg1 + (*(arg1 + 4) << 2) + 8) = arg2
    int32_t temp0 = *(arg1 + 4)
    *(arg1 + 4) += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_49c78d
    char** result = &var_8
    sub_403df8(result)
    return result
}

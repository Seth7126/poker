// ============================================================
// 函数名称: sub_40b774
// 虚拟地址: 0x40b774
// WARP GUID: 7c41824c-a82e-5346-9832-27350ec8a049
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_405ae8, sub_403e90, sub_40b4ec, sub_403df8
// [被调用的父级函数]: sub_40b830, sub_40b714
// ============================================================

int32_t* __convention("regparm")sub_40b774(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    char* var_24 = nullptr
    int32_t var_8 = 0
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == 0)
        sub_405ae8(data_530704, &var_8)
    else
        sub_403e90(&var_8, arg1)
    
    int32_t var_20 = var_8
    char var_1c = 0xb
    int32_t edx
    int32_t var_18 = edx
    char var_14 = 0xb
    int32_t ecx
    int32_t var_10 = ecx
    char var_c = 0
    int32_t* var_40 = &var_20
    sub_405ae8(data_530874, &var_24)
    int32_t edx_4
    edx_4.b = 1
    char** eax_4
    void* ebp_1
    eax_4, ebp_1 = sub_40b4ec(sub_408334+0x26c, edx_4, var_24, 2)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_40b817
    sub_403df8(ebp_1 - 0x20)
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}

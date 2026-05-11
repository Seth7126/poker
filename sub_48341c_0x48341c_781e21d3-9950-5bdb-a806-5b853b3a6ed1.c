// ============================================================
// 函数名称: sub_48341c
// 虚拟地址: 0x48341c
// WARP GUID: 781e21d3-9950-5bdb-a806-5b853b3a6ed1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c, sub_483128
// [被调用的父级函数]: sub_47d208, sub_4dd1e0, sub_48340e, sub_4dd1d7
// ============================================================

void** __convention("regparm")sub_48341c(void* arg1, char arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    sub_40422c(arg3)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void** result
    void* ebp_1
    int32_t var_24
    
    if (arg2 == 0)
        int32_t var_20 = 0xdc
        var_24 = 0x19a
        void** result_1
        result_1, ebp_1 = sub_483128(arg1, 0x12c, 0x50, 1f, 0, 0, 1, arg3, 1)
        result = result_1
    else if (arg2 != 1)
        int32_t var_20_2 = 0x280
        var_24 = 0x1f4
        void** result_3
        result_3, ebp_1 = sub_483128(arg1, 0x50, 0x32, 1f, 0, 0, 1, arg3, 1)
        result = result_3
    else
        int32_t var_20_1 = 0x280
        var_24 = 0x1f4
        void** result_2
        result_2, ebp_1 = sub_483128(arg1, 0x50, 0x32, 1f, 0, 0, 1, arg3, 1)
        result = result_2
    fsbase->NtTib.ExceptionList = 0x3f800000
    sub_403df8(ebp_1 - 4)
    return result
}

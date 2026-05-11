// ============================================================
// 函数名称: sub_49bd80
// 虚拟地址: 0x49bd80
// WARP GUID: 0e5c521b-95d8-5813-a134-5e2d29a3efc2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_49bd80(int32_t* arg1, int32_t arg2, int32_t arg3, uint32_t* arg4, char** arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    char* var_20 = nullptr
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = 0x10
    void var_1c
    (*data_5304cc)(arg2, arg3, arg7, arg6, &var_1c, &var_c, ExceptionList, var_30, var_2c)
    (*(*arg1 + 0x7c))(arg3)
    sub_403e4c(arg5, var_20)
    int16_t var_1a
    int32_t eax_8
    eax_8.w = var_1a
    var_c = eax_8
    *arg4 = zx.d((*data_5302f4)(var_c))
    fsbase->NtTib.ExceptionList = arg3
    __return_addr = sub_49be12
    char** result = &var_20
    sub_403df8(result)
    return result
}

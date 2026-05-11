// ============================================================
// 函数名称: sub_4af5b0
// 虚拟地址: 0x4af5b0
// WARP GUID: 09cc8a60-ea2d-5d04-b37a-a4ae0bdcf5d3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4af608
// ============================================================

void** __convention("regparm")sub_4af5b0(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    var_8 = arg2
    sub_40422c(var_8)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    (*(*arg1 + 0xa8))(arg3, 0, ExceptionList, var_18, var_14)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4af602
    void** result = &var_8
    sub_403df8(result)
    return result
}

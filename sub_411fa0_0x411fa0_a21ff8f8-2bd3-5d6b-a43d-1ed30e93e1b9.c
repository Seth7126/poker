// ============================================================
// 函数名称: sub_411fa0
// 虚拟地址: 0x411fa0
// WARP GUID: a21ff8f8-2bd3-5d6b-a43d-1ed30e93e1b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_412930, sub_404078
// [被调用的父级函数]: 无
// ============================================================

void** __convention("regparm")sub_411fa0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 0x1c))(ExceptionList, var_18, var_14)
    int32_t eax_2 = sub_404078(var_8)
    sub_412930(arg2, var_8, eax_2)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_411ff4
    void** result = &var_8
    sub_403df8(result)
    return result
}

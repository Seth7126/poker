// ============================================================
// 函数名称: sub_4a0a84
// 虚拟地址: 0x4a0a84
// WARP GUID: 56f43a93-2dd4-5f57-b1dc-9f746069919b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_40422c
// [被调用的父级函数]: sub_4b0b67, sub_4b0914
// ============================================================

void** __convention("regparm")sub_4a0a84(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    var_8 = arg1
    sub_40422c(var_8)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((*(*data_52fbf4 + 0x50))(ExceptionList, var_14, var_10) != 0xffffffff)
        (*(*data_52fbf4 + 0x50))()
        *((*(*data_52fbf4 + 0x18))() + 4)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a0aef
    void** result = &var_8
    sub_403df8(result)
    return result
}

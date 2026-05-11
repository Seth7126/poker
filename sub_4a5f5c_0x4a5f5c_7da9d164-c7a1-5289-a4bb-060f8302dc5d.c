// ============================================================
// 函数名称: sub_4a5f5c
// 虚拟地址: 0x4a5f5c
// WARP GUID: 7da9d164-c7a1-5289-a4bb-060f8302dc5d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_403df8, sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4a5f5c(void* arg1, char** arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((*(**(arg1 + 0x10) + 0x14))(ExceptionList, var_18, var_14) s<= 0)
        sub_403e4c(arg2, *(arg1 + 0x14))
    else
        (*(**(arg1 + 0x10) + 0xc))(&data_4a5fdc, *(arg1 + 0x14))
        int32_t var_c_2 = var_8
        sub_404138(arg2, 3)
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a5fce
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}

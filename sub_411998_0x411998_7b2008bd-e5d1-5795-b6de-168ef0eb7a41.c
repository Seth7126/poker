// ============================================================
// 函数名称: sub_411998
// 虚拟地址: 0x411998
// WARP GUID: 7b2008bd-e5d1-5795-b6de-168ef0eb7a41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ee0, sub_402980, sub_403e1c, sub_404078
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_411998(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    int32_t edi
    int32_t var_28 = edi
    void* var_1c = nullptr
    void* var_18 = nullptr
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_4 = (*(*arg1 + 0x14))(ExceptionList, var_30, var_2c)
    int32_t ebx_1 = 0
    
    if (i_4 - 1 s>= 0)
        int32_t i_2 = i_4
        int32_t var_10_1 = 0
        int32_t i
        
        do
            (*(*arg1 + 0xc))(arg1)
            ebx_1 += sub_404078(var_1c) + 2
            var_10_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    sub_403ee0(arg2, 0, ebx_1)
    char* ebx_3 = *arg2
    
    if (i_4 - 1 s>= 0)
        int32_t i_3 = i_4
        int32_t var_10_2 = 0
        int32_t i_1
        
        do
            (*(*arg1 + 0xc))(arg1)
            int32_t eax_8 = sub_404078(var_18)
            
            if (eax_8 != 0)
                sub_402980(var_18, ebx_3, eax_8)
                ebx_3 = &ebx_3[eax_8]
            
            *ebx_3 = 0xd
            ebx_3[1] = 0xa
            ebx_3 = &ebx_3[2]
            var_10_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_411a76
    return sub_403e1c(&var_1c, 2)
}

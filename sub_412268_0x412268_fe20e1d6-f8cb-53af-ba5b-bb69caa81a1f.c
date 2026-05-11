// ============================================================
// 函数名称: sub_412268
// 虚拟地址: 0x412268
// WARP GUID: fe20e1d6-f8cb-53af-ba5b-bb69caa81a1f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415824, sub_41581c, sub_403df8, sub_41582c
// [被调用的父级函数]: sub_411668
// ============================================================

void** __convention("regparm")sub_412268(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    void* var_10 = nullptr
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41581c()
    int32_t ebx_2 = (*(*arg1 + 0x14))(ExceptionList, var_24, var_20) - 1
    
    if (ebx_2 s>= 0)
        int32_t i_1 = ebx_2 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            int32_t ecx_1 = (*(*arg1 + 0xc))(arg1)
            sub_41582c(arg2, var_10, ecx_1)
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_415824()
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4122e5
    void** result = &var_10
    sub_403df8(result)
    return result
}

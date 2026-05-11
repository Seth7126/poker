// ============================================================
// 函数名称: sub_4b4d28
// 虚拟地址: 0x4b4d28
// WARP GUID: bbcd0195-b2f5-5046-b87e-af728a62fea0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_4b4e2c, sub_4241e4, sub_425af0, sub_42b7a8, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b4d28(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
    void* var_c = nullptr
    int32_t ebx
    int32_t var_10 = ebx
    int32_t* ebx_1 = arg1
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx_1[0x9a] = sub_425af0(ebx_1)
    
    if (ebx_1[0x91] != 0)
        sub_4b4e2c(ebx_1, &var_8)
        
        if (sub_404078(var_8) != 0)
            sub_4b4e2c(ebx_1, &var_c)
            ebx_1, ebp_1 = sub_42b7a8(ebx_1[0x91], var_c)
        else
            ebx_1, ebp_1 = sub_42b7a8(ebx_1[0x91], ebx_1[0x8f])
        
        sub_4241e4(ebx_1[0x91])
    
    if (*(ebx_1 + 0x262) != 0)
        ebx_1[0x99]
        ebx_1[0x98]()
        esp = &var_8
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4b4ddc
    return sub_403e1c(&ebp_1[-2], 2)
}

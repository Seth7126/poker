// ============================================================
// 函数名称: sub_48b3d8
// 虚拟地址: 0x48b3d8
// WARP GUID: bde6f8ae-78c9-5c7c-ad23-6ea637d8ad45
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_48ad24, sub_403010
// [被调用的父级函数]: sub_480534, sub_488509, sub_484e24
// ============================================================

int32_t __fastcallsub_48b3d8(int32_t arg1, int32_t arg2, void* arg3 @ eax, float arg4, char arg5, char arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t eax_1 = *(arg3 + 0x8b4)
    
    if (eax_1 s< 0)
        sub_403008()
        noreturn
    
    (*data_53036c)(0xde1, eax_1)
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 0x3f800000)
    (*data_530034)(0xbe2)
    (*data_530334)(0x302, 0x303)
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, fconvert.s(data_48b5b4 * fconvert.t(arg4)))
    (*data_53006c)(0xb50)
    int32_t __saved_ebp
    
    if (arg5 != 0)
        if (add_overflow(arg8, 3))
            sub_403010()
            noreturn
        
        sub_48ad24(arg8 + 3, arg1, 0.0500000007f, 0.550000012f, 3, &__saved_ebp)
        
        if (add_overflow(arg8, 3))
            sub_403010()
            noreturn
        
        int32_t edx_2 = arg7 + arg1
        
        if (add_overflow(arg7, arg1))
            sub_403010()
            noreturn
        
        if (add_overflow(edx_2, 0xfffffffd))
            sub_403010()
            noreturn
        
        sub_48ad24(arg8 + 3, edx_2 - 3, 0.550000012f, 0.550000012f, 3, &__saved_ebp)
        
        if (add_overflow(arg7, 2))
            sub_403010()
            noreturn
        
        sub_48ad24(3, arg1, 0.550000012f, 0.0500000007f, arg7 + 2, &__saved_ebp)
        
        if (add_overflow(arg7, 2))
            sub_403010()
            noreturn
        
        if (add_overflow(arg8, arg2))
            sub_403010()
            noreturn
        
        if (add_overflow(arg8 + arg2, 0xfffffffd))
            sub_403010()
            noreturn
        
        sub_48ad24(3, arg1, 0.0500000007f, 0.0500000007f, arg7 + 2, &__saved_ebp)
    
    if (arg6 != 0)
        if (add_overflow(arg8, 0xfffffffa))
            sub_403010()
            noreturn
        
        if (add_overflow(arg1, 3))
            sub_403010()
            noreturn
        
        if (add_overflow(arg2, 3))
            sub_403010()
            noreturn
        
        sub_48ad24(arg8 - 6, arg1 + 3, -1f, -1f, 0x1a, &__saved_ebp)
    
    if (*(arg3 + 0xcf4) == 0)
        (*data_530034)(0xb50)
    
    return (*data_53006c)(0xbe2)
}

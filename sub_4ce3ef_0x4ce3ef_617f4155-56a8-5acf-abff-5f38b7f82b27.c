// ============================================================
// 函数名称: sub_4ce3ef
// 虚拟地址: 0x4ce3ef
// WARP GUID: 617f4155-56a8-5acf-abff-5f38b7f82b27
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4d5b64, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4ce3ef(char* arg1, int16_t arg2, void* arg3 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    *(*(arg3 + 8) - 1) = 5
    *(*(arg3 + 8) - 8) = 0
    
    if (&arg1[0xfffffff5] u< 5)
        *(*(arg3 + 8) - 8) = 1
        
        if (not(add_overflow(arg1, 0xfffffff6)))
            char eax_8 = sub_4d5b64(arg1 - 0xa)
            *(*(arg3 + 8) - 1) = eax_8
            return eax_8
        
        sub_403010()
        noreturn
    
    char eax_11 = (&arg1[0xffffffeb]).b - 5
    
    if (&arg1[0xffffffeb] u< 5)
        *(*(arg3 + 8) - 8) = 9
        
        if (add_overflow(arg1, 0xffffffec))
            sub_403010()
            noreturn
        
        eax_11 = sub_4d5b64(arg1 - 0x14)
        *(*(arg3 + 8) - 1) = eax_11
    
    return eax_11
}

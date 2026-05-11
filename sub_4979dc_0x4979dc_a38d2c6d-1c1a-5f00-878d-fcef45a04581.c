// ============================================================
// 函数名称: sub_4979dc
// 虚拟地址: 0x4979dc
// WARP GUID: a38d2c6d-1c1a-5f00-878d-fcef45a04581
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49611c, sub_4953dc, sub_497ac9, sub_497a44, sub_496288, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4979dc(char* arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp, char* arg5 @ esi, int80_t arg6 @ st0)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b &= 0x7a
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg5
    *arg5 += arg2:1.b
    bool p = unimplemented  {add byte [esi], dh}
    
    if (p)
        return sub_497a44(arg3 - 1) __tailcall
    
    *(arg3 - 1 + arg1) += arg2.b
    *arg1 += arg1.b
    arg6 f- fconvert.t(*arg1)
    void* eax_1
    eax_1:1.b = (&arg1[1]):1.b + arg2:1.b
    eax_1.b ^= *eax_1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax_1 + 1).b
    *(eax_1 + 2) += (arg3 - 1).b
    char* eax_4 = (eax_1 + 2) ^ *(eax_1 + 2)
    eax_4.b ^= *eax_4
    TEB* fsbase
    char temp1 = *(fsbase + eax_4) ^ eax_4.b
    *(fsbase + eax_4) = temp1
    int32_t* eax_6
    
    if (temp1 s< 0)
        char* var_4_1 = arg5
        arg4[-2] = arg3 - 1
        arg4[-1] = eax_4
        sub_4953dc(arg4[2])
        arg4[2]
        int32_t* eax_10 = sub_496288()
        arg4[-4] = eax_10
        int32_t* edx_1 = arg4[-2]
        
        if (add_overflow(eax_10, *edx_1))
            sub_403010()
            noreturn
        
        if (eax_10 + *edx_1 s> 0x7c)
            int32_t* eax_12 = arg4[-2]
            *eax_12
            
            if (not(add_overflow(0x7c, neg.d(*eax_12))))
                jump(sub_497a44+0x46)
            
            jump(sub_497a44+0x41)
        
        arg4 = sub_49611c(arg4[2], &arg4[-0x68], arg4[-4])
        eax_6 = arg4[-2]
    else
        void* eax_5
        eax_5.b = (&eax_4[1]).b * 2
        *eax_5 ^= eax_5.b
        int16_t cs
        uint32_t var_4 = zx.d(cs)
        *eax_5 += eax_5.b
        *eax_5 += eax_5.b
        *(arg3 - 1) += eax_5.b
        *eax_5 += eax_5.b
        *(eax_5 + arg2 + 0x1080040) += entry_ebx:1.b
        *eax_5 += eax_5.b
        eax_6 = eax_5 | 0x65735054
        
        if (eax_6 == 0)
            int32_t eflags
            __outsd(arg2.w, *arg5, arg5, eflags)
            
            if (eax_6 == 1)
                undefined
            
            jump(0x497a43)
    
    if (*eax_6 s> 0 && *arg4[-2] s> 0)
        jump(sub_497a44+0x6b)
    
    int32_t eax_16 = arg4[-4]
    
    if (eax_16 s<= 0)
        jump(sub_497ac9+0x29)
    
    return sub_497ac9(eax_16, arg4, __return_addr) __tailcall
}

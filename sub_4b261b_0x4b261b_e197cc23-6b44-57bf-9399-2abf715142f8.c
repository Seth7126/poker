// ============================================================
// 函数名称: sub_4b261b
// 虚拟地址: 0x4b261b
// WARP GUID: e197cc23-6b44-57bf-9399-2abf715142f8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4b234e, sub_4b247c, sub_4b23a6
// ============================================================

int32_t __convention("regparm")sub_4b261b(char* arg1, int32_t arg2, int32_t* arg3, uint16_t* arg4 @ esi, char* arg5 @ edi, int80_t arg6 @ st0)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    uint16_t* esi_1 = __outsd(arg2.w, *arg4, arg4, eflags)
    int32_t entry_ebx
    bool c
    bool z
    
    if (z || c)
        *(arg2 + (arg1 << 1)) = adc.b(*(arg2 + (arg1 << 1)), arg2:1.b, c)
        *0xb8ff0001 -= 0x4700ffff
        *arg3 += 1
        *0xb8ff0001 += 1
        *0xb8ff0001 += 1
        *0xb8ff0001 += 1
        *0xb8ff0001 = *0xb8ff0001
        *0x8090030 += 1
        __outsb(arg2.w, *esi_1, esi_1, eflags)
        
        if (entry_ebx - 1 s>= 0)
            jump(0x4b268f)
        
        jump("ress")
    
    if (not(z))
        arg1.b += entry_ebx:1.b
        *arg1 += arg1.b
        undefined
    
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg5 |= arg1:1.b
    *(arg1 * 2) += arg1.b
    *arg1 += arg1.b
    arg6 f- fconvert.t(*arg1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    *(entry_ebx - 1) += arg2:1.b
    *(entry_ebx - 1 + esi_1) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp1 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp1
    
    if (temp1 s< 0)
        jump(sub_4b2693+0x97)
    
    jump(sub_4b2693+0x67)
}

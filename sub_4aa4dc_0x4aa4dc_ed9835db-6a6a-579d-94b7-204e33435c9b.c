// ============================================================
// 函数名称: sub_4aa4dc
// 虚拟地址: 0x4aa4dc
// WARP GUID: ed9835db-6a6a-579d-94b7-204e33435c9b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4aa582
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa4dc(char* arg1, int16_t arg2, char arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b &= 0xa5
    *(arg1 * 2) += arg3
    char temp0 = *arg1
    *arg1 += arg1.b
    arg1.b = adc.b(arg1.b, 0xa2, temp0 + arg1.b u< temp0)
    arg1:1.b += (arg2 - 2):1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += (arg2 - 2):1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    
    if (temp1 s>= 0)
        void* eax_3
        eax_3.b = (&eax_2[1]).b * 2
        *eax_3 ^= eax_3.b
        int16_t ss
        uint32_t var_4 = zx.d(ss)
        char* var_8 = entry_ebx
        int32_t eflags
        __outsd(arg2 - 2, *arg5, arg5, eflags)
        *(fsbase + entry_ebx + 0x67)
        *(fsbase + entry_ebx + 0x67)
        bool c_1 = unimplemented  {imul ebp, dword [fs:esi+0x67], 0x4579654b}
        
        if (c_1)
            jump(sub_4aa582+0x29)
        
        jump(sub_4aa582-0x49)
    
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    *(arg4 + 0xc004a) = eax_2:1.b
    *eax_2 += eax_2.b
    void* eax_5
    eax_5.b = 0xa1 ^ *0xf4004aa1
    *entry_ebx += (arg2 - 2):1.b
    *(entry_ebx + arg5) += (eax_5 + 1).b
    *(eax_5 + 2) += arg3
    char* eax_8 = (eax_5 + 2) ^ *(eax_5 + 2)
    eax_8.b ^= *eax_8
    char temp2 = *(fsbase + eax_8) ^ eax_8.b
    *(fsbase + eax_8) = temp2
    
    if (temp2 s>= 0)
        int32_t* edi
        return sub_4aa582(eax_8, arg2 - 2, arg3, arg4, arg5, edi) __tailcall
    
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    *eax_8 += eax_8.b
    undefined
}

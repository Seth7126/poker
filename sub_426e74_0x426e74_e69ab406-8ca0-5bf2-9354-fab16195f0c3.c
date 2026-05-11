// ============================================================
// 函数名称: sub_426e74
// 虚拟地址: 0x426e74
// WARP GUID: e69ab406-8ca0-5bf2-9354-fab16195f0c3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_426e74(char* arg1, void* arg2, int32_t arg3, int32_t arg4 @ esi)
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
    int32_t eflags
    arg1.b = __in_al_immb(0x6e, eflags)
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b = __in_al_immb(0x6d, eflags)
    arg1:1.b += (arg2 + 2):1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += (arg2 + 2):1.b
    entry_ebx[arg4] += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    
    if (temp1 s< 0)
        if (temp1 u>= 0)
            int32_t ebp
            int32_t edi
            return sub_426ee9(eax_2, arg2 + 2, arg3, ebp, arg4, edi) __tailcall
        
        eax_2.b += arg3.b
        *(arg2 + 3) = __return_addr
        void arg_5
        *(arg4 + (&arg_5 << 2) - 0x701bffbe) += entry_ebx.b
        *(arg2 + 5) = *eax_2
        undefined
    
    void* eax_3
    eax_3.b = (&eax_2[1]).b * 2
    *eax_3 ^= eax_3.b
    int32_t var_4 = 0x9c004290
    *(eax_3 + ((arg2 + 3) << 2) - 0x6fe7ffbe) += (arg2 + 3):1.b
    *(arg4 + (arg3 << 2) - 0x6f3fffbe) += entry_ebx.b
    char temp2 = eax_3.b
    eax_3.b += arg3:1.b
    *(arg2 + 5) = 0x9c004290
    
    if (temp2 != neg.b(arg3:1.b) && arg3 != 1)
        jump(0x426e6a)
    
    jump(0x426eda)
}

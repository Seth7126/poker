// ============================================================
// 函数名称: sub_4361e4
// 虚拟地址: 0x4361e4
// WARP GUID: ad2a1cfd-4e57-5c35-ac63-bd7b40e9d750
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_436272, sub_4361f5
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4361e4(char* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi)
{
    // 第一条实际指令: arg1[0xd0004368] += arg2:1.b
    arg1[0xd0004368] += arg2:1.b
    int32_t entry_ebx
    char* edi
    
    if (entry_ebx == 0xfffffffe)
        if (entry_ebx == 0xfffffffe)
            jump(&data_436264)
        
        return sub_4361f5(arg1, arg2, arg3, arg4, arg5, edi, 0x54110043) __tailcall
    
    void* eax_1
    eax_1:1.b = (&arg1[1]):1.b + ((entry_ebx + 1).w + 1):1.b
    eax_1.b ^= *eax_1
    TEB* fsbase
    char temp1 = *(fsbase + eax_1) ^ eax_1.b
    *(fsbase + eax_1) = temp1
    
    if (temp1 s>= 0)
        return sub_436272(eax_1, arg2, arg3, arg4, arg5, edi, 0x54110043) __tailcall
    
    *(eax_1 + 0x4004369) += arg2:1.b
    *(eax_1 + 0x6c004166) += arg2:1.b
    void* ecx_3
    ecx_3.w = (arg3 + 2).w + 1
    *(arg5 + 0x41) += arg2:1.b
    *(eax_1 + 0x66) += arg2:1.b
    *(arg4 + 0xe0043) += ((entry_ebx + 1).w + 1).b
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    eax_1.b += *eax_1
    *eax_1 += eax_1.b
    *eax_1 += eax_1.b
    *(eax_1 + arg2 + 0x600040) += ((entry_ebx + 1).w + 1):1.b
    *eax_1 += eax_1.b
    eax_1.b += *eax_1
    int32_t eflags
    __out_dx_oeax(arg2.w, eax_1, eflags)
    *0x5400400c = eax_1
    undefined
}

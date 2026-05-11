// ============================================================
// 函数名称: sub_453478
// 虚拟地址: 0x453478
// WARP GUID: c0b69a96-0dfc-5e8e-9739-9a6c13dc7842
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4534cc
// [被调用的父级函数]: sub_4534e4
// ============================================================

void __convention("regparm")sub_453478(char* arg1, uint16_t arg2, char arg3, int32_t arg4 @ edi) __noreturn
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int16_t es
    esi, es = __les_gprz_memp(*(arg1 << 1))
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
    arg1:1.b += arg1.b
    arg1.b ^= 0x45
    *(arg1 * 2) += arg3
    *arg1 += arg1.b
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg4, arg2, eflags)
    *edi = temp0
    arg1:1.b += arg2:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    entry_ebx[esi] += (&arg1[1]).b
    arg1[2] += arg3 + 1
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    
    if (temp1 s< 0)
        trap(0xd)
    
    void* eax_3
    eax_3.b = (&eax_2[1]).b * 2
    *eax_3 ^= eax_3.b
    noreturn sub_4534cc(eax_3 + 0x45504a45) __tailcall
}

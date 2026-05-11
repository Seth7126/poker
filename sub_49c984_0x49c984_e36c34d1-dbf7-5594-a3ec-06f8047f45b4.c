// ============================================================
// 函数名称: sub_49c984
// 虚拟地址: 0x49c984
// WARP GUID: e36c34d1-dbf7-5594-a3ec-06f8047f45b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49c984(char* arg1, char* arg2, int32_t arg3, int32_t arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0)
{
    // 第一条实际指令: arg1.b = arg1.b
    arg1.b = arg1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*arg1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    arg1 = (eax + 2) ^ *(eax + 2)
    arg1.b ^= *arg1
    TEB* fsbase
    char temp0_1 = *(fsbase + arg1)
    *(fsbase + arg1) ^= arg1.b
    int32_t esp
    
    if ((temp0_1 ^ arg1.b) s< 0)
        *arg1 = adc.b(*arg1, arg1.b, false)
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x180040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x200040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x280040) += entry_ebx:1.b
        *arg1 += arg1.b
        int16_t es
        *0x2400400c = zx.d(es)
        esp = 0x2400400c
    else
        arg1.b = (&arg1[1]).b * 2
        *arg1
        *arg1 ^= arg1.b
        arg3 -= 1
        *arg5 += arg3.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg2 += arg3.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x40040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0xc0040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x140040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x1c0040) += entry_ebx:1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *(arg1 + arg2 + 0x240040) += entry_ebx:1.b
        *arg1 += arg1.b
        esp = 0x28004010
        *arg1 += arg1.b
        *arg5 += arg1.b
    
    *(esp - 4) = esp
    *(esp - 8) = arg4
    *(esp - 0xc) = arg2
    *(esp - 0x10) = arg1
    *(esp - 0x14) = arg3 - 2
    *(esp - 0x18) = arg2
    *(esp - 0x1c) = entry_ebx
    *(esp - 0x20) = esp - 0x1c
    *(esp - 0x24) = arg4
    *(esp - 0x28) = arg5
    *(esp - 0x2c) = arg6
    undefined
}

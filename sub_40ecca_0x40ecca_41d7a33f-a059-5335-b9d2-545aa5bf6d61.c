// ============================================================
// 函数名称: sub_40ecca
// 虚拟地址: 0x40ecca
// WARP GUID: 41d7a33f-a059-5335-b9d2-545aa5bf6d61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40ecca(void* arg1, char* arg2, int32_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi)
{
    // 第一条实际指令: arg1.b |= 0x41
    arg1.b |= 0x41
    char* entry_ebx
    char temp0 = *entry_ebx
    *entry_ebx += arg3.b
    *0xc004108 = 0xc00410c
    *0xc004104 = arg1
    
    if (temp0 + arg3.b u>= temp0)
        jump(0x40ecd8)
    
    *(arg1 + 0x30) += entry_ebx:1.b
    void* eax
    eax.b = (arg1 + 1).b + entry_ebx:1.b
    eax.b |= 0x41
    *eax += eax.b
    eax.b |= 0x41
    *eax += arg3.b
    eax.b |= 0x41
    entry_ebx[arg3] += entry_ebx.b
    *(arg4 + arg3 + 1 + 0x41) += eax:1.b
    *(arg5 + arg3 + 1 + 0x41) += arg2:1.b
    *(arg5 + arg3 + 1 + 0x41) += (arg3 + 1):1.b
    eax.b *= 2
    eax.b |= 0x41
    *arg2 += eax.b
    entry_ebx:1.b *= 2
    undefined
}

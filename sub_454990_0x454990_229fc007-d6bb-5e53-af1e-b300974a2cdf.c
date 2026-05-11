// ============================================================
// 函数名称: sub_454990
// 虚拟地址: 0x454990
// WARP GUID: 229fc007-d6bb-5e53-af1e-b300974a2cdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_454990(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 == 0xfe)
    if (arg2 == 0xfe)
        void* eax = *(arg1 + 0x1aa)
        *(eax + 0xc) = arg3
        return eax
    
    if (arg2 s>= 0xe0 && arg2 s<= 0xef)
        int32_t eax_1 = *(arg1 + 0x1aa)
        *(eax_1 + (arg2 << 2) - 0x370) = arg3
        return eax_1
    
    void* ecx = *arg1
    *(ecx + 0x14) = 0x43
    *(ecx + 0x18) = arg2
    return (**arg1)()
}

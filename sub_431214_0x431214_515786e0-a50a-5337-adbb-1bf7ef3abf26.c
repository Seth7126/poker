// ============================================================
// 函数名称: sub_431214
// 虚拟地址: 0x431214
// WARP GUID: 515786e0-a50a-5337-adbb-1bf7ef3abf26
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_431214(void* arg1, void* arg2)
{
    // 第一条实际指令: if ((*(arg1 + 0x20) & 0x10) != 0)
    if ((*(arg1 + 0x20) & 0x10) != 0)
        return 
    
    int32_t edi
    edi.w = *(arg2 + 4)
    uint32_t eax = zx.d(edi.w)
    
    if (eax s> 0x1b)
        if (eax - 0x25 u< 4 || eax == 0x2b)
            sub_42c754(arg1, 0)
            *(arg2 + 0xc) = 0
    else if (eax == 0x1b || eax == 3 || eax == 9 || eax == 0xd)
        sub_42c754(arg1, 0)
        *(arg2 + 0xc) = 0
}

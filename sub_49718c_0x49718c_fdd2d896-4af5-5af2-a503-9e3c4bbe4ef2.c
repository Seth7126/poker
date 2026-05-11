// ============================================================
// 函数名称: sub_49718c
// 虚拟地址: 0x49718c
// WARP GUID: fdd2d896-4af5-5af2-a503-9e3c4bbe4ef2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_497018
// ============================================================

int32_t __convention("regparm")sub_49718c(void* arg1)
{
    // 第一条实际指令: sub_4030d0(*(arg1 + 0x30))
    sub_4030d0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    
    if (*(arg1 + 0xc) == 0 && *(arg1 + 0x40) != 0)
        return 0
    
    int32_t eax_1
    eax_1.b = 1
    return 1
}

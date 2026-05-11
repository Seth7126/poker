// ============================================================
// 函数名称: sub_412be8
// 虚拟地址: 0x412be8
// WARP GUID: 5cfd4dba-d079-54af-8876-400a99974389
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4a8cbc
// ============================================================

int32_t __convention("regparm")sub_412be8(void* arg1, int32_t arg2, int16_t arg3)
{
    // 第一条实际指令: if (arg3 u< 1)
    if (arg3 u< 1)
        *(arg1 + 0xc) = arg2
    else if (arg3 == 1)
        *(arg1 + 0xc) += arg2
    else if (arg3 == 2)
        *(arg1 + 0xc) = arg2 + *(arg1 + 8)
    
    return *(arg1 + 0xc)
}

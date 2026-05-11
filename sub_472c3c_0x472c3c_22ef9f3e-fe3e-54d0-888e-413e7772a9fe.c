// ============================================================
// 函数名称: sub_472c3c
// 虚拟地址: 0x472c3c
// WARP GUID: 22ef9f3e-fe3e-54d0-888e-413e7772a9fe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a1c0
// [被调用的父级函数]: sub_472ccc, sub_473684
// ============================================================

int32_t __convention("regparm")sub_472c3c(void* arg1)
{
    // 第一条实际指令: if (*(*(arg1 + 0xa20) + 4) == 0)
    if (*(*(arg1 + 0xa20) + 4) == 0)
        sub_47a1c0(2, *(arg1 + 0x10d8), arg1, 1)
        sub_47a1c0(3, *(arg1 + 0x10d8), arg1, 1)
        return sub_47a1c0(4, *(arg1 + 0x10d8), arg1, 1)
    
    sub_47a1c0(2, *(arg1 + 0x10d8), arg1, 0)
    sub_47a1c0(3, *(arg1 + 0x10d8), arg1, 0)
    return sub_47a1c0(4, *(arg1 + 0x10d8), arg1, 0)
}

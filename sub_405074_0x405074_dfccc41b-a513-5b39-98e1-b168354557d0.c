// ============================================================
// 函数名称: sub_405074
// 虚拟地址: 0x405074
// WARP GUID: dfccc41b-a513-5b39-98e1-b168354557d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ebc, sub_404cec, sub_402980
// [被调用的父级函数]: sub_4148a8
// ============================================================

void __convention("regparm")sub_405074(int16_t* arg1, char* arg2)
{
    // 第一条实际指令: if (*arg1 u>= 8)
    if (*arg1 u>= 8)
        sub_404cec(arg1)
    
    if (arg2 != 0)
        if (*(arg2 - 8) s<= 0xffffffff)
            char* eax_1 = sub_403ebc(*(arg2 - 4))
            sub_402980(arg2, eax_1, *(eax_1 - 4))
            arg2 = eax_1
        else
            *(arg2 - 8) += 1
    
    *arg1 = 0x100
    *(arg1 + 8) = arg2
}

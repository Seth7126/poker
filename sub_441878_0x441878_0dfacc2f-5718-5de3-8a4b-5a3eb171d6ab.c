// ============================================================
// 函数名称: sub_441878
// 虚拟地址: 0x441878
// WARP GUID: 0dfacc2f-5718-5de3-8a4b-5a3eb171d6ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441dc4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_441878(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x34))
    if (arg2 == *(arg1 + 0x34))
        return 
    
    *(arg1 + 0x34) = arg2
    *(arg1 + 0x44) = 1
    sub_441dc4(*(arg1 + 4))
}

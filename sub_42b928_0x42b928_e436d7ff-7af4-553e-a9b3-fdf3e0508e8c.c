// ============================================================
// 函数名称: sub_42b928
// 虚拟地址: 0x42b928
// WARP GUID: e436d7ff-7af4-553e-a9b3-fdf3e0508e8c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_4258dc, sub_423e50, sub_4425d8
// ============================================================

void __convention("regparm")sub_42b928(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x4a))
    if (arg2 == *(arg1 + 0x4a))
        return 
    
    *(arg1 + 0x4a) = arg2
    
    if (*(arg1 + 0x24) != 0)
        sub_42c754(arg1, 0)
}

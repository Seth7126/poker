// ============================================================
// 函数名称: sub_42b89c
// 虚拟地址: 0x42b89c
// WARP GUID: 66acee52-d864-5213-adbe-e60533e56324
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754
// [被调用的父级函数]: sub_4425d8
// ============================================================

void __convention("regparm")sub_42b89c(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x49))
    if (arg2 == *(arg1 + 0x49))
        return 
    
    *(arg1 + 0x49) = arg2
    
    if (*(arg1 + 0x24) != 0)
        sub_42c754(arg1, 0)
}

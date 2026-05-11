// ============================================================
// 函数名称: sub_42d0bc
// 虚拟地址: 0x42d0bc
// WARP GUID: ae1601ae-4e8c-5862-aa83-4c324b144fbb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b864
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42d0bc(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x49) == 0)
    if (*(arg1 + 0x49) == 0)
        return 
    
    if (*(arg2 + 4) == 0)
        *(*(arg1 + 0x24) + 0x58)
        sub_42b864(arg1)
    else
        *(arg2 + 8)
        sub_42b864(arg1)
    
    *(arg1 + 0x49) = 1
}

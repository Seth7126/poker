// ============================================================
// 函数名称: sub_405bb8
// 虚拟地址: 0x405bb8
// WARP GUID: 706a8a6d-5da7-53c0-aab7-7fa6822d4e00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4027e0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_405bb8(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 4) == 0)
    if (*(arg1 + 4) == 0)
        return 
    
    arg1.b = 2
    sub_4027e0(arg1)
    noreturn
}

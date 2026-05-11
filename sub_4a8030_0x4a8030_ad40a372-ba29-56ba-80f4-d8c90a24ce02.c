// ============================================================
// 函数名称: sub_4a8030
// 虚拟地址: 0x4a8030
// WARP GUID: ad40a372-ba29-56ba-80f4-d8c90a24ce02
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415df8
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a8030(void* arg1, void* arg2)
{
    // 第一条实际指令: *(arg1 + 0x70) = arg2
    *(arg1 + 0x70) = arg2
    
    if (arg2 != 0)
        sub_415df8(arg2, arg1)
}

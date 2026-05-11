// ============================================================
// 函数名称: sub_41e2e0
// 虚拟地址: 0x41e2e0
// WARP GUID: a88155fd-4e61-5e20-86c7-a9ce2d53b62c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41ceb4
// [被调用的父级函数]: sub_41ec48, sub_41ef18, sub_41e300, sub_41e3e0, sub_41db48, sub_41dd64, sub_41ed0c, sub_41ebd8, sub_41dc74, sub_41e4f8, sub_41e08c
// ============================================================

void __convention("regparm")sub_41e2e0(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x24)
    int32_t edx = *(arg1 + 0x24)
    
    if (edx != 0)
        sub_41ceb4(edx)
}

// ============================================================
// 函数名称: sub_441068
// 虚拟地址: 0x441068
// WARP GUID: 86dbd6a2-e2c4-5ac0-b8c4-f4f8852a6037
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441220, sub_42bdc0, sub_441770
// [被调用的父级函数]: sub_4422f4, sub_441c2c
// ============================================================

void __convention("regparm")sub_441068(int32_t arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x18) != 0 || sub_441220(arg1).b == 0)
    if (*(arg1 + 0x18) != 0 || sub_441220(arg1).b == 0)
        return 
    
    if (sub_42bdc0(*(arg1 + 4)) != 0)
        sub_441770(arg1, *(arg1 + 0x10))
    else
        sub_441770(arg1, 0)
}

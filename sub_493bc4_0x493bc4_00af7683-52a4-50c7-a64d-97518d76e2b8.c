// ============================================================
// 函数名称: sub_493bc4
// 虚拟地址: 0x493bc4
// WARP GUID: 00af7683-52a4-50c7-a64d-97518d76e2b8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4970c0
// ============================================================

void __convention("regparm")sub_493bc4(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *arg2
    int32_t ecx = *arg2
    
    if (ecx s< 0x40)
        arg2[ecx + 1] = arg1
        *arg2 += 1
}

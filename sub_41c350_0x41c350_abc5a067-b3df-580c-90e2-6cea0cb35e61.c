// ============================================================
// 函数名称: sub_41c350
// 虚拟地址: 0x41c350
// WARP GUID: abc5a067-b3df-580c-90e2-6cea0cb35e61
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41c438, sub_4128c0, sub_41c894, sub_41c508, sub_4128a4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41c350(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    
    if (sub_41c894(ecx, arg2) == 0)
        sub_41c508(arg1, arg2, sub_4128c0(arg2) - sub_4128a4(arg2))
    else
        sub_41c438(arg1, arg2)
    
    int32_t eax_9
    eax_9.b = (*(*arg1 + 0x24))() != 0
    *(arg1 + 0x1a) = eax_9.b
    return (*(*arg1 + 0x10))()
}

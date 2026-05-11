// ============================================================
// 函数名称: sub_466f7c
// 虚拟地址: 0x466f7c
// WARP GUID: 4bc4fc5c-e8ce-545f-adf6-885cb9c8f8fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_467280, sub_467190
// ============================================================

int32_t __convention("regparm")sub_466f7c(int32_t arg1) __pure
{
    // 第一条实际指令: if (arg1 == 1)
    if (arg1 == 1)
        arg1.b = 1
        return arg1
    
    if (arg1 == 2)
        arg1.b = 2
    else if (arg1 != 4)
        if (arg1 != 3)
            return 0
        
        arg1.b = 4
    else
        arg1.b = 3
    
    return arg1
}

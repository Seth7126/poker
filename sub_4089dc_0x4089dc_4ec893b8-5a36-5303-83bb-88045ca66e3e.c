// ============================================================
// 函数名称: sub_4089dc
// 虚拟地址: 0x4089dc
// WARP GUID: 4ec893b8-5a36-5303-83bb-88045ca66e3e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_408988
// [被调用的父级函数]: sub_410030, sub_416194, sub_413690, sub_4134b8, sub_4131b4, sub_4136c4, sub_41622c, sub_40fc2c
// ============================================================

void* __convention("regparm")sub_4089dc(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 == arg2)
    if (arg1 == arg2)
        arg1.b = 1
    else if (arg1 != 0)
        if (arg2 == 0 || *(arg1 - 4) != *(arg2 - 4))
            return 0
        
        if (sub_408988(arg1, arg2) != 0)
            return 0
        
        arg1.b = 1
    
    return arg1
}

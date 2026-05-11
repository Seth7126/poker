// ============================================================
// 函数名称: sub_4971dc
// 虚拟地址: 0x4971dc
// WARP GUID: 8248510c-61de-5d68-910c-fb57a4491e43
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4973e0, sub_4973d8
// ============================================================

void __convention("regparm")sub_4971dc(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[9].b)
    if (arg2 == arg1[9].b)
        return 
    
    if ((arg1[8].b & 0x10) != 0 || (arg1[8].b & 1) != 0)
        arg1[9].b = arg2
    
    if ((arg1[8].b & 1) == 0)
        (*(*arg1 + 0x38))()
}

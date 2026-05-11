// ============================================================
// 函数名称: sub_41d044
// 虚拟地址: 0x41d044
// WARP GUID: bc113692-33b2-58b8-9b98-8c4b8fef2c7a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_453660, sub_41db84, sub_41db48, sub_41f5c0, sub_45455c, sub_41c0cc, sub_41c3a4, sub_41c8f4, sub_45361c, sub_41f898, sub_41f590, sub_41e5a0, sub_41c09c
// ============================================================

void __convention("regparm")sub_41d044(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    arg1[1] -= 1
    
    if (arg1[1] == 0)
        (**arg1)()
        sub_4030d0(arg1)
}

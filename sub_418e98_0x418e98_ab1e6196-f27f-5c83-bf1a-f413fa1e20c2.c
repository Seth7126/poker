// ============================================================
// 函数名称: sub_418e98
// 虚拟地址: 0x418e98
// WARP GUID: ab1e6196-f27f-5c83-bf1a-f413fa1e20c2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_418cb0
// ============================================================

void __convention("regparm")sub_418e98(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[6].b)
    if (arg2 == arg1[6].b)
        return 
    
    arg1[6].b = arg2
    int32_t ebx
    ebx.w = 0xfffd
    sub_4032ac(arg1)
}

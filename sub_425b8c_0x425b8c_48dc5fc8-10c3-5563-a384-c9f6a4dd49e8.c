// ============================================================
// 函数名称: sub_425b8c
// 虚拟地址: 0x425b8c
// WARP GUID: 48dc5fc8-10c3-5563-a384-c9f6a4dd49e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42ee80
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_425b8c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x205))
    if (arg2 == *(arg1 + 0x205))
        return 
    
    *(arg1 + 0x205) = arg2
    sub_42ee80(arg1)
    int32_t* ebx
    ebx.w = 0xffd5
    sub_4032ac(arg1)
}

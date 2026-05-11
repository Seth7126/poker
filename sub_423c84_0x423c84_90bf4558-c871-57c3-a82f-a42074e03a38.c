// ============================================================
// 函数名称: sub_423c84
// 虚拟地址: 0x423c84
// WARP GUID: 90bf4558-c871-57c3-a82f-a42074e03a38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_423c84(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x12d))
    if (arg2 == *(arg1 + 0x12d))
        return 
    
    *(arg1 + 0x12d) = arg2
    int32_t ebx
    ebx.w = 0xffcd
    sub_4032ac(arg1)
}

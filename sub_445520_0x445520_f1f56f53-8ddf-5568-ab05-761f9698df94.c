// ============================================================
// 函数名称: sub_445520
// 虚拟地址: 0x445520
// WARP GUID: f1f56f53-8ddf-5568-ab05-761f9698df94
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_445520(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if ((arg1[8].b & 0x10) == 0)
    if ((arg1[8].b & 0x10) == 0)
        *(arg1 + 0x213) = arg2
    
    if (arg2 != 1)
        int32_t ebx
        ebx.w = 0xffd5
        sub_4032ac(arg1)
    
    if (arg1[0x93] != 0)
        (*(*arg1[0x93] + 0x10))()
}

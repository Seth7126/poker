// ============================================================
// 函数名称: sub_4431ac
// 虚拟地址: 0x4431ac
// WARP GUID: bbc2b47a-df43-5dc6-9a25-e881c15fabe8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b238
// [被调用的父级函数]: sub_44c778, sub_442deb
// ============================================================

int32_t* __convention("regparm")sub_4431ac(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if ((ebx[0x11].b & 8) == 0)
        return sub_42b238(ebx, arg2)
    
    ebx[0x95] = arg2
    arg1.b = 8
    arg1.b = 8 | ebx[0x22].b
    ebx[0x22].b = arg1.b
    return arg1
}

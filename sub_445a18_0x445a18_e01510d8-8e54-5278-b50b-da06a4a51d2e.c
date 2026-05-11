// ============================================================
// 函数名称: sub_445a18
// 虚拟地址: 0x445a18
// WARP GUID: e01510d8-8e54-5278-b50b-da06a4a51d2e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_445a18(int32_t* arg1)
{
    // 第一条实际指令: if ((arg1[8].b & 2) != 0)
    if ((arg1[8].b & 2) != 0)
        arg1[0xb3].b &= 0xdf
        return 
    
    int32_t* ebx
    ebx.w = 0xffb4
    sub_4032ac(arg1)
}

// ============================================================
// 函数名称: sub_4425a0
// 虚拟地址: 0x4425a0
// WARP GUID: 9a33a7e2-fc6c-51fc-9504-d1ec739a59bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4425a0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x87].b == 0)
    if (arg1[0x87].b == 0)
        (*(*arg1 + 0xc0))()
    
    if ((arg1[0xb3].b & 0x20) == 0)
        return 
    
    int32_t ebx
    ebx.w = 0xffb6
    sub_4032ac(arg1)
    arg1[0xb3].b &= 0xdf
}

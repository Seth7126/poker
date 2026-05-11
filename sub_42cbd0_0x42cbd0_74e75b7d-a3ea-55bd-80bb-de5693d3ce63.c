// ============================================================
// 函数名称: sub_42cbd0
// 虚拟地址: 0x42cbd0
// WARP GUID: 74e75b7d-a3ea-55bd-80bb-de5693d3ce63
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42b348, sub_42b994, sub_42cb24
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42cbd0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: sub_42b348(arg1, arg1)
    sub_42b348(arg1, arg1)
    (*(*arg1 - 0x10))()
    
    if ((arg1[0x10].b & 2) != 0)
        sub_42b994(arg1, 1)
    
    if ((arg1[0x10].b & 8) != 0)
        int32_t ebx
        ebx.w = 0xffeb
        sub_4032ac(arg1)
    
    return sub_42cb24(0, arg2, arg1, 0x40)
}

// ============================================================
// 函数名称: sub_445106
// 虚拟地址: 0x445106
// WARP GUID: 95cda25f-52d3-5cfe-9d9a-3e40ae5a9c25
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FillRect
// [内部子函数调用]: sub_4190f0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_445106(char* arg1, void* arg2)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    
    if (arg1[0x217] != 1)
        return 
    
    if (arg1[0x217] != 1 || (arg1[0x20] & 0x10) != 0)
        (*(*arg1 - 0x10))()
    else
        (*(*arg1 + 0x40))(sub_4190f0(*(*(data_5317d8 + 0x38) + 0x130)))
        RECT lprc
        FillRect(*(arg2 + 4), &lprc)
}

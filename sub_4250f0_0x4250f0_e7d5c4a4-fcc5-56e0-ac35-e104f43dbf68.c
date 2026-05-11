// ============================================================
// 函数名称: sub_4250f0
// 虚拟地址: 0x4250f0
// WARP GUID: e7d5c4a4-fcc5-56e0-ac35-e104f43dbf68
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440ee0, sub_42ca60
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4250f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = sub_440ee0(arg1)
    int32_t* eax_1 = sub_440ee0(arg1)
    
    if (eax_1 != 0)
        eax_1[0x8d] = arg1[0x7f]
    
    return sub_42ca60(arg1)
}

// ============================================================
// 函数名称: sub_461850
// 虚拟地址: 0x461850
// WARP GUID: 28ea1974-1bde-5df3-9d8a-57d3e87628e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461314, sub_4616b4, sub_461760
// [被调用的父级函数]: sub_461a84
// ============================================================

int32_t* __convention("regparm")sub_461850(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = sub_461314(arg1, 0xd8)
    int32_t* result = sub_461314(arg1, 0xd8)
    
    if (arg1[0x32] != 0)
        result = sub_4616b4(arg1)
    
    if (*(arg1 + 0xd1) == 0)
        return result
    
    return sub_461760(arg1)
}

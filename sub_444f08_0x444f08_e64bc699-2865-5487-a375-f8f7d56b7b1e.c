// ============================================================
// 函数名称: sub_444f08
// 虚拟地址: 0x444f08
// WARP GUID: e64bc699-2865-5487-a375-f8f7d56b7b1e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41f678, sub_448d04
// [被调用的父级函数]: sub_445088, sub_4445ed, sub_442e78, sub_4451a0
// ============================================================

HICON __convention("regparm")sub_444f08(void* arg1)
{
    // 第一条实际指令: HICON result = sub_41f678(*(arg1 + 0x228))
    HICON result = sub_41f678(*(arg1 + 0x228))
    
    if (result != 0)
        return result
    
    return sub_448d04(data_5317d8)
}

// ============================================================
// 函数名称: sub_446050
// 虚拟地址: 0x446050
// WARP GUID: f5d29dbb-c0fb-58f8-873e-960465d41c11
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41f678, sub_442e78
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_446050(int32_t* arg1)
{
    // 第一条实际指令: BOOL result = sub_41f678(arg1[0x8a])
    BOOL result = sub_41f678(arg1[0x8a])
    
    if (result != 0)
        return result
    
    return sub_442e78(arg1)
}

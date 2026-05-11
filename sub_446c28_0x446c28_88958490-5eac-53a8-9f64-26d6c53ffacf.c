// ============================================================
// 函数名称: sub_446c28
// 虚拟地址: 0x446c28
// WARP GUID: 88958490-5eac-53a8-9f64-26d6c53ffacf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_446388, sub_430044, sub_4301c8
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_446c28(int32_t* arg1)
{
    // 第一条实际指令: BOOL result = sub_4301c8(arg1)
    BOOL result = sub_4301c8(arg1)
    
    if (result != 0)
        return result
    
    return sub_446388(arg1)
}

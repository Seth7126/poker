// ============================================================
// 函数名称: sub_412aa8
// 虚拟地址: 0x412aa8
// WARP GUID: 535e9a8c-91a8-5e19-8e2c-24c30e68f499
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetEndOfFile
// [内部子函数调用]: sub_40c854
// [被调用的父级函数]: 无
// ============================================================

BOOL __convention("regparm")sub_412aa8(int32_t* arg1)
{
    // 第一条实际指令: (*(*arg1 + 0xc))()
    (*(*arg1 + 0xc))()
    BOOL result = SetEndOfFile(arg1[1])
    sub_40c854(result)
    return result
}

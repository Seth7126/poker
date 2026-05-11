// ============================================================
// 函数名称: sub_402860
// 虚拟地址: 0x402860
// WARP GUID: c6629db4-6b52-53db-b111-3113988a3385
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetCurrentDirectoryA
// [内部子函数调用]: sub_40423c, sub_402854
// [被调用的父级函数]: sub_4b44d0, sub_4b498a, sub_4b5160
// ============================================================

int32_t __convention("regparm")sub_402860(int32_t arg1)
{
    // 第一条实际指令: int16_t result = SetCurrentDirectoryA(sub_40423c(arg1))
    int16_t result = SetCurrentDirectoryA(sub_40423c(arg1))
    
    if (result != 0)
        return result
    
    return sub_402854()
}

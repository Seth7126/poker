// ============================================================
// 函数名称: sub_428c18
// 虚拟地址: 0x428c18
// WARP GUID: a0a3ec87-94af-5170-822c-d07ff6158af7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCapture
// [内部子函数调用]: sub_428990
// [被调用的父级函数]: sub_42b984, sub_449944
// ============================================================

HANDLEsub_428c18()
{
    // 第一条实际指令: HANDLE result = sub_428990(GetCapture())
    HANDLE result = sub_428990(GetCapture())
    
    if (result != 0 && data_52e800 != 0 && result == *(data_52e800 + 0x24))
        return data_52e800
    
    return result
}

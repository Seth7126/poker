// ============================================================
// 函数名称: sub_44947c
// 虚拟地址: 0x44947c
// WARP GUID: 1312d00c-db79-577e-8be2-687bd50bbc7f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PostQuitMessage
// [内部子函数调用]: sub_40c864
// [被调用的父级函数]: sub_44613c
// ============================================================

int32_tsub_44947c()
{
    // 第一条实际指令: char result = sub_40c864()
    char result = sub_40c864()
    
    if (result == 0)
        return result
    
    return PostQuitMessage(0)
}

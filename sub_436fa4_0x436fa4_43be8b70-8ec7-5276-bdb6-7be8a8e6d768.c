// ============================================================
// 函数名称: sub_436fa4
// 虚拟地址: 0x436fa4
// WARP GUID: 43be8b70-8ec7-5276-bdb6-7be8a8e6d768
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41842c
// [被调用的父级函数]: sub_4375ac, sub_43754c
// ============================================================

int32_tsub_436fa4()
{
    // 第一条实际指令: uint32_t eax
    uint32_t eax
    int32_t result = sub_41842c(eax)
    
    if (result == 0x1fffffff)
        return 0xffffffff
    
    if (result == 0x20000000)
        return 0xff000000
    
    return result
}

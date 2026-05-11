// ============================================================
// 函数名称: sub_402f08
// 虚拟地址: 0x402f08
// WARP GUID: aa484276-04d9-534b-8f14-45a78cb547b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetKeyboardType
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_406ad4
// ============================================================

int32_tsub_402f08()
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (GetKeyboardType(0) == 7)
        int32_t eax_2 = GetKeyboardType(1) & 0xff00
        
        if (eax_2 == 0xd00 || eax_2 == 0x400)
            result.b = 1
    
    return result
}

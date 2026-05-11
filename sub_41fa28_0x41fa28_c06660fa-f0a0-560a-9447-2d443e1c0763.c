// ============================================================
// 函数名称: sub_41fa28
// 虚拟地址: 0x41fa28
// WARP GUID: c06660fa-f0a0-560a-9447-2d443e1c0763
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_41f9e4
// [被调用的父级函数]: sub_41feac
// ============================================================

void*sub_41fa28()
{
    // 第一条实际指令: data_52e3c0 = neg.d(MulDiv(8, data_53165c, 0x48))
    data_52e3c0 = neg.d(MulDiv(8, data_53165c, 0x48))
    void* result = data_530a80
    
    if (*(result + 8) != 0)
        void* eax_3 = sub_41f9e4()
        result.b = eax_3.b + 0x80
        
        if (eax_3.b == 0x80)
            __builtin_memcpy("\rMS Sans Serif", 0x41fa8c, 0x10)
            result = neg.d(MulDiv(9, data_53165c, 0x48))
            data_52e3c0 = result
            data_52e3c6 = eax_3.b
    
    return result
}

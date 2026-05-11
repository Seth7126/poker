// ============================================================
// 函数名称: sub_403490
// 虚拟地址: 0x403490
// WARP GUID: 24fd14a2-52c4-50cf-87a0-e217425714b5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RaiseException
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403668
// ============================================================

voidsub_403490()
{
    // 第一条实际指令: if (data_52e008 u<= 1)
    if (data_52e008 u<= 1)
        return 
    
    int32_t eax
    int32_t var_4 = eax
    void* ebx
    uint32_t arguments = *(ebx + 4)
    RaiseException(0xeedfae0, 0, 1, &arguments)
    noreturn
}

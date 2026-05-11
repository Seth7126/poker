// ============================================================
// 函数名称: sub_4c4ab8
// 虚拟地址: 0x4c4ab8
// WARP GUID: fc50b294-4fc6-5d34-9588-a624b52e67f4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_516e74, sub_51765c, sub_51783c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4c4150, sub_4c1254, sub_4c8aa0, sub_4c4904, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4c4ab8(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t edi = arg1 * 0x2345
    int32_t edi = arg1 * 0x2345
    bool o = unimplemented  {imul edi, ebx, 0x2345}
    
    if (o)
        sub_403010()
        noreturn
    
    sub_516e74(data_5301b0 + (edi << 2) - 0x8d14)
    sub_51765c(data_5301b0 + (edi << 2) - 0x364, arg2)
    sub_516e74(data_5301b0 + 0x60fdc)
    void var_108
    sub_51765c(data_5301b0 + 0x6998c, &var_108)
    return sub_51783c(arg2, &var_108)
}

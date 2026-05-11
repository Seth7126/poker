// ============================================================
// 函数名称: sub_43b908
// 虚拟地址: 0x43b908
// WARP GUID: 4a41b610-b8ab-5112-bc70-9b8b186ecfeb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43b7f4, sub_43bc80, sub_439fb4
// [被调用的父级函数]: sub_43baf0
// ============================================================

void __convention("regparm")sub_43b908(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2.b == *(arg1 + 0x33))
    if (arg2.b == *(arg1 + 0x33))
        return 
    
    void* edi_1 = *(arg1 + 0x58)
    
    if (edi_1 != 0)
        sub_439fb4(edi_1, sub_43bc80(edi_1), arg2)
    
    *(arg1 + 0x33) = arg2.b
    
    if (*(arg1 + 0x2c) != 0 && *(arg1 + 0x31) != 0)
        sub_43b7f4(arg1)
}

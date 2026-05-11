// ============================================================
// 函数名称: sub_41e1b4
// 虚拟地址: 0x41e1b4
// WARP GUID: 666f94f2-49d9-5fe1-8b78-246812bd89e5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GdiFlush
// [内部子函数调用]: sub_419de8, sub_41dd34, sub_41e26c, sub_41a0c8
// [被调用的父级函数]: sub_453ff8, sub_453acc, sub_52c7c8
// ============================================================

int32_t __convention("regparm")sub_41e1b4(HPALETTE arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    sub_41dd34(arg1)
    
    if (edi s< 0 || edi s> *(arg1 + 0x20))
        sub_419de8(data_5307e0)
        noreturn
    
    sub_41e26c(arg1)
    GdiFlush()
    int32_t eax_5 = *(arg1 + 0x38)
    
    if (eax_5 s> 0)
        edi = eax_5 - edi - 1
    
    return sub_41a0c8(*(arg1 + 0x34), zx.d(*(arg1 + 0x3e)), 0x20) * edi + *(arg1 + 0x2c)
}

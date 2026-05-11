// ============================================================
// 函数名称: sub_512cbc
// 虚拟地址: 0x512cbc
// WARP GUID: 182fbfc5-df00-5844-a594-912e3fa33049
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_50a53c, sub_403010
// [被调用的父级函数]: sub_509024, sub_4c1b10, sub_4c8aa0, sub_4fc834, sub_50907c
// ============================================================

bool __convention("regparm")sub_512cbc(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_2 = sub_50a53c(arg2) * 0xe9
    int32_t eax_2 = sub_50a53c(arg2) * 0xe9
    bool o = unimplemented  {imul eax, eax, 0xe9}
    
    if (not(o))
        eax_2.b = *(arg1 + (eax_2 << 2) - 0x50)
        return eax_2.b - 1 u< 2
    
    sub_403010()
    noreturn
}

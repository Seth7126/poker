// ============================================================
// 函数名称: sub_502898
// 虚拟地址: 0x502898
// WARP GUID: c752afb6-b9ea-58af-b7a0-39abd88d1aa0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010, sub_502990, sub_402ad0
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_tsub_502898()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    *(*data_5301f4 + 0x457c) = 0x3f800000
    sub_402ad0()
    int32_t i = 1
    void* edi = &data_7a76b8
    
    do
        *edi = i
        *(edi - 8) = i
        sub_502990(edi - 0x50)
        bool o_1 = unimplemented  {imul eax, esi, 0x3e8}
        
        if (o_1)
            sub_403010()
            noreturn
        
        *(edi - 0x4c) = fconvert.s(float.t(i * 0x3e8) / fconvert.t(3f) + fconvert.t(500f))
        *(edi - 0x24) = fconvert.s(fconvert.t(*(edi - 0x24)) / fconvert.t(6f)
            - fconvert.t(*(edi - 0x4c)) / fconvert.t(5f))
        *(edi - 0xc) = 1
        i += 1
        edi += 0x58
    while (i != 0xb)
    
    (*data_530994)(0x1701)
    (*data_530810)()
    void* eax_8 = data_5305b0
    (*data_530694)(fconvert.d(float.t(*data_5300c0) / fconvert.t(4f) * fconvert.t(3f)), *eax_8, 
        *(eax_8 + 4), 0, 0x3ff00000, 0, 0x40490000)
    (*data_530994)(0x1700)
    return entry_result
}

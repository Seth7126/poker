// ============================================================
// 函数名称: sub_509850
// 虚拟地址: 0x509850
// WARP GUID: 6e465cdb-df1a-520e-8dd9-f5c6e1e9f822
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_48380c, sub_403010
// [被调用的父级函数]: sub_509890, sub_4e6659, sub_4e649b
// ============================================================

int32_tsub_509850()
{
    // 第一条实际指令: void* eax = data_530674
    void* eax = data_530674
    *eax
    int32_t result = *eax * 0x1038
    bool o = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (*(*(*data_530304 + 0xab0) + (result << 3) + 1) == 0)
        return result
    
    return sub_48380c(*data_530304, *data_530674)
}

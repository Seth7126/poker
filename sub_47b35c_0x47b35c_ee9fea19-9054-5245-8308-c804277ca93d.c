// ============================================================
// 函数名称: sub_47b35c
// 虚拟地址: 0x47b35c
// WARP GUID: ee9fea19-9054-5245-8308-c804277ca93d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_47b35c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: bool o = unimplemented  {imul ebx, ebx, 0x1038}
    bool o = unimplemented  {imul ebx, ebx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    if (arg2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul edx, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    void* result = *(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0 + arg2 * 0x118 - 0xf8
    char temp2 = *(result + 0xda)
    *(result + 0xda) += 1
    
    if (add_overflow(temp2, 1))
        sub_403010()
        noreturn
    
    if (arg3 + 0x80 u> 0xff)
        sub_403008()
        noreturn
    
    int32_t edx_4 = sx.d(*(result + 0xda)) - 1
    
    if (edx_4 u<= 0x4f)
        *(result + edx_4 + 1 + 0x89) = (arg3 + 0x80).b - 0x80
        return result
    
    sub_403008()
    noreturn
}

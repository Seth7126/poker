// ============================================================
// 函数名称: sub_47b3d8
// 虚拟地址: 0x47b3d8
// WARP GUID: 0a95d9dc-de64-5f55-abdf-06fe2aa5e65d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4dd1e0, sub_4dd1d7, sub_47d208, sub_47d0c0, sub_483f98
// ============================================================

int32_t __convention("regparm")sub_47b3d8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: bool o = unimplemented  {imul ebx, ebx, 0x1038}
    bool o = unimplemented  {imul ebx, ebx, 0x1038}
    
    if (o)
        sub_403010()
        noreturn
    
    int32_t esi = *(arg1 + 0xab0) + *(arg1 + 0x8a8) * 0x81c0
    
    if (arg2 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_1 = unimplemented  {imul eax, edx, 0x23}
    
    if (o_1)
        sub_403010()
        noreturn
    
    char temp1 = *(esi + arg2 * 0x118 - 0x1e)
    *(esi + arg2 * 0x118 - 0x1e) += 1
    
    if (add_overflow(temp1, 1))
        sub_403010()
        noreturn
    
    if (arg3 + 0x80 u> 0xff)
        sub_403008()
        noreturn
    
    int32_t ebx_3 = sx.d(*(esi + arg2 * 0x118 - 0x1e)) - 1
    
    if (ebx_3 u> 0x4f)
        sub_403008()
        noreturn
    
    *(esi + arg2 * 0x118 - 0xf8 + ebx_3 + 1 + 0x89) = arg3.b
    
    if (arg3 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    int32_t result = arg3 * 0x23
    bool o_3 = unimplemented  {imul eax, ecx, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    if (arg2 + 0x8000 u<= 0xffff)
        *(esi + (result << 3) - 0x70) = (arg2 + 0x8000).w - 0x8000
        return result
    
    sub_403008()
    noreturn
}

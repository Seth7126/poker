// ============================================================
// 函数名称: sub_4765ac
// 虚拟地址: 0x4765ac
// WARP GUID: b6704471-28b4-5a2b-9ee8-1e4c1af7424c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_403010
// [被调用的父级函数]: sub_4766f8, sub_475990, sub_476830
// ============================================================

int32_t __convention("regparm")sub_4765ac(void* arg1)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x9b8)
    int32_t edx = *(arg1 + 0x9b8)
    
    if (edx s<= 0 || edx s> *(arg1 + 0xab4))
        return 0
    
    int32_t esi_1 = *(arg1 + 0x9b8)
    bool o_1 = unimplemented  {imul edx, esi, 0x1038}
    
    if (o_1)
        sub_403010()
        noreturn
    
    int32_t ecx_1 = *(arg1 + 0x9b4)
    
    if (sx.d(*(*(arg1 + 0xab0) + esi_1 * 0x81c0 + 0x8130)) s< ecx_1 || ecx_1 s<= 0)
        return 0
    
    int32_t result
    result.b = 1
    bool o_2 = unimplemented  {imul ebx, esi, 0x1038}
    
    if (o_2)
        sub_403010()
        noreturn
    
    if (ecx_1 - 1 u> 0x75)
        sub_403008()
        noreturn
    
    bool o_3 = unimplemented  {imul eax, ecx, 0x23}
    
    if (o_3)
        sub_403010()
        noreturn
    
    char* esi_3 = *(arg1 + 0xab0) + esi_1 * 0x81c0 + ecx_1 * 0x118 - 0xf8
    
    if (esi_3[7] == 0)
        result = 0
    
    if (esi_3[6] == 0)
        result = 0
    
    char* eax_1
    eax_1.b = *esi_3
    
    if (eax_1.b - 1 u< 3 || eax_1.b - 5 u< 5 || eax_1.b - 0xf u< 4)
        result = 0
    
    if (eax_1.b == 0xa && esi_3[0xf0] == 9)
        result = 0
    
    if (eax_1.b == 0 && esi_3[0xf0] == 9)
        result = 0
    
    eax_1.b = esi_3[0xf0]
    eax_1.b -= 4
    char temp3_1 = eax_1.b
    eax_1.b -= 2
    
    if (temp3_1 u>= 2)
        return result
    
    return 0
}

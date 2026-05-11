// ============================================================
// 函数名称: sub_5091bc
// 虚拟地址: 0x5091bc
// WARP GUID: 9da82112-339d-589e-9e98-9a5e517bdfcc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_512d78, sub_50d318, sub_402bdc, sub_50928c, sub_403010
// [被调用的父级函数]: sub_514ef8
// ============================================================

void* __convention("regparm")sub_5091bc(int32_t arg1)
{
    // 第一条实际指令: void var_84
    void var_84
    __builtin_memcpy(&var_84, arg1, 0x7c)
    void* edi = data_530454
    int32_t var_68
    int32_t esi_1 = var_68 * 0xe9
    bool o = unimplemented  {imul esi, ebx, 0xe9}
    
    if (o)
        sub_403010()
        noreturn
    
    char var_7c[0x9]
    *(*edi + (esi_1 << 2) + 0x188) = sx.d(var_7c[var_68])
    char var_73[0xb]
    int32_t edx
    edx.b = var_73[var_68]
    *(*edi + (esi_1 << 2) + 0x190) = edx.b
    char var_60[0x5b]
    sub_402bdc(*edi + (esi_1 << 2) + 0x198, &var_60, 0x20)
    
    if (sub_50d318(*edi) == 0)
        if (var_68 == sub_512d78(*edi) && *(*edi + 0x9c) == 1)
            bool o_1 = unimplemented  {imul eax, ebx, 0xe9}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*edi + var_68 * 0x3a4 + 0x188) == *(*edi + 0x9c))
                bool o_2 = unimplemented  {imul eax, ebx, 0xe9}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                if (*(*edi + var_68 * 0x3a4 + 0x190) != 0)
                    *(*edi + 0x98) = 1
    else
        sub_50928c()
    
    char var_5
    void* result
    result.b = var_5
    return result
}

// ============================================================
// 函数名称: sub_41f1b0
// 虚拟地址: 0x41f1b0
// WARP GUID: 43114530-00e5-54a0-b048-be30df5054f5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SelectObject, GetDIBColorTable
// [内部子函数调用]: sub_41ad7c, sub_402d00, sub_41a3a8, sub_4128c0, sub_41e04c, sub_41e26c, sub_419c14, sub_412930, sub_41a6cc, sub_419f38, sub_41d1c8
// [被调用的父级函数]: sub_41f1a8, sub_41f449
// ============================================================

int32_t __convention("regparm")sub_41f1b0(HPALETTE arg1, int32_t* arg2, char arg3)
{
    // 第一条实际指令: int32_t* ebp = *(arg1 + 0x6c)
    int32_t* ebp = *(arg1 + 0x6c)
    int32_t var_43c
    
    if (ebp != 0)
        var_43c = sub_4128c0(ebp)
        
        if (arg3 != 0)
            sub_412930(arg2, &var_43c, 4)
        
        *(*(arg1 + 0x6c) + 4)
        return (*(*arg2 + 8))()
    
    sub_41e26c(arg1)
    void* ebp_1 = arg1
    var_43c = 0
    int32_t result = *(ebp_1 + 0x14)
    uint32_t var_438
    int16_t var_42c
    void prgbq
    
    if (result != 0)
        int32_t var_434
        sub_41ad7c(&var_43c, &var_434, *(ebp_1 + 0x50))
        
        if (*(ebp_1 + 0x70) != 0)
            var_434 = 0xc
            int16_t eax_8 = *(ebp_1 + 0x3e)
            
            if (eax_8 u<= 8)
                var_434 += (1 << eax_8.b) * 3
        
        var_43c += var_434 + 0xe
        sub_402d00(&var_42c, 0xe, 0)
        var_42c = 0x4d42
        sub_419c14(sub_41e04c(arg1), 1)
        HGDIOBJ h = SelectObject(*(arg1 + 4), *(ebp_1 + 0x14))
        sub_419f38(h)
        var_438 = GetDIBColorTable(*(arg1 + 4), 0, 0x100, &prgbq)
        SelectObject(*(arg1 + 4), h)
        uint32_t eax_25 = *(ebp_1 + 0x50)
        
        if (eax_25 u> 0 && eax_25 u< var_438)
            var_438 = eax_25
        
        if (*(ebp_1 + 0x70) == 0 && var_438 == 0 && *(ebp_1 + 0x10) != 0 && *(ebp_1 + 0x71) == 0)
            var_438 = sub_41a6cc(*(ebp_1 + 0x10), &prgbq, 0xff)
            
            if (*(ebp_1 + 0x3e) u> 8)
                uint32_t eax_29 = var_438 << 2
                var_43c += eax_29
                var_434 += eax_29
        
        int32_t var_42a_1 = var_43c
        result = var_434 + 0xe
        int32_t result_1 = result
    
    if (arg3 != 0)
        result = sub_412930(arg2, &var_43c, 4)
    
    if (var_43c == 0)
        return result
    
    sub_41d1c8(ebp_1 + 0x18)
    
    if (var_438 != 0)
        int32_t eax_34 = *(ebp_1 + 0x50)
        
        if (eax_34 == 0 || eax_34 != var_438)
            *(ebp_1 + 0x50) = var_438
        
        if (*(ebp_1 + 0x70) != 0)
            sub_41a3a8(&prgbq, &var_438)
    
    if (*(ebp_1 + 0x70) == 0)
        sub_412930(arg2, &var_42c, 0xe)
        sub_412930(arg2, ebp_1 + 0x30, 0x28)
        
        if (*(ebp_1 + 0x3e) u> 8 && (*(ebp_1 + 0x40) & 3) != 0)
            sub_412930(arg2, ebp_1 + 0x58, 0xc)
    else
        int32_t var_41e = 0xc
        int16_t var_41a_1 = *(ebp_1 + 0x34)
        int16_t var_418_1 = *(ebp_1 + 0x38)
        int16_t var_416_1 = 1
        void* eax_37
        eax_37.w = *(ebp_1 + 0x3e)
        int16_t var_414_1 = eax_37.w
        sub_412930(arg2, &var_42c, 0xe)
        sub_412930(arg2, &var_41e, 0xc)
    
    void* eax_43
    eax_43.b = *(ebp_1 + 0x70)
    int32_t ecx_3
    ecx_3.b = *(eax_43 + 0x52e634)
    sub_412930(arg2, &prgbq, ecx_3 * var_438)
    return sub_412930(arg2, *(ebp_1 + 0x2c), *(ebp_1 + 0x44))
}

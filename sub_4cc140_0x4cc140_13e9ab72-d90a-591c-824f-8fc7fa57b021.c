// ============================================================
// 函数名称: sub_4cc140
// 虚拟地址: 0x4cc140
// WARP GUID: 13e9ab72-d90a-591c-824f-8fc7fa57b021
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2d7c, sub_403010
// [被调用的父级函数]: sub_4d3e30, sub_4d0204, sub_4d2a58, sub_4ca054
// ============================================================

int32_t __convention("regparm")sub_4cc140(int32_t arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg3
    int32_t esi = arg3
    int32_t result = 0
    
    if (esi == 0xffffffff)
        int32_t eax
        eax.b = arg2
        bool o_1 = unimplemented  {imul eax, eax, 0xd4f}
        
        if (o_1)
            sub_403010()
            noreturn
        
        bool o_2 = unimplemented  {imul ecx, ebx, 0x2e9c}
        
        if (o_2)
            sub_403010()
            noreturn
        
        int32_t esi_1 = *(arg1 * 0x174e0 + &data_532f70 + eax * 0x353c - 0x14010)
        esi = esi_1 - 1
        
        if (add_overflow(esi_1, 0xffffffff))
            sub_403010()
            noreturn
    
    if (arg1 != 9 && arg1 != 0xa && arg2 != 4)
        if (esi s> 0x41)
            result = 1
        
        if (esi s> 0x83)
            return 2
    else if (esi s<= 0x41 || arg1 s<= 1 || arg1 s>= *data_5300d0)
    label_4cc1e6:
        
        if (esi s> 0x20)
            result = 1
        
        if (esi s> 0x41)
            return 2
    else
        if (add_overflow(arg1, 1))
            sub_403010()
            noreturn
        
        if (sub_4c2d7c(arg1 + 1) == 0)
            goto label_4cc1e6
        
        if (esi s> 0x20)
            return 1
    
    return result
}

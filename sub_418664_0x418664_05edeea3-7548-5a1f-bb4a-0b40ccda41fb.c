// ============================================================
// 函数名称: sub_418664
// 虚拟地址: 0x418664
// WARP GUID: 05edeea3-7548-5a1f-bb4a-0b40ccda41fb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetObjectA
// [内部子函数调用]: sub_402e40, sub_402bdc
// [被调用的父级函数]: sub_418aa8
// ============================================================

void __convention("regparm")sub_418664(int32_t arg1, void** arg2)
{
    // 第一条实际指令: HGDIOBJ h = arg1
    HGDIOBJ h = arg1
    __builtin_memcpy(arg2, &data_52e3bc, 0x2c)
    int32_t pv
    
    if (h == 0 || GetObjectA(h, 0x3c, &pv) == 0)
        return 
    
    arg2[1] = pv
    int32_t var_5c
    
    if (var_5c s>= 0x2bc)
        *(arg2 + 9) |= 1
    
    char var_58
    
    if (var_58 == 1)
        *(arg2 + 9) |= 2
    
    char var_57
    
    if (var_57 == 1)
        *(arg2 + 9) |= 4
    
    char var_56
    
    if (var_56 == 1)
        *(arg2 + 9) |= 8
    
    char var_55
    int32_t eax
    eax.b = var_55
    *(arg2 + 0xa) = eax.b
    char var_50[0x20]
    char var_30[0x24]
    sub_402e40(&var_30, &var_50, 0x20)
    sub_402bdc(arg2 + 0xb, &var_30, 0x1f)
    char var_51
    arg1.b = var_51
    arg1.b &= 0xf
    char temp0_1 = arg1.b
    arg1.b -= 1
    
    if (temp0_1 == 1)
        arg2[2].b = 2
    else
        char temp1_1 = arg1.b
        arg1.b -= 1
        
        if (temp1_1 != 1)
            arg2[2].b = 0
        else
            arg2[2].b = 1
    
    *arg2 = h
}

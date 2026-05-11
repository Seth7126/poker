// ============================================================
// 函数名称: sub_42c1fc
// 虚拟地址: 0x42c1fc
// WARP GUID: b9a8505d-61a3-54e5-8fda-d508d2bccfd4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_42b31c, sub_403248, sub_403260
// [被调用的父级函数]: sub_43101c
// ============================================================

int32_t __convention("regparm")sub_42c1fc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t ebp
    int32_t var_10 = ebp
    int32_t* var_20
    int32_t* esp = &var_20
    var_20 = arg1
    int32_t* ebp_1 = *(arg2 + 8)
    int32_t* esi_1 = ebp_1[2]
    char eax_1 = sub_403248(esi_1, 0x426f44)
    
    if (data_531768 != 0 && eax_1 == 0)
        sub_403260(esi_1, 0x426ebc)
        esi_1 = esi_1[0xe]
    
    int32_t var_18
    sub_42b31c(var_20, ebp_1, &var_18)
    int32_t result
    result.b = *(arg2 + 4)
    char temp0 = result.b
    result.b -= 3
    int32_t var_14
    
    if (temp0 u< 3)
        char var_1c = 1
        
        if (eax_1 == 0)
            int32_t eax_6
            eax_6.b = *(arg2 + 4)
            sub_4032ac(var_20, esi_1, var_18, &var_1c, eax_6, var_14)
            esp = &var_20
        else
            int32_t eax_4
            eax_4.b = *(arg2 + 4)
            sub_4032ac(ebp_1[3], esi_1, var_18, &var_1c, eax_4, var_14)
            esp = &var_20
        
        result.b = var_1c
        *(arg2 + 0xc) = result
    else if (temp0 == 3)
        if (eax_1 == 0)
            result = sub_4032ac(var_20, esi_1, var_18, var_14)
            esp = &var_18
        else
            result = sub_4032ac(ebp_1[3], esi_1, var_18, var_14)
            esp = &var_18
    esp[4]
    esp[5]
    esp[6]
    esp[7]
    return result
}

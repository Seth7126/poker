// ============================================================
// 函数名称: sub_401e1c
// 虚拟地址: 0x401e1c
// WARP GUID: 235623f2-37f8-529e-85df-2bc4609226cd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_401cf8, sub_401a34, sub_401548, sub_401d4c, sub_401cc8
// [被调用的父级函数]: sub_401eb4
// ============================================================

int32_t* __convention("regparm")sub_401e1c(void** arg1, void* arg2)
{
    // 第一条实际指令: void* edi = arg2
    void* edi = arg2
    void** eax_1 = sub_401cc8(arg1)
    int32_t ebp = eax_1[2]
    int32_t eax_3 = ebp + eax_1[3]
    
    if (eax_3 - (edi + arg1) s<= 0xc)
        edi = eax_3 - arg1
    
    void* var_18
    
    if (arg1 - ebp s>= 0xc)
        sub_401a34(&arg1[1], edi - 4, &var_18)
    else
        sub_401a34(ebp, arg1 - eax_1[2] + edi, &var_18)
    
    void* ebp_1 = var_18
    
    if (ebp_1 == 0)
        return nullptr
    
    sub_401cf8(arg1, ebp_1 - arg1)
    int32_t var_14
    int32_t* eax_10 = ebp_1 + var_14
    
    if (eax_10 u< eax_1[2] + eax_1[3])
        sub_401d4c(eax_10, edi + arg1 - eax_10)
    
    sub_401548(eax_1, &var_18)
    int32_t* result
    result.b = 1
    return result
}

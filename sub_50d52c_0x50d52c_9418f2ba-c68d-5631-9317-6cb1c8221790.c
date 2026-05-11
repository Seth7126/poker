// ============================================================
// 函数名称: sub_50d52c
// 虚拟地址: 0x50d52c
// WARP GUID: 9418f2ba-c68d-5631-9317-6cb1c8221790
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402b90, sub_403010, sub_402bdc, sub_402bc0
// [被调用的父级函数]: sub_514068, sub_508414, sub_514178, sub_51431c, sub_514ef8, sub_515d34, sub_513f7c, sub_514468, sub_514784, sub_5143f0, sub_51497c, sub_5140f8, sub_513ffc, sub_512e8c, sub_5148a0, sub_513e4c, sub_514290
// ============================================================

int32_t __fastcallsub_50d52c(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: *arg2 = 0x3039
    *arg2 = 0x3039
    arg2[0x1e] = 0xd431
    arg2[1].b = 0xb
    int32_t esi = *(*data_530454 + 0x350)
    
    if (esi s>= 1)
        data_530454
    
    if (esi s< 1 || esi s> 8)
        *(arg2 + 0x65) = 0x6d653c07
        *(arg2 + 0x69) = data_50d61c.d
    else
        char var_1c[0x18]
        sub_402bc0(&var_1c, 0x50d610)
        bool o_1 = unimplemented  {imul eax, esi, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        sub_402b90(&var_1c, *data_530454 + esi * 0x3a4 - 0x4f, 0x15)
        char var_34[0x18]
        sub_402bc0(&var_34, &var_1c)
        sub_402b90(&var_34, &data_50d614, 0x16)
        sub_402bdc(arg2 + 0x65, &var_34, 0x12)
    
    arg2[9].b = 0
    *(arg2 + 7) = 0
    int32_t i_2 = 9
    void* eax_9 = &arg2[2]
    int32_t i
    
    do
        *eax_9 = 0
        *(eax_9 + 9) = 0
        eax_9 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t i_3 = 2
    void* eax_10 = &arg2[7]
    int32_t i_1
    
    do
        *eax_10 = 0
        eax_10 += 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    *(arg2 + 5) = 5
    *(arg2 + 6) = 5
    arg2[0x1f] = 0
    return 0
}

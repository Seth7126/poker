// ============================================================
// 函数名称: sub_5166d8
// 虚拟地址: 0x5166d8
// WARP GUID: 69fab505-e208-545b-987c-03c46d86cc90
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49732c, sub_497874, sub_497674, sub_4977e0, sub_512f00, sub_497894, sub_4973d8, sub_403010, sub_402bdc, sub_514cc4, sub_5164e8, sub_512e7c
// [被调用的父级函数]: sub_5168a7, sub_50732c, sub_4ec52f
// ============================================================

int32_t* __convention("regparm")sub_5166d8(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char var_9 = arg3.b
    char var_9 = arg3.b
    int32_t* result = nullptr
    
    if (*(arg1 + 0x344) == 0)
        sub_5164e8(arg1, arg2, arg3)
        *(arg1 + 0x344) = 1
        *(arg1 + 0x345) = 0
        sub_512f00(arg1)
        
        if (var_9 != 1)
            sub_512e7c(arg3, arg1 + 0x3640)
        
        *data_530660
        int32_t* eax_4 = sub_497894(sub_49492a+0x266, 1)
        *(arg1 + 0x60) = eax_4
        int32_t ecx_2 = sub_497674(eax_4)
        sub_497874(*(arg1 + 0x60), sub_516d08, arg1)
        sub_49732c(*(arg1 + 0x60), 0x4d2)
        sub_4977e0(ecx_2, 2, *(arg1 + 0x60), 0x516474, arg1)
        sub_4977e0(ecx_2, 3, *(arg1 + 0x60), 0x5163b8, arg1)
        sub_4977e0(ecx_2, 0, *(arg1 + 0x60), 0x51623c, arg1)
        *(arg1 + 0x60)
        sub_4973d8()
        *(arg1 + 0x90) = 0
        sub_514cc4(arg1, sub_51682b+5)
        result.b = 1
        
        if (var_9 != 1)
            *(arg1 + 0x54) = 1
        
        *(arg1 + 0x350) = arg2
        bool o_1 = unimplemented  {imul eax, edi, 0xe9}
        
        if (o_1)
            sub_403010()
            noreturn
        
        sub_402bdc(arg1 + arg2 * 0x3a4 - 0x4f, arg1 + 0x31, 0x14)
        *(arg1 + 0x350)
        bool o_2 = unimplemented  {imul eax, dword [esi+0x350], 0xe9}
        
        if (o_2)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x350) * 0x3a4 - 0x50) = 2
        *(arg1 + 0x350)
        bool o_3 = unimplemented  {imul eax, dword [esi+0x350], 0xe9}
        
        if (o_3)
            sub_403010()
            noreturn
        
        *(arg1 + *(arg1 + 0x350) * 0x3a4 + 0x185) = 0
    
    return result
}

// ============================================================
// 函数名称: sub_492528
// 虚拟地址: 0x492528
// WARP GUID: e4023a29-a97f-5430-8f58-89b9a899c541
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_492c54, sub_4931f4, sub_492d64, sub_493550, sub_4925e8, sub_493064, sub_492ed0, sub_49348c, sub_4933b0, sub_492e3c
// [被调用的父级函数]: sub_4926a0, sub_4925fc
// ============================================================

int32_t __convention("regparm")sub_492528(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    var_c.b = 1
    arg2.b = *(arg1 + 0x292)
    int32_t ebx
    ebx.w = 0xffb5
    int32_t result
    int32_t ecx_1
    int32_t edx
    result, ecx_1, edx = sub_4032ac(arg1, arg2, &var_c, var_c)
    
    if (var_c.b == 0)
        return result
    
    int32_t eax_1
    eax_1.b = *(arg1 + 0x292)
    
    switch (eax_1)
        case 0
            sub_492c54(arg1)
        case 1
            sub_492ed0(arg1)
        case 2
            sub_492e3c(arg1, edx, ecx_1)
        case 3
            sub_493064(arg1)
        case 4
            sub_4931f4(arg1)
        case 5
            sub_4933b0(arg1)
        case 6
            sub_49348c(arg1)
        case 7
            sub_492d64(arg1)
        case 8
            sub_493550(arg1)
    
    edx.b = *(arg1 + 0x292)
    return sub_4925e8(arg1)
}

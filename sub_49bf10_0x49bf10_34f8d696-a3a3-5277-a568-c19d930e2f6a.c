// ============================================================
// 函数名称: sub_49bf10
// 虚拟地址: 0x49bf10
// WARP GUID: 34f8d696-a3a3-5277-a568-c19d930e2f6a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49be64, sub_49be1c, sub_402d00, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_49bf10(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void var_110
    sub_402d00(&var_110, 0x104, 0)
    void var_214
    sub_402d00(&var_214, 0x104, 0)
    void var_318
    sub_402d00(&var_318, 0x104, 0)
    void* ebp_1
    int32_t* edi_1
    ebp_1, edi_1 = sub_49be64(arg2, &var_110)
    void* ebp_2 = sub_49be64(edi_1, ebp_1 - 0x210)
    int32_t* ebp_3
    int32_t* edi_2
    ebp_3, edi_2 = sub_49be64(*(ebp_2 + 0xc), ebp_2 - 0x314)
    int32_t result
    
    if (arg3 != 0xfffffffe)
        ebp_3[-2] = divs.dp.d(sx.q(arg3), 0x3e8)
        bool o_1 = unimplemented  {imul eax, edx, 0x3e8}
        
        if (o_1)
            sub_403010()
            noreturn
        
        ebp_3[-1] = mods.dp.d(sx.q(arg3), 0x3e8) * 0x3e8
        result = (*data_530a5c)(0, &ebp_3[-0x43], &ebp_3[-0x84], &ebp_3[-0xc5], &ebp_3[-2])
    else
        result = (*data_530a5c)(0, &ebp_3[-0x43], &ebp_3[-0x84], &ebp_3[-0xc5], 0)
    
    sub_49be1c(arg2, &ebp_3[-0x43])
    sub_49be1c(edi_2, &ebp_3[-0x84])
    sub_49be1c(ebp_3[3], &ebp_3[-0xc5])
    *ebp_3
    return result
}

// ============================================================
// 函数名称: sub_43e104
// 虚拟地址: 0x43e104
// WARP GUID: 5c3bac7c-0d2e-53da-9b1b-89dcf3ca5f71
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4188ec, sub_4190bc, sub_403248
// [被调用的父级函数]: sub_443300, sub_43d934
// ============================================================

int32_t __fastcallsub_43e104(int32_t arg1, void* arg2, int32_t* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void var_1c
    void var_1c
    __builtin_memcpy(&var_1c, arg1, 0x10)
    void* eax
    
    if (*data_530288 s> 4 || (*data_530288 == 4 && *data_530748 s> 0))
        eax.b = 1
    else
        eax = nullptr
    
    char var_a = eax.b
    int32_t ebx
    ebx.w = 0xfff3
    char eax_4 = sub_403248(sub_4032ac(arg3), 0x438b44)
    
    if ((arg4.w & 1) != 0 && (eax_4 == 0 || (eax_4 != 0 && var_a == 0)))
        sub_4190bc(*(arg2 + 0x14))
        sub_4188ec(*(arg2 + 0xc), 0x8000000e)
    else if (var_a == 0 || (arg4.w & 0x80) == 0)
        sub_4190bc(*(arg2 + 0x14))
        sub_4188ec(*(arg2 + 0xc), 0x80000007)
    else
        sub_4190bc(*(arg2 + 0x14))
        sub_4188ec(*(arg2 + 0xc), 0x80000011)
    
    int32_t var_2c = arg4
    int32_t eax_7
    eax_7.b = eax_4
    return (*(*arg3 + 0x30))(eax_7, var_2c)
}

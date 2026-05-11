// ============================================================
// 函数名称: sub_4ce468
// 虚拟地址: 0x4ce468
// WARP GUID: 54a99c57-f830-5197-b3e2-4d6ba530c81b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4ce3f4, sub_527230, sub_4d5b1c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_4ce468(void* arg1)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    void* edx
    sub_4ce3f4(*(arg1 + 0x1664), edx)
    int32_t var_c
    char var_5
    
    if ((var_c == 1 || var_c == 9) && var_5 != 5)
        int32_t eax_2
        eax_2.b = var_5
        int32_t var_18_1 = sub_4d5b1c(eax_2.b)
        sub_527230(var_c, 6, *data_5301f4, 0, 0, 0)
        *(arg1 + 0xc) = 1
    
    return entry_result
}

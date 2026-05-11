// ============================================================
// 函数名称: sub_434594
// 虚拟地址: 0x434594
// WARP GUID: a4c78c7e-3b10-5317-a415-93127baef703
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43450c, sub_4344b4
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_434594(void* arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t var_8 = edx
    void* eax_1
    eax_1.b = *(*(arg1 + 0x14) + 0x4b)
    int32_t result
    int32_t __saved_ebp
    void* ecx
    
    if (eax_1.b - 1 u>= 2)
        int32_t* var_14_3 = &__saved_ebp
        sub_4344b4(arg2[2] - *(arg1 + 0x18) + 1, arg2[1] + 1, ecx)
        int32_t eax_12 = arg2[1]
        sub_43450c(*arg2 + 2, eax_12 + 3, arg2[2] - *(arg1 + 0x18) - 2, eax_12 + 5, &__saved_ebp)
        int32_t eax_15 = arg2[1]
        result =
            sub_43450c(*arg2 + 2, eax_15 + 6, arg2[2] - *(arg1 + 0x18) - 2, eax_15 + 8, &__saved_ebp)
    else
        int32_t* var_14 = &__saved_ebp
        sub_4344b4(*arg2 + 1, arg2[1] + 1, ecx)
        int32_t eax_5 = *arg2
        sub_43450c(eax_5 + 3, arg2[1] + *(arg1 + 0x18) + 1, eax_5 + 5, arg2[3] - 2, &__saved_ebp)
        int32_t eax_7 = *arg2
        result =
            sub_43450c(eax_7 + 6, arg2[1] + *(arg1 + 0x18) + 1, eax_7 + 8, arg2[3] - 2, &__saved_ebp)
    return result
}

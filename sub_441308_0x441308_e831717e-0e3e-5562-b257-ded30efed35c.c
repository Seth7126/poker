// ============================================================
// 函数名称: sub_441308
// 虚拟地址: 0x441308
// WARP GUID: e831717e-0e3e-5562-b257-ded30efed35c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowLongA
// [内部子函数调用]: sub_42b220, sub_42b1dc, sub_44128c, sub_4318d0
// [被调用的父级函数]: sub_441400, sub_4419f4, sub_441388
// ============================================================

int32_t __convention("regparm")sub_441308(void* arg1)
{
    // 第一条实际指令: char ecx
    char ecx
    char var_a = ecx
    char edx
    char var_9 = edx
    int32_t eax_3
    void* ecx_1
    void* edx_1
    eax_3, ecx_1, edx_1 = GetWindowLongA(sub_4318d0(*(arg1 + 4)), 0xfffffff0)
    eax_3.b = (eax_3 & 0x840000) != 0
    int32_t var_10 = eax_3 & 0x7f
    int32_t __saved_ebp
    
    if (*(arg1 + 0x18) == 1)
        int32_t* var_18 = &__saved_ebp
        edx_1.w = 0x15
        return sub_44128c(0, edx_1, ecx_1) + sub_42b220(*(arg1 + 4))
    
    int32_t* var_18_1 = &__saved_ebp
    edx_1.w = 0x14
    void* eax_5
    eax_5.w = 1
    return sub_44128c(eax_5.w, edx_1, ecx_1) + sub_42b1dc(*(arg1 + 4))
}

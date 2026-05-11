// ============================================================
// 函数名称: sub_442218
// 虚拟地址: 0x442218
// WARP GUID: 05af9532-c697-55f2-9c0c-452e19217379
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42dc78, sub_40fac8, sub_42b220, sub_42b1dc, sub_420b80
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_442218(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_2 = sub_420b80(sub_42b220(arg1), *(arg1[0x7d] + 0x10))
    int32_t eax_2 = sub_420b80(sub_42b220(arg1), *(arg1[0x7d] + 0x10))
    void var_1c
    void* var_24 = &var_1c
    int32_t eax_4 = sub_42b1dc(arg1)
    void* edi = arg1[0x7c]
    sub_40fac8(sub_420b80(*(edi + 0x10), eax_4), neg.d(*(arg1[0x7d] + 0xc)), neg.d(*(edi + 0xc)), 
        var_24, eax_2)
    __builtin_memcpy(arg2, &var_1c, 0x10)
    return arg1
}

// ============================================================
// 函数名称: sub_4aef32
// 虚拟地址: 0x4aef32
// WARP GUID: dea738f9-d880-592c-b3f2-a73866cc3143
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aef32(int32_t arg1, uint16_t arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t eflags
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg3, arg2, eflags)
    *edi = temp0
    void* const* var_4 = &__return_addr
    void* const** var_8 = &var_4
    int32_t var_c = arg1 - 1
    int32_t var_10 = 0xb4004aee
    return arg1 - 1
}

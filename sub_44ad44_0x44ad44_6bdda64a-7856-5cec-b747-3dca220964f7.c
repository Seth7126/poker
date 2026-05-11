// ============================================================
// 函数名称: sub_44ad44
// 虚拟地址: 0x44ad44
// WARP GUID: 6bdda64a-7856-5cec-b747-3dca220964f7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_44ad44(int32_t, int16_t arg2)
{
    // 第一条实际指令: bool c
    bool c
    bool p
    bool a
    bool z
    bool s
    bool d
    bool o
    int32_t var_4 = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
    int32_t eflags
    void* eax
    eax.b = __in_al_dx(arg2, eflags)
    char temp0_1 = eax:1.b
    char temp1 = eax:1.b
    eax:1.b *= 2
    bool c_1 = temp0_1 + temp1 u< temp0_1
    char* entry_ebx
    char temp2 = *entry_ebx
    *entry_ebx = sbb.b(temp2, eax.b, c_1)
    bool c_2 = unimplemented  {sbb byte [ebx], al}
    bool p_1 = unimplemented  {sbb byte [ebx], al}
    bool a_1 = unimplemented  {sbb byte [ebx], al}
    bool o_1 = unimplemented  {sbb byte [ebx], al}
    int32_t var_8 = (o_1 ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (sbb.b(temp2, eax.b, c_1) s< 0 ? 1 : 0) << 7 | (sbb.b(temp2, eax.b, c_1) == 0 ? 1 : 0) << 6
        | (a_1 ? 1 : 0) << 4 | (p_1 ? 1 : 0) << 2 | (c_2 ? 1 : 0)
    *entry_ebx
    eax.b ^= *entry_ebx
    eax.b = *0x50004315
    *entry_ebx = sbb.b(*entry_ebx, eax.b, false)
    *(eax * 2 + 7) = rol.b(*(eax * 2 + 7), 0)
    *(eax - 0x4fef4fee)
    int16_t edx
    edx:1.b = (arg2 + 1):1.b ^ *(eax - 0x4fc7ffb9)
    undefined
}

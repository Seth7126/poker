// ============================================================
// 函数名称: sub_428795
// 虚拟地址: 0x428795
// WARP GUID: ed0441fc-ee52-5aa5-a121-9f9c76cc1cce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_428795(void* arg1, void* arg2, char* arg3, void* arg4 @ ebp, void* arg5 @ esi, char* arg6 @ edi)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    *(arg5 - 0x79) += entry_ebx:1.b
    *(arg1 - 0x6ffbd79) += arg3.b
    char temp0 = *(arg2 + 2)
    *(arg2 + 2) = arg1.b
    arg1.b = temp0
    *(arg6 - 0x78f6ffbe) += arg1
    *arg3 += (arg2 + 3).b
    char temp0_1 = *(arg2 + 3)
    *(arg2 + 3) = arg1
    int16_t ds
    uint32_t var_4 = zx.d(ds)
    char temp0_2 = *(arg2 + 3)
    *(arg2 + 3) = temp0_1
    char* eax_2 = temp0_2 - *(arg6 - 0x78c7ffbe)
    *(arg4 - 0x79) += eax_2.b
    *(arg2 - 0x74) += (arg2 + 5).b
    arg6[0xffffff87] += entry_ebx.b
    arg6[(eax_2 << 2) + 0x42] += arg3:1.b
    *arg3 += eax_2.b
    *eax_2 += eax_2.b
    char temp1 = arg3[0xfffffffd]
    arg3[0xfffffffd] += entry_ebx:1.b
    *(arg5 + 0x11d1c281) = sbb.d(*(arg5 + 0x11d1c281), eax_2, temp1 + entry_ebx:1.b u< temp1)
    *arg6 = eax_2.b
    char* var_8 = eax_2
    char* var_c = arg3
    void* var_10 = arg2 + 7
    int32_t var_14 = entry_ebx
    int32_t* var_18 = &var_14
    void* var_1c = arg4
    void* var_20 = arg5
    void* var_24 = &arg6[1]
    eax_2.b *= 2
    *0x8793e870 = eax_2
    *(eax_2 * 2) += ((arg2 + 7).w + 1):1.b
    *eax_2 += eax_2.b
    *eax_2 += eax_2.b
    eax_2[0x428838] += ((arg2 + 7).w + 1).b
    undefined
}

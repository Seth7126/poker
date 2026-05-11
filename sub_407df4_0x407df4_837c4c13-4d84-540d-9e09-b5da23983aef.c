// ============================================================
// 函数名称: sub_407df4
// 虚拟地址: 0x407df4
// WARP GUID: 837c4c13-4d84-540d-9e09-b5da23983aef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_407df4(char* arg1, uint16_t arg2, char arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[1] += arg2.b
    arg1[1] += (&arg1[1]).b
    *(arg4 + (arg6 << 1) + 0x32f40040) += arg2.b
    arg1[2] += (&arg1[2]).b
    void* eax_2
    eax_2.b = (&arg1[2] ^ *(arg1 + 2)).b + 0x33
    *(eax_2 + 1) += arg3
    char* eax_4 = (eax_2 + 1) ^ *(eax_2 + 1)
    eax_4.b ^= *eax_4
    TEB* fsbase
    *(fsbase + eax_4) ^= eax_4.b
    arg5[0x18600020].b
    char temp1 = *((&eax_4[1] << 1) + 0x4f74754f)
    *((&eax_4[1] << 1) + 0x4f74754f) += arg3
    arg4.w -= 1
    int32_t eflags
    int16_t* edi
    int16_t temp0
    temp0, edi = __insd(arg6, arg2, eflags)
    *edi = temp0
    __outsd(arg2, *arg5, arg5, eflags)
    
    if (temp1 + arg3 u>= temp1)
        jump(0x407e49)
    
    eax_4[1] += (&eax_4[1]).b
    undefined
}

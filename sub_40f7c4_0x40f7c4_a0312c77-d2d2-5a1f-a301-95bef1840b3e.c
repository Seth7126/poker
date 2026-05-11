// ============================================================
// 函数名称: sub_40f7c4
// 虚拟地址: 0x40f7c4
// WARP GUID: a0312c77-d2d2-5a1f-a301-95bef1840b3e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40f7c4(char* arg1, void* arg2, void* arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi, char* arg6 @ edi, int32_t arg7, char arg8)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int16_t entry_ebx
    arg1[(arg6 << 3) + 0x41] += entry_ebx:1.b
    arg1[1] += (&arg1[1]).b
    arg1[1] += (&arg1[1]).b
    arg1[1] += (&arg1[1]).b
    *(arg2 + 0x240040f8) += arg3:1.b
    arg1[2] += (&arg1[2]).b
    char arg_40[0x33000001]
    arg_40[arg4 << 3] += arg3:1.b
    arg8 += arg2.b
    void* eax_2
    eax_2:1.b = (&arg1[3]):1.b + arg3:1.b
    *eax_2 += (arg3 + 1).b
    char* eax_3 = eax_2 ^ *eax_2
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp0 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp0
    
    if (temp0 s>= 0)
        jump(0x40f806)
    
    *eax_3 += entry_ebx.b
    *(arg5 - 1) += (arg3 + 3).b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *(arg3 + 3) += eax_3.b
    *eax_3 += eax_3.b
    eax_3[0xfffffff7] += entry_ebx:1.b
    eax_3[1] += (arg3 + 3).b
    eax_3[1] += (&eax_3[1]).b
    *arg6 += (arg3 + 3).b
    char* ecx_2
    ecx_2:1.b = (arg3 + 3):1.b + entry_ebx:1.b
    undefined
}

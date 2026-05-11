// ============================================================
// 函数名称: sub_436e5c
// 虚拟地址: 0x436e5c
// WARP GUID: d48e0f3f-4b96-5f59-b2f0-86a5bb3c9a53
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_436e5c(char* arg1, int16_t arg2, int16_t arg3, int32_t arg4 @ ebp, char* arg5 @ esi, char* arg6 @ edi, int80_t arg7 @ st0)
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
    *arg6 = *arg5
    void* esi = &arg5[1]
    int32_t eflags
    int32_t esi_1 = __outsb(arg2, *esi, esi, eflags)
    *(esi_1 + (arg4 << 1) + 0x100043) += arg3:1.b
    *arg1 += arg1.b
    arg7 f- fconvert.t(*arg1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + arg2:1.b
    eax.b ^= *eax
    void* entry_ebx
    *(entry_ebx + 1) += arg2:1.b
    (entry_ebx + 1)[esi_1] += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp0 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp0
    
    if (temp0 s< 0)
        undefined
    
    jump(0x436e9e)
}

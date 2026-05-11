// ============================================================
// 函数名称: sub_49135c
// 虚拟地址: 0x49135c
// WARP GUID: 739b33f3-3d69-59a1-ba87-e0e2af3ccbc7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_49135c(char* arg1, int32_t* arg2, int16_t arg3, void* arg4 @ esi) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char temp0 = *arg1
    *arg1 += arg1.b
    arg1.b = adc.b(arg1.b, 0x49, temp0 + arg1.b u< temp0)
    char temp1 = arg1:1.b
    int16_t entry_ebx
    arg1:1.b += entry_ebx.b
    arg1.b = adc.b(arg1.b, 0x49, temp1 + entry_ebx.b u< temp1)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 + 0x14) += arg3:1.b
    char temp2 = arg2.b
    arg2.b += arg3.b - 1
    arg1.b = adc.b(arg1.b, 0x49, temp2 + arg3.b - 1 u< temp2)
    *arg1 += arg3.b - 1
    void* eax
    eax:1.b = (&arg1[*arg1]):1.b + entry_ebx:1.b
    *arg2 -= 0x6c
    *eax += eax.b
    *eax
    int32_t eflags
    char* eax_1
    eax_1.b = __in_al_dx(arg2.w, eflags)
    *__return_addr
    *eax_1 += arg3.b + 1
    *eax_1
    trap(0xd)
}

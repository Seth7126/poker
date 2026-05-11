// ============================================================
// 函数名称: sub_4b9d32
// 虚拟地址: 0x4b9d32
// WARP GUID: 06c4909e-4967-5cc5-9be7-ccc4ddedc85f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b9d32(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, char* arg5 @ edi) __noreturn
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    arg4 ^ *entry_ebx ^ *entry_ebx
    *entry_ebx
    void* edx = arg2 ^ *(entry_ebx + 0x3fff)
    *arg1 += arg1.b
    void* edi = &arg5[1]
    int32_t ecx = arg3 - 1
    int32_t eflags
    
    if (arg5 != 0xffffffff && ecx == 0)
        arg1.b = adc.b(arg1.b, 0xae, *arg5 u< 0xae)
        void* temp2_1
        
        do
            temp2_1 = edi
            edi += 1
            ecx -= 1
        while (temp2_1 == 0xffffffff || ecx != 0)
        int32_t eflags_1
        char temp0_1
        char temp1_1
        temp0_1, temp1_1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
        arg1.b = temp0_1
        arg1:1.b = temp1_1
        *arg1 += arg1.b
        edx.b |= entry_ebx:1.b
        *0xd70a3d70 = arg1
        *0x3ffd = arg1
        trap(0xcc)
    
    *(edx + 0x1f) += arg1.b
    int32_t var_4 = ecx
    int32_t eflags_2
    char temp0_2
    char temp1_2
    temp0_2, temp1_2, eflags_2 = __aas(0x1e, 0, eflags)
    char* eax
    eax.b = temp0_2
    eax:1.b = temp1_2
    *eax += eax.b
    *eax += eax.b
    eax.b = 0x41
    eax.b = __in_al_dx(edx.w, eflags_2)
    int32_t var_8 = ecx
    *0x3ffd -= 3
    int32_t eflags_3
    char temp0_4
    char temp1_3
    temp0_4, temp1_3, eflags_3 = __aas(0xfe, 0, eflags_2)
    char* eax_1
    eax_1.b = temp0_4
    eax_1:1.b = temp1_3
    *eax_1 += eax_1.b
    eax_1.b = *0x99999a3f
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(eax_1)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(eax_2)
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = sx.q(eax_3)
    int32_t eax_5
    int32_t edx_4
    edx_4:eax_5 = sx.q(eax_4)
    char* eax_6
    int32_t edx_5
    edx_5:eax_6 = sx.q(eax_5)
    int32_t eflags_4
    char temp0_5
    char temp1_4
    temp0_5, temp1_4, eflags_4 = __aas(eax_6.b, eax_6:1.b, eflags_3)
    eax_6.b = temp0_5
    eax_6:1.b = temp1_4
    *eax_6 += eax_6.b
    trap(0xcc)
}

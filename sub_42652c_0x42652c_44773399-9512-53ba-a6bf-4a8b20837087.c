// ============================================================
// 函数名称: sub_42652c
// 虚拟地址: 0x42652c
// WARP GUID: 44773399-9512-53ba-a6bf-4a8b20837087
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4265b0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42652c(char* arg1, void* arg2, int16_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ esi, uint8_t* arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t* edx = arg2 + 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[0x10004265] += arg1.b
    *arg1 += arg1.b
    void arg_40
    *(&arg_40 + (arg4 << 3)) += arg3:1.b
    arg1:1.b += edx:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += edx:1.b
    entry_ebx[arg5] += (&arg1[1]).b
    arg1[2] += arg3.b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp1
    int32_t eflags
    
    if (temp1 s>= 0)
        *edx
        eax_2.b = 0x6a
        *(edx + 1) += arg3.b
        void* const* var_4_1 = &__return_addr
        uint8_t temp0_1
        temp0_1, arg6 = __insb(arg6, (edx + 1).w, eflags)
        *arg6 = temp0_1
        *arg6 += 0x6a
        edx.b = (edx + 2).b | entry_ebx[(eax_2 << 1) + 0x6d]
        *(eax_2 + 0x62)
        
        if (edx.b == 0)
            int32_t result = sub_4265b0(&entry_ebx[1])
            entry_ebx[0xe] = 1
            return result
    
    eax_2.b += eax_2:1.b
    eax_2.b = __in_al_dx(edx.w + 1, eflags)
    eax_2[1] += (&eax_2[1]).b
    *arg6 += (&eax_2[1]).b
    uint8_t* edi
    uint8_t temp0_3
    temp0_3, edi = __insb(arg6, edx.w + 1, eflags)
    *edi = temp0_3
    *(eax_2 + 0x63)
    return sub_4265b0(&eax_2[1]) __tailcall
}

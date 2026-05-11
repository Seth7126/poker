// ============================================================
// 函数名称: sub_4aa278
// 虚拟地址: 0x4aa278
// WARP GUID: 32d67e2b-88c1-59f2-9810-d906afe5af93
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa278(char* arg1, char* arg2, char arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6 @ edi)
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
    arg2[0xc004a] = arg2[0xc004a]
    *arg2 += arg2.b
    void* edx = arg2 - 1
    arg1:1.b += edx:1.b
    arg1.b ^= *arg1
    char* entry_ebx
    *entry_ebx += edx:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += arg3
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp0 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp0
    int32_t eflags
    uint16_t* esi_4
    bool cond:1
    
    if (temp0 s< 0)
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        *eax_2 += eax_2.b
        eax_2.b -= 0xa3
        edx -= 1
        *(eax_2 * 2) += arg3
        *eax_2 += eax_2.b
        void* eax_5
        eax_5.b = 0xa1 ^ *0xf4004aa1
        *entry_ebx += edx:1.b
        *(entry_ebx + arg5) += (eax_5 + 1).b
        *(eax_5 + 2) += arg3
        char* eax_8 = (eax_5 + 2) ^ *(eax_5 + 2)
        eax_8.b ^= *eax_8
        char temp1_1 = *(fsbase + eax_8) ^ eax_8.b
        *(fsbase + eax_8) = temp1_1
        
        if (temp1_1 s< 0)
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            *eax_8 += eax_8.b
            int16_t fs
            *(entry_ebx + 0xc004a) = fs
            *eax_8 += eax_8.b
            void* eax_10
            eax_10.b = 0xa1 ^ *0xf4004aa1
            *entry_ebx += edx:1.b
            *(entry_ebx + arg5) += (eax_10 + 1).b
            *(eax_10 + 2) += arg3
            char* eax_13 = (eax_10 + 2) ^ *(eax_10 + 2)
            eax_13.b ^= *eax_13
            char temp4 = *(fsbase + eax_13) ^ eax_13.b
            *(fsbase + eax_13) = temp4
            
            if (temp4 s>= 0)
                jump(0x4aa386)
            
            *eax_13 += eax_13.b
            *eax_13 += eax_13.b
            *eax_13 += eax_13.b
            *eax_13 += eax_13.b
            *eax_13 += eax_13.b
            *eax_13 += eax_13.b
            *eax_13 += eax_13.b
            undefined
        
        void* eax_9
        eax_9.b = (&eax_8[1]).b * 2
        *eax_9
        *eax_9 ^= eax_9.b
        *(arg4 + 0x49) = adc.d(*(arg4 + 0x49), eax_9, false)
        char* var_4_1 = entry_ebx
        char* var_8_1 = entry_ebx
        int32_t esi_3 = __outsd(edx.w, *arg5, arg5, eflags)
        esi_4 = esi_3 - 1
        cond:1 = esi_3 == 1
    else
        void* eax_3
        eax_3.b = (&eax_2[1]).b * 2
        *eax_3
        *eax_3 ^= eax_3.b
        char* var_4 = entry_ebx
        char* var_8 = entry_ebx
        int32_t esi = __outsd(edx.w, *arg5, arg5, eflags)
        
        if (entry_ebx == 0xffffffff)
            __outsd(edx.w, *(esi - 1), esi - 1, eflags)
            
            if (esi == 1)
                jump(0x4aa31d)
            
            jump(0x4aa2d1)
        
        esi_4 = esi - 1
        cond:1 = esi == 1
    
    __outsd(edx.w, *esi_4, esi_4, eflags)
    
    if (cond:1)
        jump(0x4aa38f)
    
    jump(0x4aa33c)
}

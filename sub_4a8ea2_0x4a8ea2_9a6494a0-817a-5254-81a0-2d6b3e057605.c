// ============================================================
// 函数名称: sub_4a8ea2
// 虚拟地址: 0x4a8ea2
// WARP GUID: 9a6494a0-817a-5254-81a0-2d6b3e057605
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4994c8, sub_415cb4, sub_4030d0, sub_404078, sub_49e5d4, sub_4a3090, sub_4a30d8, sub_415cac, sub_405ae8, sub_415c94, sub_49d858, sub_4a8ef8, sub_40b4b0, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a8ea2(char* arg1, int32_t arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, int32_t arg6, int32_t* (__stdcall* arg7)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7), int32_t arg8, int32_t arg9, int32_t arg10, char* arg11)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    *(arg1 * 2) += entry_ebx:1.b
    char temp1 = *arg1
    *arg1 += arg1.b
    arg1.b = sbb.b(arg1.b, 0xf7, temp1 + arg1.b u< temp1)
    void* eax
    eax:1.b = (&arg1[1]):1.b + (arg2 - 1):1.b
    eax.b ^= *eax
    *entry_ebx += (arg2 - 1):1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3.b
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp2 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp2
    
    if (temp2 s>= 0)
        void* eax_4
        eax_4:1.b = (&eax_3[1]):1.b + (&eax_3[1]).b
        int32_t arg_4
        *(&arg_4 + (__return_addr << 1)) += (arg3 + 1):1.b
        *(eax_4 + 0xe004a95) += eax_4.b
        *eax_4 += eax_4.b
        *eax_4 += eax_4.b
        *(arg3 + 2) += eax_4.b
        *eax_4 += eax_4.b
        *(eax_4 + arg2 - 1 + 0x340040) += __return_addr:1.b
        char temp3_1 = *eax_4
        *eax_4 += eax_4.b
        bool c_1 = temp3_1 + eax_4.b u< temp3_1
        char temp4_1 = *((arg3 + 2) * 3 + 0x64)
        *((arg3 + 2) * 3 + 0x64) = adc.b(temp4_1, (arg2 - 1).b, c_1)
        int32_t eflags
        uint16_t* esi = __outsd((arg2 - 1).w, *arg5, arg5, eflags)
        uint16_t* esi_1 = __outsb((arg2 - 1).w, *esi, esi, eflags)
        uint32_t esi_2 = __outsb((arg2 - 1).w, *esi_1, esi_1, eflags)
        int32_t eflags_1
        int32_t gsbase
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(gsbase + &arg_4 + ((arg2 - 1) << 1) + 0x68), esi_2.w)
        *(gsbase + &arg_4 + ((arg2 - 1) << 1) + 0x68) = temp0_1
        
        if (adc.b(temp4_1, (arg2 - 1).b, c_1) u< temp4_1
                || (c_1 && adc.b(temp4_1, (arg2 - 1).b, c_1) == temp4_1))
            *(__return_addr + 0x408b0846) &= (arg3 + 2).b
            *(*(arg4 - 4) + 0x30) = *(eax_4 + 0x68)
            sub_415c94(*(arg4 - 4))
            uint32_t edi_2
            
            if (sub_4a30d8() == 0)
                edi_2 = 0x7d
            else
                edi_2 = sub_49d858(*(*data_530a6c + 0x28), 0x7d)
            
            if ((__return_addr + 1).b != 0)
                esi_2 = edi_2 + 1
                
                if (add_overflow(edi_2, 1))
                    sub_403010()
                    noreturn
            
            while (edi_2 s< esi_2)
                sub_49e5d4(edi_2)
                uint32_t temp6_1 = esi_2
                esi_2 -= edi_2
                
                if (add_overflow(temp6_1, neg.d(edi_2)))
                    sub_403010()
                    noreturn
                
                if ((__return_addr + 1).b != 0)
                    esi_2 = edi_2 + 1
                    
                    if (add_overflow(edi_2, 1))
                        sub_403010()
                        noreturn
                
                sub_4a3090(0, 1)
                
                if (*(*(arg4 - 4) + 0xc) != 0)
                    esi_2 = 0
                    break
            
            sub_49e5d4(esi_2)
            
            if (*(*(arg4 - 4) + 0xc) == 0)
                sub_415cac(*(arg4 - 4))
                (*(**(*(arg4 + 8) - 4) + 0x40))()
                sub_415cb4(*(arg4 - 4))
                sub_405ae8(data_530590, arg4 - 8)
                int32_t edx_7
                edx_7.b = 1
                sub_40b4b0(sub_498c80+0x48, edx_7, *(arg4 - 8))
                sub_403828()
                noreturn
            
            if (sub_404078(*(*(arg4 - 4) + 0x34)) s<= 0)
                fsbase->NtTib.ExceptionList = arg_4
                arg7 = sub_4a90a7
                return sub_4030d0(*(arg4 - 4))
            
            int32_t ebx_3 = *(*(arg4 - 4) + 0x38)
            int32_t edx_4
            
            if (ebx_3 == 0)
                edx_4.b = 1
                sub_40b4b0(sub_498c80+0xa8, edx_4, *(*(arg4 - 4) + 0x34))
                sub_403828()
                noreturn
            
            edx_4.b = 1
            sub_4994c8(ebx_3, edx_4, sub_498fba+0x4b2, *(*(arg4 - 4) + 0x34))
            sub_403828()
            noreturn
        
        eax_3 = arg11
    
    return sub_4a8ef8(eax_3) __tailcall
}

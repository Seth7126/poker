// ============================================================
// 函数名称: sub_40e812
// 虚拟地址: 0x40e812
// WARP GUID: 569bc232-130f-5b17-a81c-a455f7886745
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e812, sub_4ce8e2, sub_4ce88a, sub_40e8c2, sub_4ce832
// [被调用的父级函数]: sub_40e812, sub_40e6c4
// ============================================================

int80_t __convention("regparm")sub_40e812(void* arg1, void* arg2 @ ebp, long double arg3 @ st0)
{
    // 第一条实际指令: char* eax_6
    char* eax_6
    void* ecx_1
    
    while (true)
        char* eax
        eax.b = (arg1 + 1).b * 2
        *eax ^= eax.b
        eax.b |= *(arg2 + 0x52)
        int32_t* esp
        void* edi_1 = *esp
        uint16_t* esi_1 = esp[1]
        void* ebp = esp[2]
        char* ebx_1 = esp[4]
        void* edx_1 = esp[5]
        ecx_1 = esp[6]
        char* eax_1 = esp[7]
        esp = &esp[8]
        arg2 = ebp + 1
        TEB* fsbase
        int80_t x87_r1
        
        if (eax.b u< 0)
            while (true)
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                eax_1.b += ecx_1.b
                eax_1, ecx_1, edx_1 = sub_4ce8e2(eax_1.b, edx_1, ecx_1, arg2, esi_1, edi_1)
            label_40e8a2:
                char temp1_1 = *eax_1
                *eax_1 += eax_1.b
                
                if (temp1_1 != neg.b(eax_1.b))
                    break
                
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
            
            void* eax_7
            eax_7:1.b = (&eax_1[1]):1.b + edx_1:1.b
            eax_7.b ^= *eax_7
            *ebx_1 += edx_1:1.b
            *(ebx_1 + esi_1) += (eax_7 + 1).b
            *(eax_7 + 2) += ecx_1.b
            eax_6 = (eax_7 + 2) ^ *(eax_7 + 2)
            eax_6.b ^= *eax_6
            char temp3_1 = *(fsbase + eax_6) ^ eax_6.b
            *(fsbase + eax_6) = temp3_1
            
            if (temp3_1 s>= 0)
                return sub_40e8c2(eax_6, edx_1, edi_1, arg3, x87_r1) __tailcall
            
            break
        
        int32_t eflags
        esi_1 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
        
        if (eax.b u< 0)
            char temp2_1 = *(fsbase + eax_1) ^ eax_1.b
            *(fsbase + eax_1) = temp2_1
            void* eax_13
            
            if (temp2_1 s>= 0)
                void* eax_12
                eax_12.b = (&eax_1[1]).b * 2
                *eax_12 ^= eax_12.b
                eax_13 = eax_12 | *(arg2 + 0x46)
                *(arg2 + 0x72)
                arg2 = *(arg2 + 0x72) * 0x6f727245
                bool c_1 = unimplemented  {imul ebp, dword [ebp+0x72], 0x6f727245}
                
                if (c_1)
                    goto label_40e7e5
                
                eax_1, ecx_1, edx_1 = sub_40e812()
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
            
            char temp4_1 = *eax_1
            *eax_1 += eax_1.b
            eax_1.b = sbb.b(eax_1.b, ecx_1:1.b, temp4_1 + eax_1.b u< temp4_1)
            eax_13 = &eax_1[1]
            *(eax_13 * 2) += ecx_1.b
            
            while (true)
                char temp6_1 = *eax_13
                *eax_13 += eax_13.b
                
                if (temp6_1 != neg.b(eax_13.b))
                    break
                
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
            label_40e7e5:
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += eax_13.b
                *eax_13 += ebx_1.b
                eax_13, ecx_1, edx_1 = sub_4ce832(eax_13, edx_1.w, ecx_1, arg2, esi_1, edi_1)
            
            void* eax_14
            eax_14:1.b = (eax_13 + 1):1.b + edx_1:1.b
            eax_14.b ^= *eax_14
            *ebx_1 += edx_1:1.b
            *(ebx_1 + esi_1) += (eax_14 + 1).b
            *(eax_14 + 2) += ecx_1.b
            arg1 = (eax_14 + 2) ^ *(eax_14 + 2)
            arg1.b ^= *arg1
            char temp7_1 = *(fsbase + arg1) ^ arg1.b
            *(fsbase + arg1) = temp7_1
            
            if (temp7_1 s< 0)
                while (true)
                    char temp8_1 = *arg1
                    *arg1 += arg1.b
                    
                    if (not(add_overflow(temp8_1, arg1.b)))
                        break
                    
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
                
                goto label_40e846
        else
            if (not(add_overflow(ebp, 1)))
                arg1 = &eax_1[1]
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                *arg1 += arg1.b
                char i
                
                do
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *arg1 += arg1.b
                    *(arg1 - 0x18) += edx_1:1.b
                label_40e846:
                    arg1 += 1
                    *(arg1 * 2) += ecx_1.b
                label_40e84a:
                    i = *arg1
                    *arg1 += arg1.b
                while (i == neg.b(arg1.b))
                void* eax_2
                eax_2:1.b = (arg1 + 1):1.b + edx_1:1.b
                eax_2.b ^= *eax_2
                *ebx_1 += edx_1:1.b
                *(ebx_1 + esi_1) += (eax_2 + 1).b
                *(eax_2 + 2) += ecx_1.b
                eax_1 = (eax_2 + 2) ^ *(eax_2 + 2)
                eax_1.b ^= *eax_1
                char temp10_1 = *(fsbase + eax_1) ^ eax_1.b
                *(fsbase + eax_1) = temp10_1
                
                if (temp10_1 s< 0)
                label_40e89a:
                    *eax_1 += eax_1.b
                    *(esp - 4) = arg2
                    arg2 = esp - 4
                    eax_1.b = eax_1.b
                    goto label_40e8a2
                
                void* eax_5
                eax_5.b = (&eax_1[1]).b * 2
                *eax_5 ^= eax_5.b
                eax_6 = eax_5 | *(arg2 + 0x57)
                
                if (eax_6 u< 0)
                    goto label_40e8de
                
                if (eax_6 == 0)
                    *eax_6 += eax_6.b
                label_40e8de:
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                label_40e8ec:
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    *eax_6 += eax_6.b
                    break
                
                arg2 += 1
                
                if (eax_6 u< 0)
                    goto label_40e8ec
                
                esi_1 = __outsd(edx_1.w, *esi_1, esi_1, eflags)
                
                if (eax_6 u< 0)
                    arg1, ecx_1, edx_1 = sub_4ce88a(arg2)
                    goto label_40e84a
                
                long double st0_1
                st0_1, eax_1, ecx_1, edx_1 = sub_40e8c2(eax_6, edx_1, edi_1, arg3, x87_r1)
                arg3 = st0_1
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                *eax_1 += eax_1.b
                goto label_40e89a
            
            arg1 = &eax_1[1]
            *(arg1 + 0x30) += ebx_1:1.b
    
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    *eax_6 += eax_6.b
    eax_6.b &= 0xe9
    *(&eax_6[1] * 2) += ecx_1.b
    eax_6[1] += (&eax_6[1]).b
    *((eax_6 + 1) * 3)
    trap(0xd)
}

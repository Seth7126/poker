// ============================================================
// 函数名称: sub_47c160
// 虚拟地址: 0x47c160
// WARP GUID: 61d0e61a-3335-5a0d-9154-1c8c6bf7175c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_477368, sub_476d24, sub_402b3c, sub_402b4c, sub_402c90, sub_4779d4, sub_477844, sub_40401c, sub_403df8, sub_40287c, sub_46fd7c, sub_478234, sub_46e24c, sub_403010
// [被调用的父级函数]: sub_470014, sub_4702a8, sub_4700e1, sub_470048
// ============================================================

void* __convention("regparm")sub_47c160(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_74 = ebx
    int32_t esi
    int32_t var_78 = esi
    int32_t edi
    int32_t var_7c = edi
    int32_t var_54 = 0
    int32_t var_c = arg3
    int32_t* var_80 = &var_4
    int32_t (* var_84)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    arg1[0x2a6] = arg2
    arg1[0x2a7] = var_c
    arg1[0x2a8] = arg4
    int16_t top_1
    
    for (int32_t i = 1; i != 0xc; i += 1)
        if (arg1[0x33c] != 0)
            if (arg1[0x489].b == 0)
                if (i s> 3)
                    arg1[0x389]
                    bool o_4 = unimplemented  {imul eax, dword [esi+0xe24], 0x5}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    if (i - 1 u> 0xa)
                        sub_403008()
                        noreturn
                    
                    if (i - 1 u> 0xa)
                        sub_403008()
                        noreturn
                    
                    arg1[i + 0x299] = fconvert.s(float.t(arg1[0x389] * 5) / fconvert.t(arg1[0x473])
                        / fconvert.t(5f) * fconvert.t(0.5f) + fconvert.t(arg1[i + 0x299]))
                else
                    if (i - 1 u> 2)
                        sub_403008()
                        noreturn
                    
                    arg1[i + 0x387]
                    bool o_3 = unimplemented  {imul eax, dword [esi+ebx*4+0xe1c], 0x5}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    if (i - 1 u> 0xa)
                        sub_403008()
                        noreturn
                    
                    if (i - 1 u> 0xa)
                        sub_403008()
                        noreturn
                    
                    arg1[i + 0x299] = fconvert.s(float.t(arg1[i + 0x387] * 5) / fconvert.t(arg1[0x473])
                        / fconvert.t(5f) * fconvert.t(0.5f) + fconvert.t(arg1[i + 0x299]))
        else if (i s> 3)
            arg1[0x389]
            bool o_2 = unimplemented  {imul edx, dword [esi+0xe24], 0x5}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (i - 1 u> 0xa)
                sub_403008()
                noreturn
            
            if (i - 1 u> 0xa)
                sub_403008()
                noreturn
            
            arg1[i + 0x299] = fconvert.s(
                float.t(arg1[0x389] * 5) / fconvert.t(arg1[0x473]) / fconvert.t(5f)
                + fconvert.t(arg1[i + 0x299]))
        else
            if (i - 1 u> 2)
                sub_403008()
                noreturn
            
            arg1[i + 0x387]
            bool o_1 = unimplemented  {imul edx, dword [esi+ebx*4+0xe1c], 0x5}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (i - 1 u> 0xa)
                sub_403008()
                noreturn
            
            if (i - 1 u> 0xa)
                sub_403008()
                noreturn
            
            arg1[i + 0x299] = fconvert.s(
                float.t(arg1[i + 0x387] * 5) / fconvert.t(arg1[0x473]) / fconvert.t(5f)
                + fconvert.t(arg1[i + 0x299]))
        
        if (i - 1 u> 0xa)
            sub_403008()
            noreturn
        
        long double x87_r7_19 = fconvert.t(arg1[i + 0x299])
        long double temp3_1 = fconvert.t(180f)
        x87_r7_19 - temp3_1
        int32_t eax_2
        eax_2.w = (x87_r7_19 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_19, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_19 == temp3_1 ? 1 : 0) << 0xe
        
        if (not(test_bit(eax_2:1.b, 6)) && not(test_bit(eax_2:1.b, 0)))
            if (i - 1 u> 0xa)
                sub_403008()
                noreturn
            
            arg1[i + 0x299] = 0xc3340000
        
        if (i - 1 u> 0xa)
            sub_403008()
            noreturn
        
        long double x87_r7_20 = fconvert.t(arg1[i + 0x299])
        long double temp7_1 = fconvert.t(-180f)
        x87_r7_20 - temp7_1
        top_1 = 0
        eax_2.w = (x87_r7_20 < temp7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_20, temp7_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == temp7_1 ? 1 : 0) << 0xe
        
        if (test_bit(eax_2:1.b, 0))
            if (i - 1 u> 0xa)
                sub_403008()
                noreturn
            
            arg1[i + 0x299] = 0xc3340000
    
    if (arg1[0x228] == arg1[0x434])
        arg3 = sub_46e24c(arg1, arg1, edi)
    else if (arg1[0x228] == arg1[0x435])
        arg3 = sub_46e24c(arg1, arg1, edi)
    
    char var_35 = 1
    arg1[0x268] = arg2
    arg1[0x269] = var_c
    int32_t eax_13 = arg1[0x2ad]
    
    if (eax_13 s> 0)
        int32_t var_3c_1 = eax_13
        int32_t var_18_1 = 1
        int32_t i_1
        
        do
            bool o_5 = unimplemented  {imul eax, eax, 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            if (*(arg1[0x2ac] + ebp_1[-5] * 0x81c0 + 1) != 0)
                bool o_6 = unimplemented  {imul eax, eax, 0x1038}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (*(arg1[0x2ac] + ebp_1[-5] * 0x81c0) != 0)
                    if (ebp_1[-5] == arg1[0x228])
                    label_47c462:
                        bool o_8 = unimplemented  {imul eax, eax, 0x1038}
                        
                        if (o_8)
                            sub_403010()
                            noreturn
                        
                        void* edi_1 = arg1[0x2ac] + ebp_1[-5] * 0x81c0
                        void* edx_10
                        edx_10.w = *(edi_1 + 0x8130)
                        int32_t eax_22
                        eax_22.w = *(edi_1 + 0x8136)
                        int32_t eax_23 = sx.d(edx_10.w)
                        
                        if (eax_23 s> 0)
                            ebp_1[-0xf] = eax_23
                            int32_t ebx_17 = 1
                            int32_t j
                            
                            do
                                if (ebx_17 - 1 u> 0x75)
                                    sub_403008()
                                    noreturn
                                
                                int32_t ebx_19 = ebx_17
                                bool o_9 = unimplemented  {imul eax, ebx, 0x23}
                                
                                if (o_9)
                                    sub_403010()
                                    noreturn
                                
                                int32_t eax_24
                                eax_24.b = *(edi_1 + ebx_19 * 0x118 - 0xf8)
                                char temp13_1 = eax_24.b
                                eax_24.b -= 5
                                
                                if (temp13_1 != 5)
                                    eax_24.b -= 0xd
                                    char temp15_1 = eax_24.b
                                    eax_24.b -= 2
                                    
                                    if (temp15_1 u>= 2)
                                        long double st0
                                        
                                        if (arg1[0x478] == 0xa)
                                            if (ebx_19 - 1 u> 0x75)
                                                sub_403008()
                                                noreturn
                                            
                                            bool o_10 = unimplemented  {imul eax, ebx, 0x23}
                                            
                                            if (o_10)
                                                sub_403010()
                                                noreturn
                                            
                                            if (*(edi_1 + ebx_19 * 0x118 - 0xf8) == 0xa)
                                                if (ebx_19 - 1 u> 0x75)
                                                    sub_403008()
                                                    noreturn
                                                
                                                bool o_11 = unimplemented  {imul eax, ebx, 0x23}
                                                
                                                if (o_11)
                                                    sub_403010()
                                                    noreturn
                                                
                                                if (*(edi_1 + ebx_19 * 0x118 - 8) == 8)
                                                    if (ebx_19 - 1 u> 0x75)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    bool o_12 = unimplemented  {imul edx, ebx, 0x23}
                                                    
                                                    if (o_12)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_40401c(arg3, edi_1 + ebx_19 * 0x118 - 0xf0)
                                                    ebp_1, edi_1 = sub_46fd7c(arg1, ebp_1[-0x14])
                                                    unimplemented  {fmul st0, dword [0x47d084]}
                                                    ebp_1[-5]
                                                    bool o_13 = unimplemented  {imul eax, eax, 0x1038}
                                                    
                                                    if (o_13)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    if (ebx_19 - 1 u> 0x75)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    bool o_14 = unimplemented  {imul edx, ebx, 0x23}
                                                    
                                                    if (o_14)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    unimplemented  {fmul st0, dword [eax+edx*8-0x74]}
                                                    unimplemented  {fadd dword [0x47d088]}
                                                    int32_t eax_30
                                                    int32_t edx_14
                                                    eax_30, edx_14 = sub_402b4c(st0)
                                                    top_1 += 1
                                                    
                                                    if (eax_30 s>> 0x1f != edx_14)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    if (ebx_19 - 1 u> 0x75)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    bool o_15 = unimplemented  {imul edx, ebx, 0x23}
                                                    
                                                    if (o_15)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    *(edi_1 + ebx_19 * 0x118 - 0x9c) = eax_30
                                                    
                                                    if (ebx_19 - 1 u> 0x75)
                                                        sub_403008()
                                                        noreturn
                                                    
                                                    bool o_16 = unimplemented  {imul eax, ebx, 0x23}
                                                    
                                                    if (o_16)
                                                        sub_403010()
                                                        noreturn
                                                    
                                                    sub_40287c(1, 1, edi_1 + ebx_19 * 0x118 - 0xf0, 
                                                        &ebp_1[-0x1b])
                                                    int32_t ecx
                                                    ecx.b = ebp_1[-0x1b].b
                                                    arg3, edx_10 =
                                                        sub_402c90(&ebp_1[-0x1b], 0x47d08c, ecx + 1)
                                                    
                                                    if (ecx == 0xffffffff)
                                                        if (ebx_19 - 1 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        int32_t eax_37 = ebx_19 * 0x23
                                                        bool o_17 = unimplemented  {imul eax, ebx, 0x23}
                                                        
                                                        if (o_17)
                                                            sub_403010()
                                                            noreturn
                                                        
                                                        int32_t temp30_1 =
                                                            *(edi_1 + (eax_37 << 3) - 0x9c)
                                                        *(edi_1 + (eax_37 << 3) - 0x9c) += 0x28
                                                        
                                                        if (add_overflow(temp30_1, 0x28))
                                                            sub_403010()
                                                            noreturn
                                        
                                        if (ebx_19 - 1 u> 0x75)
                                            sub_403008()
                                            noreturn
                                        
                                        int32_t eax_38 = ebx_19 * 0x23
                                        bool o_19 = unimplemented  {imul eax, ebx, 0x23}
                                        
                                        if (o_19)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(edi_1 + (eax_38 << 3) - 0xf1) != 0)
                                            if (ebx_19 - 1 u> 0x75)
                                                sub_403008()
                                                noreturn
                                            
                                            *(edi_1 + (eax_38 << 3) - 0xf2)
                                        
                                        if (ebx_19 - 1 u> 0x75)
                                            sub_403008()
                                            noreturn
                                        
                                        ebx_19 = ebx_19
                                        int32_t eax_39 = ebx_19 * 0x23
                                        bool o_20 = unimplemented  {imul eax, ebx, 0x23}
                                        
                                        if (o_20)
                                            sub_403010()
                                            noreturn
                                        
                                        if (*(edi_1 + (eax_39 << 3) - 0xf2) != 0)
                                            if (ebx_19 - 1 u> 0x75)
                                                sub_403008()
                                                noreturn
                                            
                                            if (*(edi_1 + (eax_39 << 3) - 0xf1) != 0)
                                                if (ebx_19 - 1 u> 0x75)
                                                    sub_403008()
                                                    noreturn
                                                
                                                edx_10.b = *(edi_1 + (eax_39 << 3) - 8)
                                                char temp17_1 = edx_10.b
                                                edx_10.b -= 7
                                                
                                                if (temp17_1 != 7)
                                                    char temp18_1 = edx_10.b
                                                    edx_10.b -= 2
                                                    
                                                    if (temp18_1 != 2)
                                                        if (ebx_19 - 1 u> 0x75)
                                                            sub_403008()
                                                            noreturn
                                                        
                                                        ebp_1[-0x10] = edi_1 + (eax_39 << 3) - 0xf8
                                                        ebp_1[-6] = ebx_19
                                                        
                                                        if (ebp_1[-6] s> 0)
                                                            if (add_overflow(0, neg.d(arg1[0x4d4])))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-9] = 0 - arg1[0x4d4]
                                                            ebp_1[-0xa] = 0
                                                            int16_t top_9
                                                            
                                                            if (*(arg1 + 0x97d) != 0)
                                                                int32_t eax_52 = ebp_1[-1]
                                                                
                                                                if (add_overflow(eax_52, ebp_1[-9]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x13] = eax_52 + ebp_1[-9]
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x4c]}
                                                                unimplemented  {fild st0, dword [esi
                                                                    +0x894]}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x47d090]}
                                                                int32_t eax_54
                                                                int32_t edx_18
                                                                eax_54, edx_18 = sub_402b4c(st0)
                                                                
                                                                if (eax_54 s>> 0x1f != edx_18)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                ebp_1[-3] = eax_54
                                                                int32_t eax_57 = ebp_1[-2]
                                                                
                                                                if (add_overflow(eax_57, ebp_1[-0xa]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x13] = eax_57 + ebp_1[-0xa]
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x4c]}
                                                                unimplemented  {fild st0, dword [esi
                                                                    +0x898]}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x47d094]}
                                                                int32_t eax_59
                                                                int32_t edx_19
                                                                eax_59, edx_19 = sub_402b4c(st0)
                                                                top_9 = top_1
                                                                
                                                                if (eax_59 s>> 0x1f != edx_19)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                ebp_1[-4] = eax_59
                                                            else
                                                                ebp_1[-9] = 0
                                                                ebp_1[-0xa] = 0
                                                                int32_t eax_42 = ebp_1[-1]
                                                                
                                                                if (add_overflow(eax_42, ebp_1[-9]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x13] = eax_42 + ebp_1[-9]
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x4c]}
                                                                unimplemented  {fild st0, dword [esi
                                                                    +0x894]}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x47d090]}
                                                                int32_t eax_44
                                                                int32_t edx_16
                                                                eax_44, edx_16 = sub_402b4c(st0)
                                                                
                                                                if (eax_44 s>> 0x1f != edx_16)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                ebp_1[-3] = eax_44
                                                                int32_t eax_47 = ebp_1[-2]
                                                                
                                                                if (add_overflow(eax_47, ebp_1[-0xa]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x13] = eax_47 + ebp_1[-0xa]
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x4c]}
                                                                unimplemented  {fild st0, dword [esi
                                                                    +0x898]}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fdivp st1, st0}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x47d094]}
                                                                int32_t eax_49
                                                                int32_t edx_17
                                                                eax_49, edx_17 = sub_402b4c(st0)
                                                                top_9 = top_1
                                                                
                                                                if (eax_49 s>> 0x1f != edx_17)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                ebp_1[-4] = eax_49
                                                            
                                                            bool o_26 =
                                                                unimplemented  {imul eax, eax, 0x1038}
                                                            
                                                            if (o_26)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_64 = sx.d(
                                                                *(arg1[0x2ac] + ebp_1[-5] * 0x81c0 + 2))
                                                            int32_t edx_22 = sx.d(*(ebp_1[-0x10] + 2))
                                                            
                                                            if (add_overflow(eax_64, edx_22))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-7] = eax_64 + edx_22
                                                            bool o_28 =
                                                                unimplemented  {imul eax, eax, 0x1038}
                                                            
                                                            if (o_28)
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_68 = sx.d(
                                                                *(arg1[0x2ac] + ebp_1[-5] * 0x81c0 + 4))
                                                            int32_t edx_25 = sx.d(*(ebp_1[-0x10] + 4))
                                                            
                                                            if (add_overflow(eax_68, edx_25))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            ebp_1[-0x13] = eax_68 + edx_25
                                                            unimplemented  {fild st0, dword [ebp-0x4c]}
                                                            int32_t eax_70
                                                            eax_70, edx_10 = sub_402b4c(st0)
                                                            top_1 = top_9
                                                            
                                                            if (eax_70 s>> 0x1f != edx_10)
                                                                sub_403008()
                                                                noreturn
                                                            
                                                            ebp_1[-8] = eax_70
                                                            ebp_1[-0xb] = 0
                                                            ebp_1[-0xc] = 0
                                                            char* eax_73
                                                            eax_73.b = *ebp_1[-0x10]
                                                            eax_73.b -= 8
                                                            char temp35_1 = eax_73.b
                                                            eax_73.b -= 2
                                                            
                                                            if (temp35_1 u< 2 && ebp_1[5] == 1
                                                                    && *(ebp_1[-0x10] + 0x56) == 2)
                                                                ebp_1[-0xb] = 0x1a
                                                                ebp_1[-0xc] = 0x1a
                                                            
                                                            char* eax_75
                                                            eax_75.b = *ebp_1[-0x10]
                                                            
                                                            if (eax_75.b == 0xa
                                                                    && *(ebp_1[-0x10] + 0xf0) == 8)
                                                                ebp_1[-0xb] = 0xffffffe8
                                                            
                                                            if (eax_75.b == 0xa && ebp_1[5] == 1
                                                                    && *(ebp_1[-0x10] + 0x56) == 2)
                                                                void* eax_77
                                                                eax_77.b = *(ebp_1[-0x10] + 0xf0)
                                                                eax_77.b -= 4
                                                                char temp38_1 = eax_77.b
                                                                eax_77.b -= 2
                                                                
                                                                if (temp38_1 u< 2)
                                                                    ebp_1[-0xb] = 0x190
                                                                    ebp_1[-0xc] = 0x190
                                                            
                                                            if (*ebp_1[-0x10] == 0xa
                                                                    && *(ebp_1[-0x10] + 0xf0) == 8
                                                                    && arg1[0x432] == 3)
                                                                int32_t eax_81
                                                                int32_t edx_26
                                                                edx_26:eax_81 = sx.q(ebp_1[-7])
                                                                int32_t eax_83 =
                                                                    sx.d(*(ebp_1[-0x10] + 4))
                                                                int32_t edx_27 = sx.d(*(edi_1 + 4))
                                                                
                                                                if (add_overflow(eax_83, edx_27))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                ebp_1[-0x13] = eax_83 + edx_27
                                                                unimplemented  {fild st0, dword [ebp
                                                                    -0x4c]}
                                                                unimplemented  {fdiv st0, dword [
                                                                    0x47d098]}
                                                                unimplemented  {fld st0, tword [0x47d09c
                                                                    ]}
                                                                unimplemented  {fmulp st1, st0}
                                                                unimplemented  {fmulp st1, st0}
                                                                st0 = sub_402b3c(st0)
                                                                unimplemented  {call 0x402b3c}
                                                                unimplemented  {fmul st0, dword [
                                                                    0x47d0a8]}
                                                                int32_t eax_85
                                                                int32_t edx_28
                                                                eax_85, edx_28 = sub_402b4c(st0)
                                                                int32_t var_90_2 = eax_81 - eax_85
                                                                bool o_31 =
                                                                    unimplemented  {adc edx, 0x0}
                                                                
                                                                if (o_31)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if ((var_90_2 + 0xa) s>> 0x1f != adc.d(
                                                                        sbb.d(edx_26, edx_28, 
                                                                            eax_81 u< eax_85), 
                                                                        0, var_90_2 u>= 0xfffffff6))
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                ebp_1[-7] = var_90_2 + 0xa
                                                            
                                                            int32_t eax_90 = ebp_1[-7]
                                                            
                                                            if (add_overflow(eax_90, 
                                                                    neg.d(ebp_1[-0xb])))
                                                                sub_403010()
                                                                noreturn
                                                            
                                                            int32_t eax_101
                                                            
                                                            if (eax_90 - ebp_1[-0xb] s> ebp_1[-3])
                                                                eax_101 = 0
                                                            else
                                                                if (ebx_19 - 1 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_33 =
                                                                    unimplemented  {imul eax, ebx, 0x23}
                                                                
                                                                if (o_33)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t eax_93 =
                                                                    *(edi_1 + ebx_19 * 0x118 - 0x9c)
                                                                int32_t eax_94 = eax_93 + ebp_1[-7]
                                                                
                                                                if (add_overflow(eax_93, ebp_1[-7]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (add_overflow(eax_94, ebp_1[-0xb]))
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                if (eax_94 + ebp_1[-0xb] s<= ebp_1[-3])
                                                                    eax_101 = 0
                                                                else
                                                                    int32_t eax_96 = ebp_1[-8]
                                                                    
                                                                    if (add_overflow(eax_96, 
                                                                            neg.d(ebp_1[-0xc])))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    if (eax_96 - ebp_1[-0xc] s> ebp_1[-4])
                                                                        eax_101 = 0
                                                                    else
                                                                        if (ebx_19 - 1 u> 0x75)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        bool o_37 =
                                                                            unimplemented  {imul eax, ebx, 0x23}
                                                                        
                                                                        if (o_37)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t eax_99 =
                                                                            *(edi_1 + ebx_19 * 0x118 - 0x98)
                                                                        int32_t eax_100 = eax_99 + ebp_1[-8]
                                                                        
                                                                        if (add_overflow(eax_99, ebp_1[-8]))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (add_overflow(eax_100, ebp_1[-0xc]))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (eax_100 + ebp_1[-0xc] s<= ebp_1[-4])
                                                                            eax_101 = 0
                                                                        else
                                                                            eax_101.b = 1
                                                            
                                                            if (eax_101.b == 0)
                                                                *(ebp_1[-0x10] + 0x56) = 0
                                                            else if (ebp_1[2].b == 0)
                                                                *(ebp_1 - 0x31) = 0
                                                                
                                                                if (ebp_1[5] == 2)
                                                                    arg1[0x26c].b = 0
                                                                
                                                                if (ebp_1[5] == 1 && ebp_1[3].b == 0)
                                                                    arg3, edx_10 =
                                                                        sub_4779d4(arg1, ebp_1[-5], ebp_1[-6])
                                                                
                                                                if (ebp_1[5] == 1
                                                                        && *(ebp_1[-0x10] + 0x56) == 2
                                                                        && ebp_1[4].b != 0)
                                                                    arg3, edx_10 =
                                                                        sub_476d24(arg1, ebp_1[-5], ebp_1[-6])
                                                                
                                                                if (ebp_1[5] == 2
                                                                        && *(ebp_1[-0x10] + 0x56) == 1)
                                                                    arg3, edx_10, ebx_19 =
                                                                        sub_477368(arg1, ebp_1[-5], ebp_1[-6])
                                                                    *(ebp_1[-0x10] + 0x56) = 2
                                                                    
                                                                    if (*ebp_1[-0x10] == 0x11
                                                                            && *(ebp_1[-0x10] + 0xee) s< 0)
                                                                        void* eax_172
                                                                        eax_172.w = *(ebp_1[-0x10] + 0x7c)
                                                                        *(ebp_1[-0x10] + 0x7e) = eax_172.w
                                                                
                                                                if (ebp_1[5] == 1
                                                                        && *(ebp_1[-0x10] + 0x56) == 0)
                                                                    *(ebp_1[-0x10] + 0x56) = 1
                                                                
                                                                if (ebp_1[5] == 0
                                                                        && *(ebp_1[-0x10] + 0x56) == 2)
                                                                    *(ebp_1[-0x10] + 0x56) = 1
                                                                    arg3, edx_10 =
                                                                        sub_478234(arg1, ebp_1[-5], ebp_1[-6])
                                                                
                                                                char* eax_178
                                                                eax_178.b = *ebp_1[-0x10]
                                                                char temp54_1 = eax_178.b
                                                                eax_178.b -= 0xe
                                                                
                                                                if (temp54_1 == 0xe)
                                                                    int32_t eax_179 = ebp_1[-4]
                                                                    
                                                                    if (add_overflow(eax_179, 
                                                                            neg.d(ebp_1[-8])))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t eax_181 =
                                                                        eax_179 - ebp_1[-8] + 0x8000
                                                                    
                                                                    if (eax_181 u> 0xffff)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    *(ebp_1[-0x10] + 0x7c) =
                                                                        eax_181.w - 0x8000
                                                                
                                                                char* eax_183
                                                                eax_183.b = *ebp_1[-0x10]
                                                                char temp59_1 = eax_183.b
                                                                eax_183.b -= 8
                                                                
                                                                if (temp59_1 == 8)
                                                                label_47ce7b:
                                                                    int32_t eax_184 = ebp_1[-4]
                                                                    
                                                                    if (add_overflow(eax_184, 
                                                                            neg.d(ebp_1[-8])))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t eax_186 =
                                                                        eax_184 - ebp_1[-8] + 0x8000
                                                                    
                                                                    if (eax_186 u> 0xffff)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    *(ebp_1[-0x10] + 0x7c) =
                                                                        eax_186.w - 0x8000
                                                                else
                                                                    char temp67_1 = eax_183.b
                                                                    eax_183.b -= 5
                                                                    
                                                                    if (temp67_1 == 5)
                                                                        goto label_47ce7b
                                                                    
                                                                    char temp70_1 = eax_183.b
                                                                    eax_183.b -= 2
                                                                    
                                                                    if (temp70_1 == 2)
                                                                        goto label_47ce7b
                                                                
                                                                char* eax_188
                                                                eax_188.b = *ebp_1[-0x10]
                                                                char temp71_1 = eax_188.b
                                                                eax_188.b -= 0xa
                                                                
                                                                if (temp71_1 == 0xa
                                                                        && *(ebp_1[-0x10] + 0x88) s> 0)
                                                                    void* eax_190
                                                                    eax_190.w = *(ebp_1[-0x10] + 0x88)
                                                                    
                                                                    if (eax_190.w s<= *(edi_1 + 0x8130))
                                                                        int32_t eax_193 =
                                                                            sx.d(*(ebp_1[-0x10] + 0x88)) - 1
                                                                        
                                                                        if (eax_193 u> 0x75)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        bool o_58 =
                                                                            unimplemented  {imul eax, eax, 0x23}
                                                                        
                                                                        if (o_58)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (
                                                                                *(edi_1 + (eax_193 + 1) * 0x118 - 0xf8)
                                                                                == 0x11)
                                                                            int32_t eax_198 =
                                                                                sx.d(*(ebp_1[-0x10] + 0x88)) - 1
                                                                            
                                                                            if (eax_198 u> 0x75)
                                                                                sub_403008()
                                                                                noreturn
                                                                            
                                                                            bool o_59 =
                                                                                unimplemented  {imul eax, eax, 0x23}
                                                                            
                                                                            if (o_59)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (
                                                                                    *(edi_1 + (eax_198 + 1) * 0x118 - 0xa)
                                                                                    s< 0)
                                                                                int32_t edx_72 = ebp_1[-3]
                                                                                
                                                                                if (add_overflow(edx_72, 
                                                                                        neg.d(ebp_1[-7])))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (sx.d(*(ebp_1[-0x10] + 0x7c))
                                                                                        != edx_72 - ebp_1[-7])
                                                                                    int32_t eax_203 = ebp_1[-3]
                                                                                    
                                                                                    if (add_overflow(eax_203, 
                                                                                            neg.d(ebp_1[-7])))
                                                                                        sub_403010()
                                                                                        noreturn
                                                                                    
                                                                                    int32_t eax_205 =
                                                                                        eax_203 - ebp_1[-7] + 0x8000
                                                                                    
                                                                                    if (eax_205 u> 0xffff)
                                                                                        sub_403008()
                                                                                        noreturn
                                                                                    
                                                                                    *(ebp_1[-0x10] + 0x7c) =
                                                                                        eax_205.w - 0x8000
                                                                                    
                                                                                    if (ebp_1[5] == 1
                                                                                            && *(ebp_1[-0x10] + 0x56) == 2
                                                                                            && ebp_1[4].b != 0)
                                                                                        *(ebp_1[-0x10] + 0x74) = 0
                                                                                        arg3, edx_10 =
                                                                                            sub_478234(arg1, ebp_1[-5], ebp_1[-6])
                                                                
                                                                char* eax_210
                                                                eax_210.b = *ebp_1[-0x10]
                                                                char temp75_1 = eax_210.b
                                                                eax_210.b -= 9
                                                                char temp79_1
                                                                
                                                                if (temp75_1 != 9)
                                                                    temp79_1 = eax_210.b
                                                                    eax_210.b -= 8
                                                                
                                                                if (temp75_1 == 9 || temp79_1 == 8)
                                                                    int32_t eax_211 = ebp_1[-3]
                                                                    
                                                                    if (add_overflow(eax_211, 
                                                                            neg.d(ebp_1[-7])))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t eax_213 =
                                                                        eax_211 - ebp_1[-7] + 0x8000
                                                                    
                                                                    if (eax_213 u> 0xffff)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    *(ebp_1[-0x10] + 0x7c) =
                                                                        eax_213.w - 0x8000
                                                                
                                                                char* eax_215
                                                                eax_215.b = *ebp_1[-0x10]
                                                                char temp82_1 = eax_215.b
                                                                eax_215.b -= 0xc
                                                                
                                                                if (temp82_1 == 0xc)
                                                                    int32_t eax_216 = ebp_1[-3]
                                                                    
                                                                    if (add_overflow(eax_216, 
                                                                            neg.d(ebp_1[-7])))
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t eax_218 =
                                                                        eax_216 - ebp_1[-7] + 0x8000
                                                                    
                                                                    if (eax_218 u> 0xffff)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    *(ebp_1[-0x10] + 0x7c) =
                                                                        eax_218.w - 0x8000
                                                            else
                                                                bool o_40 =
                                                                    unimplemented  {imul eax, eax, 0x1038}
                                                                
                                                                if (o_40)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t edx_32 = ebp_1[-6] - 1
                                                                
                                                                if (edx_32 u> 0x75)
                                                                    sub_403008()
                                                                    noreturn
                                                                
                                                                bool o_41 =
                                                                    unimplemented  {imul edx, edx, 0x23}
                                                                
                                                                if (o_41)
                                                                    sub_403010()
                                                                    noreturn
                                                                
                                                                int32_t eax_104
                                                                eax_104.b = *(arg1[0x2ac]
                                                                    + ebp_1[-5] * 0x81c0
                                                                    + (edx_32 + 1) * 0x118 - 0xf8)
                                                                eax_104.b -= 7
                                                                char temp51_1 = eax_104.b
                                                                eax_104.b -= 2
                                                                
                                                                if (temp51_1 u< 2)
                                                                label_47ca7a:
                                                                    bool o_42 =
                                                                        unimplemented  {imul eax, eax, 0x1038}
                                                                    
                                                                    if (o_42)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t edx_36 = ebp_1[-6] - 1
                                                                    
                                                                    if (edx_36 u> 0x75)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    bool o_43 =
                                                                        unimplemented  {imul edx, edx, 0x23}
                                                                    
                                                                    if (o_43)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x11] = arg1[0x2ac]
                                                                        + ebp_1[-5] * 0x81c0
                                                                        + (edx_36 + 1) * 0x118 - 0xf8
                                                                    char* eax_112
                                                                    eax_112.b = *ebp_1[-0x11]
                                                                    char temp62_1 = eax_112.b
                                                                    eax_112.b -= 0xd
                                                                    char temp69_1
                                                                    
                                                                    if (temp62_1 != 0xd)
                                                                        eax_112.b -= 2
                                                                        temp69_1 = eax_112.b
                                                                        eax_112.b -= 2
                                                                    
                                                                    if (temp62_1 == 0xd || temp69_1 u< 2)
                                                                        bool o_44 =
                                                                            unimplemented  {imul eax, eax, 0x1038}
                                                                        
                                                                        if (o_44)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        int32_t edx_41 = ebp_1[-6] - 1
                                                                        
                                                                        if (edx_41 u> 0x75)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        bool o_45 =
                                                                            unimplemented  {imul edx, edx, 0x23}
                                                                        
                                                                        if (o_45)
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        ebp_1[-6] = sx.d(*(arg1[0x2ac]
                                                                            + ebp_1[-5] * 0x81c0
                                                                            + (edx_41 + 1) * 0x118 - 0x6c))
                                                                    
                                                                    if (*ebp_1[-0x11] == 0xa)
                                                                        char* eax_119 = ebp_1[-0x11] + 8
                                                                        int32_t ecx_4
                                                                        ecx_4.b = *eax_119
                                                                        arg3 =
                                                                            sub_402c90(eax_119, 0x47d0ac, ecx_4 + 1)
                                                                        
                                                                        if (ecx_4 == 0xffffffff)
                                                                            ebp_1[-6] = sx.d(*(ebp_1[-0x11] + 0x88))
                                                                    
                                                                    char* eax_122
                                                                    eax_122.b = *ebp_1[-0x11]
                                                                    char temp73_1 = eax_122.b
                                                                    eax_122.b -= 7
                                                                    char temp76_1
                                                                    
                                                                    if (temp73_1 != 7)
                                                                        temp76_1 = eax_122.b
                                                                        eax_122.b -= 2
                                                                    
                                                                    if (temp73_1 == 7 || temp76_1 == 2)
                                                                        if (*(ebp_1[-0x11] + 0x88) == 0)
                                                                        label_47cb9f:
                                                                            
                                                                            if (*(ebp_1[-0x11] + 0x70) != 0)
                                                                                int32_t temp83_1 = ebp_1[-6]
                                                                                ebp_1[-6] += 1
                                                                                
                                                                                if (add_overflow(temp83_1, 1))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                            
                                                                            if (*(ebp_1[-0x11] + 0x70) == 0)
                                                                                int32_t temp87_1 = ebp_1[-6]
                                                                                ebp_1[-6] += 2
                                                                                
                                                                                if (add_overflow(temp87_1, 2))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                        else
                                                                            bool o_46 =
                                                                                unimplemented  {imul eax, eax, 0x1038}
                                                                            
                                                                            if (o_46)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            int32_t edx_47 =
                                                                                sx.d(*(ebp_1[-0x11] + 0x88)) - 1
                                                                            
                                                                            if (edx_47 u> 0x75)
                                                                                sub_403008()
                                                                                noreturn
                                                                            
                                                                            bool o_47 =
                                                                                unimplemented  {imul edx, edx, 0x23}
                                                                            
                                                                            if (o_47)
                                                                                sub_403010()
                                                                                noreturn
                                                                            
                                                                            if (*(arg1[0x2ac] + ebp_1[-5] * 0x81c0
                                                                                    + (edx_47 + 1) * 0x118 - 0xf8) != 0x11)
                                                                                goto label_47cb9f
                                                                            
                                                                            ebp_1[-6] = sx.d(*(ebp_1[-0x11] + 0x88))
                                                                    
                                                                    bool o_50 =
                                                                        unimplemented  {imul eax, eax, 0x1038}
                                                                    
                                                                    if (o_50)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    int32_t edx_52 = ebp_1[-6] - 1
                                                                    
                                                                    if (edx_52 u> 0x75)
                                                                        sub_403008()
                                                                        noreturn
                                                                    
                                                                    bool o_51 =
                                                                        unimplemented  {imul edx, edx, 0x23}
                                                                    
                                                                    if (o_51)
                                                                        sub_403010()
                                                                        noreturn
                                                                    
                                                                    ebp_1[-0x12] = arg1[0x2ac]
                                                                        + ebp_1[-5] * 0x81c0
                                                                        + (edx_52 + 1) * 0x118 - 0xf8
                                                                    char* eax_135
                                                                    eax_135.b = *ebp_1[-0x12]
                                                                    char temp90_1 = eax_135.b
                                                                    eax_135.b -= 8
                                                                    
                                                                    if (temp90_1 != 8)
                                                                        char* eax_141
                                                                        eax_141.b = *ebp_1[-0x12]
                                                                        char temp91_1 = eax_141.b
                                                                        eax_141.b -= 0x11
                                                                        
                                                                        if (temp91_1 != 0x11)
                                                                            char* eax_156
                                                                            eax_156.b = *ebp_1[-0x12]
                                                                            char temp94_1 = eax_156.b
                                                                            eax_156.b -= 0xe
                                                                            
                                                                            if (temp94_1 == 0xe)
                                                                                int32_t temp0_2 =
                                                                                    divs.dp.d(sx.q(ebp_1[5]), 0x18)
                                                                                int32_t edx_65 =
                                                                                    sx.d(*(ebp_1[-0x12] + 0x78))
                                                                                
                                                                                if (add_overflow(temp0_2, edx_65))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (temp0_2 + edx_65 + 0x8000 u> 0xffff)
                                                                                    sub_403008()
                                                                                    noreturn
                                                                                
                                                                                *(ebp_1[-0x12] + 0x7c) =
                                                                                    (temp0_2 + edx_65 + 0x8000).w - 0x8000
                                                                                arg3, edx_10 =
                                                                                    sub_476d24(arg1, ebp_1[-5], ebp_1[-6])
                                                                                *(ebp_1 - 0x31) = 0
                                                                        else
                                                                            if (ebp_1[5] s<= 0)
                                                                                int32_t eax_148 =
                                                                                    sx.d(*(ebp_1[-0x12] + 0x74))
                                                                                
                                                                                if (add_overflow(eax_148, 0xffffffff))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (eax_148 + 0x7fff u> 0xffff)
                                                                                    sub_403008()
                                                                                    noreturn
                                                                                
                                                                                *(ebp_1[-0x12] + 0x74) =
                                                                                    (eax_148 + 0x7fff).w - 0x8000
                                                                            else
                                                                                int32_t eax_143 =
                                                                                    sx.d(*(ebp_1[-0x12] + 0x74))
                                                                                
                                                                                if (add_overflow(eax_143, 1))
                                                                                    sub_403010()
                                                                                    noreturn
                                                                                
                                                                                if (eax_143 + 0x8001 u> 0xffff)
                                                                                    sub_403008()
                                                                                    noreturn
                                                                                
                                                                                *(ebp_1[-0x12] + 0x74) =
                                                                                    (eax_143 + 0x8001).w - 0x8000
                                                                            
                                                                            if (*(ebp_1[-0x12] + 0x74) s< 1)
                                                                                *(ebp_1[-0x12] + 0x74) = 1
                                                                            
                                                                            void* eax_154
                                                                            eax_154.w = *(ebp_1[-0x12] + 0xe4)
                                                                            
                                                                            if (eax_154.w s< *(ebp_1[-0x12] + 0x74))
                                                                                void* eax_155
                                                                                eax_155.w = *(ebp_1[-0x12] + 0xe4)
                                                                                *(ebp_1[-0x12] + 0x74) = eax_155.w
                                                                    else
                                                                        int32_t temp0_1 =
                                                                            divs.dp.d(sx.q(ebp_1[5]), 0xc)
                                                                        int32_t edx_56 =
                                                                            sx.d(*(ebp_1[-0x12] + 0x78))
                                                                        
                                                                        if (add_overflow(edx_56, 
                                                                                neg.d(temp0_1)))
                                                                            sub_403010()
                                                                            noreturn
                                                                        
                                                                        if (edx_56 - temp0_1 + 0x8000 u> 0xffff)
                                                                            sub_403008()
                                                                            noreturn
                                                                        
                                                                        *(ebp_1[-0x12] + 0x7c) =
                                                                            (edx_56 - temp0_1 + 0x8000).w - 0x8000
                                                                        arg3, edx_10 =
                                                                            sub_476d24(arg1, ebp_1[-5], ebp_1[-6])
                                                                        *(ebp_1 - 0x31) = 0
                                                                else
                                                                    eax_104.b -= 4
                                                                    char temp53_1 = eax_104.b
                                                                    eax_104.b -= 4
                                                                    
                                                                    if (temp53_1 u< 4)
                                                                        goto label_47ca7a
                                                                    
                                                                    if (*ebp_1[-0x10] == 0xa)
                                                                        int32_t* eax_107 = ebp_1[-0x10] + 8
                                                                        int32_t ecx_2
                                                                        ecx_2.b = *eax_107
                                                                        arg3, edx_10 =
                                                                            sub_402c90(eax_107, 0x47d0ac, ecx_2 + 1)
                                                                        
                                                                        if (ecx_2 == 0xffffffff)
                                                                            goto label_47ca7a
                                        
                                        if (*(ebp_1 - 0x31) != 0)
                                            arg3, edx_10 = sub_477844(arg1, ebp_1[-5], ebp_1[-6])
                                
                                ebx_17 = ebx_19 + 1
                                j = ebp_1[-0xf]
                                ebp_1[-0xf] -= 1
                            while (j != 1)
                    else
                        bool o_7 = unimplemented  {imul eax, eax, 0x1038}
                        
                        if (o_7)
                            sub_403010()
                            noreturn
                        
                        int32_t eax_20
                        eax_20.b = *(arg1[0x2ac] + ebp_1[-5] * 0x81c0 + 0x8139)
                        
                        if (eax_20.b == 0)
                            goto label_47c462
            
            ebp_1[-5] += 1
            i_1 = ebp_1[-0xe]
            ebp_1[-0xe] -= 1
        while (i_1 != 1)
    
    if (arg1[0x478] == 0xa)
        arg1[0x478] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_80_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_47d06a
    sub_403df8(&ebp_1[-0x14])
    return &ebp_1[-0x14]
}

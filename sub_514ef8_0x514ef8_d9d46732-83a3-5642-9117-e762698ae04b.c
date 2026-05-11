// ============================================================
// 函数名称: sub_514ef8
// 虚拟地址: 0x514ef8
// WARP GUID: d9d46732-83a3-5642-9117-e762698ae04b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_508e64, sub_510e64, sub_513ae4, sub_512df4, sub_5119f8, sub_40401c, sub_402bdc, sub_511764, sub_5148a0, sub_403e1c, sub_403010, sub_514de8, sub_511e08, sub_50d52c, sub_515920, sub_50d514, sub_402bc0, sub_510da8, sub_50b624, sub_4040c4, sub_508954, sub_408e1c, sub_50d2f4, sub_50b1ac, sub_402b90, sub_514c48, sub_509ed4, sub_508844, sub_4746a0, sub_50d318, sub_47a9a0, sub_514e80, sub_5091bc, sub_51497c, sub_50c2d0, sub_50a4e0
// [被调用的父级函数]: sub_51621b
// ============================================================

int32_t __convention("regparm")sub_514ef8(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_2b4 = ebx
    int32_t esi
    int32_t var_2b8 = esi
    int32_t edi
    int32_t var_2bc = edi
    int32_t var_2b0 = 0
    int32_t var_2ac = 0
    int32_t var_2a4 = 0
    int32_t var_2a8 = 0
    char* var_1a0 = nullptr
    void* var_19c = nullptr
    void* var_128 = nullptr
    void* var_124 = nullptr
    void* var_120 = nullptr
    void var_98
    void* esi_2
    void* edi_1
    edi_1, esi_2 = __builtin_memcpy(&var_98, arg2, 0x84)
    int32_t* ecx_1 = arg3
    int32_t* var_c = ecx_1
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t* var_2c0_1 = &var_4
    int32_t (* var_2c4)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_1
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    char var_94
    char var_92
    char var_91
    void* eax
    
    if (var_92 == 4 && *(var_8 + 0x344) != 0)
        eax.b = var_94
        
        if (eax.b == 0)
        label_514f8a:
            eax.b = var_94
            char temp2_1 = eax.b
            eax.b -= 3
            
            if (temp2_1 == 3)
                var_92 = 1
                eax, ecx_1 = sub_515920(var_8, &var_98, var_c)
            else
                char temp5_1 = eax.b
                eax.b -= 5
                
                if (temp5_1 == 5)
                    var_92 = 1
                    eax, ecx_1 = sub_515920(var_8, &var_98, var_c)
                else
                    eax.b = var_94
                    char temp8_1 = eax.b
                    eax.b -= 7
                    
                    if (temp8_1 != 7 || var_91 != 5)
                        var_92 = 0
                        eax, ecx_1 = sub_515920(var_8, &var_98, nullptr)
                    else
                        var_92 = 1
                        eax, ecx_1 = sub_515920(var_8, &var_98, var_c)
        else
            char temp3_1 = eax.b
            eax.b -= 3
            
            if (temp3_1 == 3)
                goto label_514f8a
            
            eax.b -= 4
            char temp6_1 = eax.b
            eax.b -= 2
            
            if (temp6_1 u< 2)
                goto label_514f8a
    
    eax.b = var_92
    char temp0 = eax.b
    eax.b -= 3
    char temp1_1
    
    if (temp0 u>= 3)
        temp1_1 = eax.b
        eax.b -= 1
    
    if (temp0 u< 3 || temp1_1 == 1)
        char var_87
        
        if (var_94 != 9)
        label_515034:
            char* ExceptionList
            
            if (var_94 == 7 && var_91 == 9)
                int32_t var_2cc_1 = 0
                char* var_2d0_1 = &data_515874
                ExceptionList = &data_515874
                ecx_1 = sub_4746a0(nullptr, 0x1d, *data_530304, ExceptionList, var_2d0_1)
                esp = &ExceptionList_1
            else
                int32_t var_7c
                char var_90
                char var_74[0x41]
                
                if (var_94 == 7 && var_91 == 8)
                    bool o_1 = unimplemented  {imul eax, eax, 0xe9}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    ecx_1.b = 0x20
                    ecx_1 = sub_402bdc(var_8 + sx.d(var_90) * 0x3a4 + 0x198, &var_74, ecx_1.b)
                else if (var_94 != 7 || var_91 != 6 || var_8->__offset(0x350).d != var_7c)
                    if (var_94 == 7 && var_91 == 5)
                        int32_t eax_20 = sub_50a4e0(sx.d(var_90))
                        sub_510da8(var_8, eax_20, var_7c)
                        ecx_1 = sub_50b624(0x1b, nullptr, esi_2, edi_1)
                    else if (var_94 != 8 || var_91 != 1)
                        eax.b = var_94
                        
                        if (eax.b != 8 || var_91 != 0)
                            if (eax.b == 3)
                                sub_511764(var_8, 0xa)
                                ecx_1 = sub_512df4(&var_98, var_8 + 0x2074, var_c)
                                esp = &ExceptionList_1
                            else
                                char var_33[0x1f]
                                
                                if (eax.b != 0)
                                    if (var_94 == 7 && var_91 == 2)
                                        bool o_2 = unimplemented  {imul eax, eax, 0xe9}
                                        
                                        if (o_2)
                                            sub_403010()
                                            noreturn
                                        
                                        ecx_1.b = 0x14
                                        sub_402bdc(var_8 + sx.d(var_90) * 0x3a4 - 0x4f, &var_74, 
                                            ecx_1.b)
                                        bool o_3 = unimplemented  {imul eax, eax, 0xe9}
                                        
                                        if (o_3)
                                            sub_403010()
                                            noreturn
                                        
                                        *(var_8 + sx.d(var_90) * 0x3a4 + 0x184) = var_87
                                        bool o_4 = unimplemented  {imul eax, eax, 0xe9}
                                        
                                        if (o_4)
                                            sub_403010()
                                            noreturn
                                        
                                        sub_402bdc(var_8 + sx.d(var_90) * 0x3a4 - 0x3a, &var_33, 0x14)
                                        char var_8f
                                        
                                        if (var_8f != 0)
                                            int32_t* var_2cc_3 = &var_4
                                            int32_t (* var_2d0_2)() = j_sub_40353c
                                            ExceptionList = fsbase->NtTib.ExceptionList
                                            fsbase->NtTib.ExceptionList = &ExceptionList
                                            int32_t var_14
                                            sub_47a9a0(*data_530424, *data_530438, *data_530304, 
                                                &var_14)
                                            
                                            if (add_overflow(0, 1))
                                                sub_403010()
                                                noreturn
                                            
                                            *(*data_5301f4 + 0x456c) = 1
                                            int32_t eax_45 = var_14
                                            
                                            if (add_overflow(eax_45, 1))
                                                sub_403010()
                                                noreturn
                                            
                                            *data_5300d0 = eax_45 + 1
                                            int32_t eax_48 = sub_50a4e0(sx.d(var_90))
                                            *(*data_5301f4 + (eax_48 << 2) + 0x111cc) = sx.d(var_8f)
                                            esp = &ExceptionList_1
                                            fsbase->NtTib.ExceptionList = ExceptionList
                                        
                                        if (var_8->__offset(0x54).d s>= 2)
                                            sub_508954()
                                        
                                        ecx_1 = sub_50b624(2, nullptr, esi_2, edi_1)
                                    else if (var_94 == 7 && var_91 == 3)
                                        sub_40401c(ecx_1, &var_74)
                                        ecx_1 = sub_50b624(0xb, var_1a0, esi_2, edi_1)
                                else if (var_91 s> 1)
                                    sub_40401c(ecx_1, &var_74)
                                    ecx_1, ebp_1 = sub_5119f8(var_8, var_19c, sx.d(var_90))
                                else
                                    char var_140[0x18]
                                    sub_402bc0(&var_140, &var_33)
                                    sub_402b90(&var_140, 0x515878, 0x14)
                                    char var_198[0x58]
                                    sub_402bc0(&var_198, &var_140)
                                    sub_40401c(sub_402b90(&var_198, &var_74, 0x54), &var_198)
                                    ecx_1 = sub_50c2d0(var_128)
                    else
                        ecx_1 = sub_5091bc(&var_98)
                else if (var_8->__offset(0x54).d s> 1)
                    sub_40401c(ecx_1, &var_74)
                    int32_t ecx_3
                    ecx_3, ebp_1 = sub_508844(var_124, var_87)
                    ebp_1[-1]
                    ecx_1 = sub_513ae4(ecx_3, 7)
                else
                    sub_40401c(ecx_1, &var_74)
                    int32_t ecx_2
                    ecx_2, ebp_1 = sub_508844(var_120, var_87)
                    ebp_1[-1]
                    ecx_1 = sub_513ae4(ecx_2, 7)
        else
            if (sub_50d2f4().b == 0)
                goto label_515034
            
            int32_t eax_6 = *(*data_530084 + 0x48)
            
            if (eax_6 == 3 || eax_6 == 7)
                goto label_515034
            
            if (var_87 != 0)
                ecx_1 = sub_508e64(&var_98)
    
    if (*(ebp_1[-1] + 0x344) != 0 && ebp_1[-0x24].b == 1)
        ecx_1.b = *(ebp_1 - 0x83)
        int32_t eax_53
        int32_t ecx_15
        eax_53, ecx_15 = sub_514de8(ebp_1[-1], sx.d(ebp_1[-0x23].b), ecx_1.b)
        ebp_1[-4] = eax_53
        
        if (*(ebp_1[-1] + 0x54) s>= 2 && sub_511e08(ebp_1[-1]) == 0)
            ebp_1[-4] = 0xffffffff
        
        ebp_1[-1]
        sub_50d52c(ecx_15, &ebp_1[-0x46])
        ebp_1[-0x45].b = 2
        *(ebp_1 - 0x112) = 2
        *(ebp_1 - 0x113) = 4
        
        if (ebp_1[-4] s> 0)
            *(ebp_1 - 0x111) = 1
            ebp_1[-0x44].b = (ebp_1[-4]).b
            sub_408e1c(ebp_1[-4], &ebp_1[-0xa9])
            sub_4040c4(&ebp_1[-0xa8], "Teilnahme erfolgreich, Spielernr.:", ebp_1[-0xa9])
            sub_404054(&ebp_1[-0xa7], ebp_1[-0xa8], 0xff)
            sub_402bdc(&ebp_1[-0x3d], &ebp_1[-0xa7], 0x40)
            ebp_1[-4]
            bool o_7 = unimplemented  {imul eax, dword [ebp-0x10], 0xe9}
            
            if (o_7)
                sub_403010()
                noreturn
            
            sub_402bdc(ebp_1[-1] + ebp_1[-4] * 0x3a4 - 0x4f, &ebp_1[-0x3d], 0x14)
            ebp_1[-4]
            bool o_8 = unimplemented  {imul eax, dword [ebp-0x10], 0xe9}
            
            if (o_8)
                sub_403010()
                noreturn
            
            *(ebp_1[-1] + ebp_1[-4] * 0x3a4 - 0x50) = 1
            ebp_1[-4]
            bool o_9 = unimplemented  {imul eax, dword [ebp-0x10], 0xe9}
            
            if (o_9)
                sub_403010()
                noreturn
            
            *(ebp_1[-1] + ebp_1[-4] * 0x3a4 + 0x194) = ebp_1[-2]
            ebp_1[-4]
            bool o_10 = unimplemented  {imul eax, dword [ebp-0x10], 0xe9}
            
            if (o_10)
                sub_403010()
                noreturn
            
            *(ebp_1[-1] + ebp_1[-4] * 0x3a4 + 0x185) = 1
            int32_t i_1 = *(ebp_1[-1] + 0x348)
            
            if (i_1 s> 0)
                int32_t eax_69 = 1
                int32_t i
                
                do
                    if (eax_69 != ebp_1[-4])
                        int32_t ecx_20 = eax_69 * 0xe9
                        bool o_11 = unimplemented  {imul ecx, eax, 0xe9}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        if (*(ebp_1[-1] + (ecx_20 << 2) - 0x50) == 1
                                && *(ebp_1[-1] + (ecx_20 << 2) + 0x185) != 0)
                            ebp_1[-4]
                            bool o_12 = unimplemented  {imul ecx, dword [ebp-0x10], 0xe9}
                            
                            if (o_12)
                                sub_403010()
                                noreturn
                            
                            *(ebp_1[-1] + ebp_1[-4] * 0x3a4 + 0x185) = 0
                    
                    eax_69 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        else if (*(ebp_1 - 0x83) != 0)
            *(ebp_1 - 0x111) = 4
            char* esi_3
            char* edi_3
            edi_3, esi_3 = __builtin_memcpy(&ebp_1[-0x3d], 0x5158a8, 0x14)
            *edi_3 = *esi_3
            edi_1 = &edi_3[1]
            esi_2 = &esi_3[1]
        else if (ebp_1[-4] != 0xffffffff)
            *(ebp_1 - 0x111) = 2
            char* esi_4
            char* edi_6
            edi_6, esi_4 = __builtin_strncpy(&ebp_1[-0x3d], 0x5158ec, 0x30)
            *edi_6 = *esi_4
            edi_1 = &edi_6[1]
            esi_2 = &esi_4[1]
        else
            *(ebp_1 - 0x111) = 3
            edi_1, esi_2 = __builtin_strncpy(&ebp_1[-0x3d], 0x5158c0, 0x2c)
        
        ecx_1 = sub_515920(ebp_1[-1], &ebp_1[-0x46], ebp_1[-2])
        
        if (*(ebp_1 - 0x111) == 1)
            sub_5148a0(ebp_1[-1])
            ecx_1, ebp_1, edi_1 = sub_51497c(ebp_1[-1], 1, ebp_1[-4])
            
            if (*(ebp_1[-1] + 0x54) s>= 2)
                ebp_1[-4]
                ecx_1 = sub_508954()
    
    if (*(ebp_1[-1] + 0x345) != 0)
        ebp_1[-6] = ebp_1[-2]
        sub_50d514(*(ebp_1[-1] + 0xc), &ebp_1[-0x25])
        char eax_79 = ebp_1[-0x24].b
        
        if (eax_79 == 6)
            eax_79 = *(ebp_1 - 0x8d)
            
            if (eax_79 == 5)
                sub_509ed4(ebp_1[-0x1e])
                ebp_1 = sub_510e64(ebp_1[-1])
                esp = &var_8
            else if (eax_79 == 2)
                int32_t ebx_4 = ebp_1[-0x1e]
                
                if (ebx_4 != 0)
                    sub_408e1c(ebx_4, &ebp_1[-0xaa])
                    sub_50b624(5, ebp_1[-0xaa], esi_2, edi_1)
                else
                    sub_50b624(4, nullptr, esi_2, edi_1)
                    *(ebp_1[-1] + 0x54) = 2
        else if (eax_79 != 7)
            if (ebp_1[-0x24].b == 2)
                eax_79 = *(ebp_1 - 0x8d)
                
                if (eax_79 == 1)
                    int32_t ebx_5 = sx.d(ebp_1[-0x23].b)
                    *(ebp_1[-1] + 0x350) = ebx_5
                    bool o_13 = unimplemented  {imul eax, ebx, 0xe9}
                    
                    if (o_13)
                        sub_403010()
                        noreturn
                    
                    ecx_1.b = 0x14
                    sub_402bdc(ebp_1[-1] + ebx_5 * 0x3a4 - 0x4f, ebp_1[-1] + 0x31, ecx_1.b)
                    sub_50b624(1, nullptr, esi_2, edi_1)
                    sub_514e80(ebp_1[-1], ebp_1[-1] + 0x3640)
                else if (eax_79 == 4)
                    ebp_1[-1]
                    sub_513ae4(ecx_1, 5)
                    int32_t edx_50
                    edx_50.b = 1
                    sub_514c48(ebp_1[-1])
                else if (eax_79 == 3)
                    ebp_1[-1]
                    sub_513ae4(ecx_1, 4)
                    int32_t edx_51
                    edx_51.b = 1
                    sub_514c48(ebp_1[-1])
                else if (eax_79 != 2)
                    ebp_1[-1]
                    sub_513ae4(ecx_1, 3)
                    int32_t edx_53
                    edx_53.b = 1
                    sub_514c48(ebp_1[-1])
                else
                    ebp_1[-1]
                    sub_513ae4(ecx_1, 2)
                    int32_t edx_52
                    edx_52.b = 1
                    sub_514c48(ebp_1[-1])
        else if (*(ebp_1 - 0x8d) == 1)
            sub_40401c(ecx_1, &ebp_1[-0x1c])
            ebp_1 = sub_50b1ac(ebp_1[-0xab], sx.d(*(ebp_1 - 0x8b)), esi_2, edi_1)
            esp = &var_8
            *data_530454
            
            if (sub_50d2f4() != 0 && ebp_1[-0x23].b == 7)
                if (sub_50d318(*data_530454) != 0)
                    sub_5148a0(ebp_1[-1])
                
                ebp_1 = sub_51497c(ebp_1[-1], 0, 0)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_515867
    sub_403e1c(&ebp_1[-0xab], 4)
    sub_403e1c(&ebp_1[-0x67], 2)
    return sub_403e1c(&ebp_1[-0x49], 3)
}

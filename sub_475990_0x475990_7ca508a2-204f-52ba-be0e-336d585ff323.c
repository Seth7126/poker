// ============================================================
// 函数名称: sub_475990
// 虚拟地址: 0x475990
// WARP GUID: 7ca508a2-204f-52ba-be0e-336d585ff323
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_477368, sub_4765ac, sub_476478, sub_478234, sub_476830, sub_403010
// [被调用的父级函数]: sub_4769d8
// ============================================================

int32_t __convention("regparm")sub_475990(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int16_t* var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    var_8 = arg3
    int32_t* ebx_1 = arg1
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (ebx_1[0x26c].b == 0)
        ebx_1[0x26c].b = *(ebx_1 + 0xa95)
    
    char eax_1 = 0
    int16_t* edx = ebx_1[0x2ae]
    
    if (edx s> 0 && edx s<= ebx_1[0x2ad])
        int32_t esi_1 = ebx_1[0x2ae]
        bool o_1 = unimplemented  {imul edx, esi, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (ebx_1[0x2ac][esi_1 * 0x2070 + 0x204d].w s> 0)
            bool o_2 = unimplemented  {imul edx, esi, 0x1038}
            
            if (o_2)
                sub_403010()
                noreturn
            
            edx.w = *(ebx_1[0x2ac] + esi_1 * 0x81c0 + 0x8134)
            bool o_3 = unimplemented  {imul ecx, esi, 0x1038}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (edx.w s<= *(ebx_1[0x2ac] + esi_1 * 0x81c0 + 0x8130))
                bool o_4 = unimplemented  {imul edx, esi, 0x1038}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                int32_t edx_3 = sx.d(*(ebx_1[0x2ac] + esi_1 * 0x81c0 + 0x8134)) - 1
                
                if (edx_3 u> 0x75)
                    sub_403008()
                    noreturn
                
                bool o_5 = unimplemented  {imul edx, edx, 0x23}
                
                if (o_5)
                    sub_403010()
                    noreturn
                
                bool o_6 = unimplemented  {imul ecx, esi, 0x1038}
                
                if (o_6)
                    sub_403010()
                    noreturn
                
                if (*(&(ebx_1[0x2ac] + esi_1 * 0x81c0)[(edx_3 + 1) * 0x46] - 0x87) != 0)
                    edx.w = *var_8
                    int16_t temp7_1 = edx.w
                    edx.w -= 0xd
                    
                    if (temp7_1 == 0xd)
                        eax_1 = 1
                    else
                        int16_t temp8_1 = edx.w
                        edx.w -= 0x13
                        
                        if (temp8_1 == 0x13)
                            eax_1 = 1
                        else
                            int16_t temp9_1 = edx.w
                            edx.w -= 5
                            
                            if (temp9_1 == 5)
                                eax_1 = 1
                            else
                                int16_t temp10_1 = edx.w
                                edx.w -= 2
                                
                                if (temp10_1 != 2)
                                    edx.w = *var_8
                                    int16_t temp11_1 = edx.w
                                    edx.w -= 9
                                    
                                    if (temp11_1 == 9)
                                    label_475ad1:
                                        bool o_7 = unimplemented  {imul edx, esi, 0x1038}
                                        
                                        if (o_7)
                                            sub_403010()
                                            noreturn
                                        
                                        int32_t edx_7 =
                                            sx.d(*(ebx_1[0x2ac] + esi_1 * 0x81c0 + 0x8134)) - 1
                                        
                                        if (edx_7 u> 0x75)
                                            sub_403008()
                                            noreturn
                                        
                                        bool o_8 = unimplemented  {imul edx, edx, 0x23}
                                        
                                        if (o_8)
                                            sub_403010()
                                            noreturn
                                        
                                        bool o_9 = unimplemented  {imul ecx, esi, 0x1038}
                                        
                                        if (o_9)
                                            sub_403010()
                                            noreturn
                                        
                                        *(ebx_1[0x2ac] + esi_1 * 0x81c0 + (edx_7 + 1) * 0x118 - 0x87) =
                                            0
                                        bool o_10 = unimplemented  {imul edx, edx, 0x1038}
                                        
                                        if (o_10)
                                            sub_403010()
                                            noreturn
                                        
                                        *(&ebx_1[0x2ac][ebx_1[0x2ae] * 0x2070] + 0x8132) = 0
                                    else
                                        int16_t temp12_1 = edx.w
                                        edx.w -= 0x1d
                                        
                                        if (temp12_1 == 0x1d)
                                            goto label_475ad1
                                        
                                        int16_t temp13_1 = edx.w
                                        edx.w -= 2
                                        
                                        if (temp13_1 == 2)
                                            goto label_475ad1
                                else
                                    eax_1 = 1
    
    if (eax_1 == 0)
        int16_t* eax_2
        eax_2.w = *var_8
        char temp1_1 = eax_2.b
        eax_2.b -= 9
        
        if (temp1_1 == 9)
        label_475b67:
            
            if (ebx_1[0x26c].b != 0)
                if (*var_8 == 9)
                    int32_t var_24_3 = 0
                    edx.b = 4
                    sub_476830(ebx_1, edx.b)
                    esp = &ExceptionList
                
                if (*var_8 == 0x26)
                    int32_t var_24_4 = 0
                    edx.b = 2
                    sub_476830(ebx_1, edx.b)
                    esp = &ExceptionList
                
                if (*var_8 == 0x25)
                    int32_t var_24_5 = 0
                    edx.b = 2
                    sub_476830(ebx_1, edx.b)
                    esp = &ExceptionList
                
                if (*var_8 == 0x27)
                    int32_t var_24_6 = 0
                    edx.b = 4
                    sub_476830(ebx_1, edx.b)
                    esp = &ExceptionList
                
                if (*var_8 == 0x28)
                    int32_t var_24_7 = 0
                    edx.b = 4
                    sub_476830(ebx_1, edx.b)
                    esp = &ExceptionList
                
                if (*var_8 == 0xd)
                    struct _EXCEPTION_REGISTRATION_RECORD* eax_27 = ebx_1[0x26e]
                    
                    if (eax_27 s> 0 && eax_27 s<= ebx_1[0x2ad] && ebx_1[0x26d] s> 0)
                        bool o_11 = unimplemented  {imul edx, eax, 0x1038}
                        
                        if (o_11)
                            sub_403010()
                            noreturn
                        
                        if (sx.d(*(ebx_1[0x2ac] + eax_27 * 0x81c0 + 0x8130)) s>= ebx_1[0x26d])
                            bool o_12 = unimplemented  {imul ecx, eax, 0x1038}
                            
                            if (o_12)
                                sub_403010()
                                noreturn
                            
                            ebx_1[0x2ac]
                            int32_t edx_16 = ebx_1[0x26d] - 1
                            
                            if (edx_16 u> 0x75)
                                sub_403008()
                                noreturn
                            
                            bool o_13 = unimplemented  {imul esi, edx, 0x23}
                            
                            if (o_13)
                                sub_403010()
                                noreturn
                            
                            if (*(ebx_1 + 0x9b1) == 0)
                                ebx_1 = sub_477368(ebx_1, eax_27, edx_16 + 1)
                                esp = &var_8
                                sub_478234(ebx_1, ebx_1[0x26e], ebx_1[0x26d])
                            
                            *(ebx_1 + 0x9b1) = 1
            else
                ebx_1[0x26c].b = 1
                ebx_1[0x26e] = ebx_1[0x228]
                int16_t* eax_4
                eax_4.w = *var_8
                
                if (eax_4.w - 0x25 u>= 2)
                    arg3.b = 1
                    ebx_1[0x26d] = sub_476478(ebx_1, 0, arg3)
                    
                    if (sub_4765ac(ebx_1) == 0)
                        int32_t var_24_2 = 0
                        sub_476830(ebx_1, 4)
                        esp = &ExceptionList
                else
                    arg3.b = 1
                    edx.b = 1
                    ebx_1[0x26d] = sub_476478(ebx_1, edx.b, arg3)
                    
                    if (sub_4765ac(ebx_1) == 0)
                        int32_t var_24_1 = 0
                        sub_476830(ebx_1, 2)
                        esp = &ExceptionList
        else
            char temp2_1 = eax_2.b
            eax_2.b -= 4
            
            if (temp2_1 == 4)
                goto label_475b67
            
            char temp4_1 = eax_2.b
            eax_2.b -= 0x13
            
            if (temp4_1 == 0x13)
                goto label_475b67
            
            eax_2.b -= 5
            char temp5_1 = eax_2.b
            eax_2.b -= 4
            
            if (temp5_1 u< 4)
                goto label_475b67
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_475d33
    return 0
}

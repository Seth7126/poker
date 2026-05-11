// ============================================================
// 函数名称: sub_431f30
// 虚拟地址: 0x431f30
// WARP GUID: b92ee6c6-591b-5105-9e32-1ed76e4f5620
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsRectEmpty
// [内部子函数调用]: sub_431bcc, sub_42e838, sub_431eb0, sub_42e7fc
// [被调用的父级函数]: sub_432309
// ============================================================

BOOL __fastcallsub_431f30(int32_t* arg1, int32_t* arg2, int32_t* arg3 @ eax, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: BOOL eax_1 = sub_431bcc(arg3)
    BOOL eax_1 = sub_431bcc(arg3)
    
    if (eax_1.b != 0)
        eax_1 = sub_42e838(arg3)
        
        if (eax_1 != 0)
            (*(*arg3 + 0x40))()
            (*(*arg3 + 0x84))()
            RECT lprc
            eax_1 = IsRectEmpty(&lprc)
            
            if (eax_1 == 0)
                int32_t eax_6 = arg3[0xe] - (lprc.right - lprc.left)
                int32_t edx_3 = arg3[0xf] - (lprc.bottom - lprc.top)
                
                if (*arg2 s> 0)
                    int32_t* eax_8 = arg2
                    *eax_8 -= eax_6
                
                if (*arg1 s> 0)
                    int32_t* eax_10 = arg1
                    *eax_10 -= edx_3
                
                if (*arg5 s> 0)
                    int32_t* eax_12 = arg5
                    *eax_12 -= eax_6
                
                if (*arg4 s> 0)
                    int32_t* eax_14 = arg4
                    *eax_14 -= edx_3
                
                int32_t __saved_ebp
                int32_t* var_74_2 = &__saved_ebp
                int32_t (* var_78)(void* arg1, void* arg2) = j_sub_4037f0
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                int32_t var_40_1
                __builtin_memset(&var_40_1, 0, 0x20)
                int32_t edi_1 = sub_42e838(arg3) - 1
                int32_t var_3c_1
                int32_t var_38_1
                int32_t var_34_1
                int32_t var_30_1
                int32_t var_2c_1
                int32_t var_28_1
                int32_t var_24_1
                
                if (edi_1 s>= 0)
                    int32_t i_1 = edi_1 + 1
                    int32_t var_20_1 = 0
                    int32_t i
                    
                    do
                        int32_t* eax_18 = sub_42e7fc(arg3, var_20_1)
                        
                        if (*(eax_18 + 0x47) != 0)
                        label_43206f:
                            int32_t var_50
                            int32_t var_4c
                            int32_t var_48
                            int32_t var_44
                            int32_t eax_20
                            int32_t edx_10
                            eax_20, edx_10 = sub_431eb0(&var_4c, &var_44, eax_18, &var_50, &var_48)
                            eax_20.b = *(eax_18 + 0x4b)
                            char temp1_1 = eax_20.b
                            eax_20.b -= 1
                            char var_51_1
                            
                            if (temp1_1 u< 1)
                                eax_20.b = *(eax_18 + 0x51)
                                eax_20.b &= 5
                                edx_10.b = 5
                                
                                if (5 != eax_20.b)
                                    var_51_1 = 0
                                else
                                    var_51_1 = 1
                                    
                                    if (var_44 s> 0)
                                        var_44 = lprc.right - lprc.left - eax_18[0xe] - var_44
                                    
                                    if (var_48 s> 0)
                                        var_48 = lprc.right - lprc.left + var_48 - eax_18[0xe]
                            else
                                char temp2_1 = eax_20.b
                                eax_20.b -= 2
                                
                                if (temp2_1 u< 2)
                                    var_51_1 = 1
                                else
                                    char temp4_1 = eax_20.b
                                    eax_20.b -= 2
                                    
                                    var_51_1 = temp4_1 == 2 ? 2 : 3
                            
                            eax_20.b = *(eax_18 + 0x4b)
                            char temp5_1 = eax_20.b
                            eax_20.b -= 1
                            
                            if (temp5_1 u< 1)
                                eax_20.b = *(eax_18 + 0x51)
                                eax_20.b &= 0xa
                                edx_10.b = 0xa
                                
                                if (0xa != eax_20.b)
                                    eax_20 = 0
                                else
                                    eax_20.b = 1
                                    
                                    if (var_4c s> 0)
                                        var_4c = lprc.bottom - lprc.top - eax_18[0xf] - var_4c
                                    
                                    if (var_50 s> 0)
                                        var_50 = lprc.bottom - lprc.top + var_50 - eax_18[0xf]
                            else
                                eax_20.b -= 2
                                char temp6_1 = eax_20.b
                                eax_20.b -= 2
                                
                                if (temp6_1 u< 2)
                                    eax_20.b = 1
                                else if (temp6_1 == 2)
                                    eax_20.b = 2
                                else
                                    eax_20.b = 3
                            
                            edx_10.b = var_51_1
                            
                            if (edx_10.b - 1 u< 2)
                                if (var_44 s> 0 && *arg2 s< var_44)
                                    *arg2 = var_44
                                    
                                    if (*arg2 s> var_24_1)
                                        var_24_1 = *arg2
                                
                                if (var_48 s> 0 && *arg5 s> var_48)
                                    *arg5 = var_48
                                    
                                    if (*arg5 s> var_28_1)
                                        var_28_1 = *arg5
                            else if (edx_10.b == 3)
                                int32_t edx_32 = eax_18[0xe]
                                var_34_1 += edx_32
                                var_38_1 += edx_32
                            
                            if (eax_20.b - 1 u< 2)
                                if (var_4c s> 0 && *arg1 s< var_4c)
                                    *arg1 = var_4c
                                    
                                    if (*arg1 s> var_2c_1)
                                        var_2c_1 = *arg1
                                
                                if (var_50 s> 0 && *arg4 s> var_50)
                                    *arg4 = var_50
                                    
                                    if (*arg4 s> var_30_1)
                                        var_30_1 = *arg4
                            else if (eax_20.b == 3)
                                int32_t eax_42 = eax_18[0xf]
                                var_3c_1 += eax_42
                                var_40_1 += eax_42
                        else if ((eax_18[8].b & 0x10) != 0 && (*(eax_18 + 0x41) & 4) == 0)
                            goto label_43206f
                        
                        var_20_1 += 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (var_24_1 s> 0 && var_24_1 + var_34_1 s> *arg2)
                    *arg2 = var_24_1 + var_34_1
                
                if (var_28_1 s> 0 && (*arg5 == 0 || var_28_1 + var_38_1 s> *arg5))
                    *arg5 = var_28_1 + var_38_1
                
                if (var_2c_1 s> 0 && var_2c_1 + var_3c_1 s> *arg1)
                    *arg1 = var_2c_1 + var_3c_1
                
                if (var_30_1 s> 0 && (*arg4 == 0 || var_30_1 + var_40_1 s> *arg4))
                    *arg4 = var_30_1 + var_40_1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_74_3 = 0x4322f9
                
                if (*arg2 s> 0)
                    *arg2 += eax_6
                
                if (*arg1 s> 0)
                    *arg1 += edx_3
                
                if (*arg5 s> 0)
                    *arg5 += eax_6
                
                int32_t* eax_67 = arg4
                
                if (*eax_67 s> 0)
                    eax_67 = arg4
                    *eax_67 += edx_3
                
                return eax_67
    
    return eax_1
}

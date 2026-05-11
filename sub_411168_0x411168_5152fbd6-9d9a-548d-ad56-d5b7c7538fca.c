// ============================================================
// 函数名称: sub_411168
// 虚拟地址: 0x411168
// WARP GUID: 5152fbd6-9d9a-548d-ad56-d5b7c7538fca
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_40e088, sub_40e0dc, sub_40dfb0, sub_403e4c, sub_40401c, sub_402754, sub_4032f0, sub_40276c
// [被调用的父级函数]: sub_4110a0
// ============================================================

int32_t* __convention("regparm")sub_411168(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_403e4c(arg2, arg1[5])
    sub_403e4c(arg2, arg1[5])
    int32_t ebx
    ebx.w = 0xffff
    int32_t* eax_2 = sub_4032ac(arg1)
    int32_t* result = arg2
    
    if (*result == 0 && eax_2 != 0)
        result = sub_4032f0(*eax_2)
        
        if (result != 0)
            result = sub_40dfb0(sub_4032f0(*eax_2))
            
            if (result != 0 && result[2].w != 0)
                int32_t eax_10 = sub_402754(sx.d(result[2].w) << 2)
                int32_t __saved_ebp
                int32_t* var_24 = &__saved_ebp
                int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                sub_40e088(sub_4032f0(*eax_2), eax_10)
                int32_t edi_1 = sx.d(result[2].w) - 1
                
                if (edi_1 s>= 0)
                    int32_t i_1 = edi_1 + 1
                    int32_t ebx_2 = 0
                    int32_t i
                    
                    do
                        int32_t* esi_1 = *(eax_10 + (ebx_2 << 2))
                        
                        if (***esi_1 == 7)
                            int32_t eax_19
                            int32_t ecx_1
                            eax_19, ecx_1 = sub_40e0dc(eax_2, *(eax_10 + (ebx_2 << 2)))
                            
                            if (eax_19 == arg1)
                                sub_40401c(ecx_1, esi_1 + 0x1a)
                        
                        ebx_2 += 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41126c
                return sub_40276c(eax_10)
    
    return result
}

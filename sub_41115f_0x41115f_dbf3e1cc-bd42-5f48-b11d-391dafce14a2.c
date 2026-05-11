// ============================================================
// 函数名称: sub_41115f
// 虚拟地址: 0x41115f
// WARP GUID: dbf3e1cc-bd42-5f48-b11d-391dafce14a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_40e088, sub_40e0dc, sub_40dfb0, sub_403e4c, sub_40401c, sub_402754, sub_4032f0, sub_40276c
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_41115f(char* arg1, int32_t arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t ebx
    int32_t var_14 = ebx
    char* var_18 = arg5
    int32_t edi
    int32_t var_1c = edi
    *(arg4 - 8) = arg2
    *(arg4 - 4) = arg1
    sub_403e4c(*(arg4 - 8), *(*(arg4 - 4) + 0x14))
    ebx.w = 0xffff
    *(arg4 - 0x10) = sub_4032ac(*(arg4 - 4))
    int32_t* result = *(arg4 - 8)
    
    if (*result == 0 && *(arg4 - 0x10) != 0)
        result = sub_4032f0(**(arg4 - 0x10))
        
        if (result != 0)
            result = sub_40dfb0(sub_4032f0(**(arg4 - 0x10)))
            
            if (result != 0 && result[2].w != 0)
                *(arg4 - 0xc) = sub_402754(sx.d(result[2].w) << 2)
                __return_addr = arg4
                int32_t (* var_4)(void* arg1, void* arg2) = j_sub_4037f0
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                sub_40e088(sub_4032f0(**(arg4 - 0x10)), *(arg4 - 0xc))
                int32_t edi_2 = sx.d(result[2].w) - 1
                
                if (edi_2 s>= 0)
                    int32_t i_1 = edi_2 + 1
                    int32_t ebx_2 = 0
                    int32_t i
                    
                    do
                        int32_t* esi = *(*(arg4 - 0xc) + (ebx_2 << 2))
                        
                        if (***esi == 7)
                            int32_t eax_19
                            int32_t ecx
                            eax_19, ecx = sub_40e0dc(*(arg4 - 0x10), *(*(arg4 - 0xc) + (ebx_2 << 2)))
                            
                            if (eax_19 == *(arg4 - 4))
                                *(arg4 - 4)
                                sub_40401c(ecx, esi + 0x1a)
                        
                        ebx_2 += 1
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                __return_addr = sub_41126c
                return sub_40276c(*(arg4 - 0xc))
    
    *arg4
    return result
}

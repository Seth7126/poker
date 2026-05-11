// ============================================================
// 函数名称: sub_49e7f3
// 虚拟地址: 0x49e7f3
// WARP GUID: 9f7169ce-3b89-59b4-804b-78e057b2c206
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_404078, sub_4042c0, sub_404188, sub_403e4c, sub_404080, sub_403e1c, sub_403fa0, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49e7f3(char* arg1, char* arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t* var_4 = arg3
    int32_t** esp_1 = &var_4
    int32_t i_1 = 6
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp_1 - 4) = i_1
    void* temp0_1 = *(arg4 - 4)
    *(arg4 - 4) = i_1
    int32_t entry_ebx
    *(esp_1 - 8) = entry_ebx
    *(esp_1 - 0xc) = arg5
    *(esp_1 - 0x10) = arg6
    *(arg4 - 4) = arg1
    char** ebx = *(arg4 + 8)
    *(esp_1 - 0x14) = arg4
    *(esp_1 - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0x1c
    int32_t eax_1 = data_52fba0()
    void* esp_10 = &esp_1[1]
    
    if (eax_1 != 1)
        sub_403df8(ebx)
        *(esp_10 - 4) = arg4 - 0x10
        sub_404280(1, sub_404078(arg2), arg2)
        sub_404188(*(arg4 - 0x10), temp0_1)
        int32_t eax_10
        
        if (eax_1 != 1)
            eax_10 = sub_404078(arg2)
        
        if (eax_1 == 1 || eax_10 == 0)
            eax_10.b = 1
        else
            eax_10 = 0
        
        *(arg4 - 5) = eax_10.b
        sub_403e90(arg4 - 0xc, *(arg4 - 4))
        int32_t eax_14 = sub_404078(*(arg4 - 0xc))
        
        if (eax_14 s> 0)
            *(esp_10 - 4) = arg4 - 0x14
            sub_404280(1, sub_404078(*(arg4 - 0xc)), *(arg4 - 0xc))
            sub_404188(*(arg4 - 0x14), temp0_1)
            
            if (eax_14 != 0)
                sub_404080(arg4 - 0xc, temp0_1)
        
        sub_404080(arg4 - 0xc, arg2)
        int32_t eax_23 = sub_404078(*(arg4 - 0xc))
        bool cond:2_1 = eax_23 == 0
        bool cond:3_1 = eax_23 != 0
        
        if (eax_23 s> 0)
            int32_t edi_1 = 1
            
            while (true)
                int32_t eax_61 = sub_404078(*(arg4 - 0xc))
                cond:2_1 = edi_1 == eax_61
                cond:3_1 = edi_1 != eax_61
                
                if (edi_1 s> eax_61)
                    break
                
                int32_t edx_9
                edx_9.b = *(*(arg4 - 0xc) + edi_1 - 1)
                sub_403fa0()
                sub_404188(*(arg4 - 0x18), temp0_1)
                
                if (edi_1 != eax_61)
                    char temp5_1 = *(*(arg4 - 0xc) + edi_1 - 1)
                    
                    if (temp5_1 != 0x2e)
                        int32_t edx_25
                        edx_25.b = *(*(arg4 - 0xc) + edi_1 - 1)
                        sub_403fa0()
                        sub_404080(ebx, *(arg4 - 0x34))
                    else
                        *(esp_10 - 4) = arg4 - 0x24
                        sub_404280(1, sub_404078(*ebx), *ebx)
                        sub_404188(*(arg4 - 0x24), temp0_1)
                        
                        if (temp5_1 == 0x2e)
                            *(esp_10 - 4) = arg4 - 0x28
                            sub_404280(2, edi_1, *(arg4 - 0xc))
                            sub_404188(*(arg4 - 0x28), sub_49eaef+5)
                        
                        if (temp5_1 != 0x2e || temp5_1 != 0x2e)
                            int32_t edx_23
                            edx_23.b = *(*(arg4 - 0xc) + edi_1 - 1)
                            sub_403fa0()
                            sub_404080(ebx, *(arg4 - 0x30))
                        else
                            sub_4042c0(ebx, sub_404078(*ebx), 1)
                            
                            while (true)
                                int32_t eax_50 = sub_404078(*ebx)
                                
                                if (eax_50 s<= 0)
                                    break
                                
                                *(esp_10 - 4) = arg4 - 0x2c
                                sub_404280(1, sub_404078(*ebx), *ebx)
                                sub_404188(*(arg4 - 0x2c), temp0_1)
                                
                                if (eax_50 == 0)
                                    break
                                
                                sub_4042c0(ebx, sub_404078(*ebx), 1)
                            
                            int32_t temp8_1 = edi_1
                            edi_1 += 1
                            
                            if (add_overflow(temp8_1, 1))
                                sub_403010()
                                noreturn
                else if (edi_1 != 1)
                    *(esp_10 - 4) = arg4 - 0x1c
                    sub_404280(1, sub_404078(*ebx), *ebx)
                    sub_404188(*(arg4 - 0x1c), temp0_1)
                    
                    if (edi_1 != 1)
                        int32_t edx_14
                        edx_14.b = *(*(arg4 - 0xc) + edi_1 - 1)
                        sub_403fa0()
                        sub_404080(ebx, *(arg4 - 0x20))
                else
                    sub_403e4c(ebx, temp0_1)
                
                int32_t temp6_1 = edi_1
                edi_1 += 1
                
                if (add_overflow(temp6_1, 1))
                    sub_403010()
                    noreturn
        
        sub_404188(*ebx, temp0_1)
        
        if (not(cond:2_1))
            *(esp_10 - 4) = arg4 - 0x38
            sub_404280(1, sub_404078(*ebx), *ebx)
            sub_404188(*(arg4 - 0x38), temp0_1)
            
            if (not(cond:3_1) && *(arg4 - 5) == 0)
                sub_4042c0(ebx, sub_404078(*ebx), 1)
    else
        sub_403e4c(ebx, arg2)
    
    *(esp_10 + 8)
    fsbase->NtTib.ExceptionList = *esp_10
    *(esp_10 + 8) = sub_49eae3
    return sub_403e1c(arg4 - 0x38, 0xc)
}

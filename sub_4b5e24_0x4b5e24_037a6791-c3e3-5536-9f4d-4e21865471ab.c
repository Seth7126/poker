// ============================================================
// 函数名称: sub_4b5e24
// 虚拟地址: 0x4b5e24
// WARP GUID: 037a6791-c3e3-5536-9f4d-4e21865471ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SysFreeString
// [内部子函数调用]: sub_404c2c, sub_404688, sub_404c50, sub_4b63a0, sub_404f44
// [被调用的父级函数]: sub_4b624c
// ============================================================

int32_t __convention("regparm")sub_4b5e24(int32_t arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: BSTR bstrString_1
    BSTR bstrString_1
    BSTR bstrString = bstrString_1
    int32_t* ebp = &bstrString
    int32_t ebx
    int32_t var_658 = ebx
    int32_t esi
    int32_t var_65c = esi
    int32_t edi
    int32_t var_660 = edi
    int32_t ecx
    int32_t var_c = ecx
    void var_54
    sub_404688(&var_54, 0x40da88)
    int32_t* var_664 = &bstrString
    int32_t (* var_668)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t var_18 = 0
    int32_t* var_670 = &bstrString
    int32_t (* var_674)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_1
    eax_1.b = arg2[1]
    
    if (eax_1 != 0)
        int32_t var_1c_1 = arg3
        void* edi_1 = &(&bstrString)[eax_1 * 4 - 0x194]
        int32_t i = 0
        
        do
            edi_1 -= 0x10
            int32_t eax_4
            eax_4.b = arg2[i + 3]
            ebp[-3] = zx.d(eax_4.b) & 0x7f
            eax_4.b &= 0x80
            
            if (ebp[-3] != 0xa)
                if (ebp[-3] == 0x48)
                    ebp[-7] = &ebp[ebp[-5] * 2 - 0x94]
                    
                    if (eax_4.b == 0)
                        *ebp[-7] = sub_404c50(*ebp[-6])
                        *(ebp[-7] + 4) = 0
                        *edi_1 = 8
                        *(edi_1 + 8) = *ebp[-7]
                    else
                        *ebp[-7] = sub_404c50(**ebp[-6])
                        *(ebp[-7] + 4) = *ebp[-6]
                        *edi_1 = 0x4008
                        *(edi_1 + 8) = ebp[-7]
                    
                    ebp[-5] += 1
                else if (eax_4.b != 0)
                    if (ebp[-3] == 0xc && **ebp[-6] == 0x100)
                        i, ebp = sub_404f44(*ebp[-6], *ebp[-6], VT_BSTR)
                    
                    *edi_1 = ebp[-3] | 0x4000
                    *(edi_1 + 8) = *ebp[-6]
                else if (ebp[-3] != 0xc)
                    *edi_1 = ebp[-3]
                    *(edi_1 + 8) = *ebp[-6]
                    
                    if (ebp[-3] s>= 5 && ebp[-3] s<= 7)
                        ebp[-6] += 4
                        *(edi_1 + 0xc) = *ebp[-6]
                else
                    int16_t* eax_25 = ebp[-6]
                    
                    if (*eax_25 != 0x100)
                        *edi_1 = *eax_25
                        *(edi_1 + 4) = *(eax_25 + 4)
                        *(edi_1 + 8) = *(eax_25 + 8)
                        *(edi_1 + 0xc) = *(eax_25 + 0xc)
                        ebp[-6] += 0xc
                    else
                        ebp[-8] = &ebp[ebp[-5] * 2 - 0x94]
                        *ebp[-8] = sub_404c50(*(*ebp[-6] + 8))
                        *(ebp[-8] + 4) = 0
                        *edi_1 = 8
                        *(edi_1 + 8) = *ebp[-8]
                        ebp[-5] += 1
                
                ebp[-6] += 4
            else
                *edi_1 = 0xa
                *(edi_1 + 8) = 0x80020004
            
            i += 1
        while (i != ebp[-4])
    
    ebp[-0xc] = &ebp[-0x194]
    ebp[-0xb] = ebp[-2] + 4
    ebp[-0xa] = ebp[-4]
    int32_t eax_41
    eax_41.b = arg2[2]
    ebp[-9] = eax_41
    int32_t edx_12 = *ebp[-2]
    int32_t eax_43
    eax_43.b = *arg2
    
    if (eax_43 == 4)
        if ((ebp[-0x194] & 0xfff) == 9)
            eax_43 = 8
        
        *ebp[-2] = 0xfffffffd
        ebp[-0xb] -= 4
        ebp[-9] += 1
    else if (eax_43 == 1 && ebp[-4] == 0 && ebp[2] != 0)
        eax_43 = 3
    
    int32_t* eax_45 = ebp[-1]
    
    if ((*(*eax_45 + 0x18))(eax_45, edx_12, data_52ffb0, 0, eax_43, &ebp[-0xc], ebp[2], &ebp[-0x14], 0)
            != 0)
        sub_4b63a0()
        noreturn
    
    int32_t i_1 = ebp[-5]
    
    while (i_1 != 0)
        i_1 -= 1
        int32_t* edx_14 = ebp[i_1 * 2 - 0x93]
        
        if (edx_14 != 0)
            sub_404c2c(ebp[i_1 * 2 - 0x94], edx_14)
    
    int32_t result = 0
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4b60f4
    int32_t i_2 = ebp[-5]
    
    while (i_2 != 0)
        i_2 -= 1
        bstrString = ebp[i_2 * 2 - 0x94]
        result = SysFreeString(bstrString)
    
    return result
}

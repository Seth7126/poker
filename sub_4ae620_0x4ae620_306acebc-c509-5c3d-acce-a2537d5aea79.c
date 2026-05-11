// ============================================================
// 函数名称: sub_4ae620
// 虚拟地址: 0x4ae620
// WARP GUID: 306acebc-c509-5c3d-acce-a2537d5aea79
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_4030d0, sub_4ade4c, sub_403260, sub_404078, sub_49e52c, sub_4ade74, sub_4accf4, sub_40a074, sub_403010
// [被调用的父级函数]: sub_4ae168, sub_4ae128
// ============================================================

int32_t __convention("regparm")sub_4ae620(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_24 = ebx
    int32_t esi
    int32_t var_28 = esi
    int32_t edi
    int32_t var_2c = edi
    int32_t var_c = 0
    int32_t* var_30 = &var_4
    int32_t (* var_34)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax_2 = sub_4ade4c(*(arg1 + 0x40), 1)
    int32_t* var_3c = &var_4
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((*(*eax_2 + 0x14))(ExceptionList, var_40, var_3c, ExceptionList_1, var_34, var_30) s> 0)
        int32_t eax_6 = (*(*eax_2 + 0x14))(arg1)
        
        if (add_overflow(eax_6, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_6 - 1 s>= 0)
            int32_t var_18_1 = eax_6
            int32_t var_10_1 = 0
            int32_t i
            
            do
                ebp_1[-3]
                int32_t* eax_10 = (*(*ebp_1[-4] + 0x18))()
                sub_403260(eax_10, &data_4ac790)
                int32_t eax_12 = (*(*eax_10 + 0x14))()
                int32_t j = eax_12 - 1
                
                if (add_overflow(eax_12, 0xffffffff))
                    sub_403010()
                    noreturn
                
                if (j s>= 0)
                    do
                        sub_403e90(&ebp_1[-2], *(sub_4accf4(eax_10) + 0x14))
                        
                        if (sub_404078(ebp_1[-2]) s> 0)
                            ebp_1 = sub_49e52c(ebp_1[-2])
                            *(ebp_1 - 0x1c) = fconvert.d(unimplemented  {fstp qword [ebp-0x1c], st0})
                            unimplemented  {fstp qword [ebp-0x1c], st0}
                            sub_40a074()
                            unimplemented  {call 0x40a074}
                            long double temp3_1 = fconvert.t(*(ebp_1 - 0x1c))
                            unimplemented  {fcomp st0, qword [ebp-0x1c]} f- temp3_1
                            bool c0_1 = unimplemented  {fcomp st0, qword [ebp-0x1c]} f< temp3_1
                            bool c2_1 =
                                is_unordered.t(unimplemented  {fcomp st0, qword [ebp-0x1c]}, temp3_1)
                            bool c3_1 = unimplemented  {fcomp st0, qword [ebp-0x1c]} f== temp3_1
                            unimplemented  {fcomp st0, qword [ebp-0x1c]}
                            int16_t top = top + 3
                            int16_t eax_19 = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            
                            if (not(test_bit(eax_19:1.b, 6)) && not(test_bit(eax_19:1.b, 0)))
                                int32_t eax_21 = (*(*eax_10 + 0x14))()
                                sub_4030d0(sub_4accf4(eax_10))
                                
                                if (eax_21 == (*(*eax_10 + 0x14))())
                                    (*(*eax_10 + 0x44))()
                        
                        j -= 1
                    while (j != 0xffffffff)
                
                ebp_1[-3] += 1
                i = ebp_1[-5]
                ebp_1[-5] -= 1
            while (i != 1)
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_4ae75a
    void* edx_10
    edx_10.b = 1
    return sub_4ade74(*(ebp_1[-1] + 0x40), edx_10.b)
}

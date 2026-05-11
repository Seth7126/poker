// ============================================================
// 函数名称: sub_437e28
// 虚拟地址: 0x437e28
// WARP GUID: 09c34f43-796b-58da-8c32-8850927d7481
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41e04c, sub_438056, sub_41ee98, sub_40fac8, sub_4195ec, sub_41dae0, sub_4128b4, sub_40faac, sub_4373c4, sub_438240, sub_4128f8, sub_4128a4
// [被调用的父级函数]: sub_43813c
// ============================================================

int32_t __convention("regparm")sub_437e28(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t var_1c
    sub_4128f8(arg2, &var_1c, 4)
    void var_20
    sub_4128f8(arg2, &var_20, 4)
    int32_t edx_2
    edx_2.b = 1
    int32_t* eax_2 = sub_41dae0(sub_41799a+0xe2, edx_2)
    int32_t* var_54 = &var_4
    int32_t (* var_58)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4128a4(arg2)
    (*(*eax_2 + 0x50))(ExceptionList, var_58, var_54)
    sub_4128b4(arg2)
    int32_t edx_6
    edx_6.b = 1
    int32_t* ExceptionList_1 = sub_41dae0(sub_41799a+0xe2, edx_6)
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    (*(*ExceptionList_1 + 0x50))(ExceptionList_1, j_sub_4037f0, &var_4)
    int32_t edx_8
    edx_8.b = 1
    int32_t* eax_9 = sub_41dae0(sub_41799a+0xe2, edx_8)
    *(arg1 + 0x28)
    (*(*eax_9 + 0x40))(arg1)
    *(arg1 + 0x24)
    (*(*eax_9 + 0x34))()
    int32_t edx_11
    edx_11.b = 1
    int32_t* eax_14 = sub_41dae0(sub_41799a+0xe2, edx_11)
    sub_41ee98(eax_14, 1)
    *(arg1 + 0x28)
    (*(*eax_14 + 0x40))()
    *(arg1 + 0x24)
    (*(*eax_14 + 0x34))()
    void var_34
    sub_40faac(*(arg1 + 0x28), 0, 0, &var_34, *(arg1 + 0x24))
    sub_438240(arg1)
    int32_t* var_c_3 = &var_4
    int32_t (* var_10_3)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t eax_26
    int32_t edx_17
    edx_17:eax_26 = sx.q((*(*var_c_3 + 0x20))(ExceptionList_1, var_10_3, var_c_3))
    
    if (divs.dp.d(edx_17:eax_26, *(arg1 + 0x24)) - 1 s>= 0)
        int32_t var_24_1 = divs.dp.d(edx_17:eax_26, *(arg1 + 0x24))
        int32_t edi_1 = 0
        
        while (ebp_1[-7] != 0)
            if (divs.dp.d(sx.q((*(*ebp_1[-2] + 0x2c))()), *(ebp_1[-1] + 0x28)) - 1 s>= 0)
                int32_t ebx_1 = 0
                
                while (ebp_1[-7] != 0)
                    sub_40fac8(*(ebp_1[-1] + 0x28), *(ebp_1[-1] + 0x24) * edi_1, 
                        *(ebp_1[-1] + 0x28) * ebx_1, &ebp_1[-0x10], *(ebp_1[-1] + 0x24))
                    sub_4195ec(sub_41e04c(ebp_1[-2]), &ebp_1[-0xc], sub_41e04c(ebp_1[-3]), 
                        &ebp_1[-0x10])
                    sub_40fac8(*(ebp_1[-1] + 0x28), *(ebp_1[-1] + 0x24) * edi_1, 
                        *(ebp_1[-1] + 0x28) * ebx_1, &ebp_1[-0x10], *(ebp_1[-1] + 0x24))
                    sub_4195ec(sub_41e04c(ebp_1[-4]), &ebp_1[-0xc], sub_41e04c(ebp_1[-5]), 
                        &ebp_1[-0x10])
                    int32_t ebx_2
                    int32_t esi_4
                    ebx_2, ebp_1, esi_4 = sub_4373c4(ebp_1[-1], ebp_1[-3], ebp_1[-5])
                    ebp_1[-7] -= 1
                    ebx_1 = ebx_2 + 1
                    
                    if (esi_4 == 1)
                        break
            
            edi_1 += 1
            int32_t temp2_1 = ebp_1[-8]
            ebp_1[-8] -= 1
            
            if (temp2_1 == 1)
                break
    
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_438076
    return sub_438056(ebp_1) __tailcall
}

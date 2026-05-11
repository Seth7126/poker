// ============================================================
// 函数名称: sub_4342ac
// 虚拟地址: 0x4342ac
// WARP GUID: 46f966a4-403b-5e4f-ba8c-e6195dc659ba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4339c0, sub_434264, sub_434984, sub_4032ac, sub_4339c4, sub_4030d0, sub_42b690, sub_4335fc, sub_42c2ec, sub_43334c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4342ac(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    int32_t var_10 = 0
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    sub_434984(arg1, *(arg1 + 0x64))
    sub_4339c0(arg1)
    int32_t* var_40 = &var_4
    int32_t (* var_44)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg2 + 4))(ExceptionList, var_44, var_40, ExceptionList_1, var_38, var_34)
    int32_t* ecx_2
    int32_t edx_1
    edx_1, ecx_2 = (*(*arg2 + 4))(arg2)
    int32_t i_4
    
    if (i_4 - 1 s>= 0)
        int32_t i_2 = i_4
        int32_t var_20_1 = 0
        int32_t i
        
        do
            edx_1 = sub_434264(&ebp_1[-3], edx_1, ecx_2, ebp_1)
            ecx_2 = ebp_1
            
            if (ebp_1[-3] != 0)
                int32_t ebx_2
                ebx_2.w = 0xffbd
                ecx_2, edx_1 = sub_4032ac(*(ebp_1[-2] + 0x14), ebp_1[-3], &ebp_1[-4])
                
                if (ebp_1[-4] != 0)
                    sub_42b690(ebp_1[-4], 0)
                    ecx_2, edx_1, ebp_1 = sub_42c2ec(0, *(ebp_1[-2] + 0x14), ebp_1[-4], 0)
            
            ebp_1[-7] += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    ebp_1[-2]
    (*(*ebp_1[-1] + 4))()
    ebp_1[-6] = 0
    int32_t* esi_3 = nullptr
    
    while (true)
        (*(*ebp_1[-1] + 4))()
        
        if (ebp_1[-5] == data_52e854)
            break
        
        int32_t edx_6
        edx_6.b = 1
        int32_t* eax_15 = sub_43334c(sub_428598+0x154, edx_6, ebp_1[-2])
        (*(*ebp_1[-1] + 4))()
        int32_t ecx_9
        int32_t edx_9
        edx_9, ecx_9 = (*(*ebp_1[-1] + 4))()
        sub_434264(&ebp_1[-3], edx_9, ecx_9, ebp_1)
        
        if (ebp_1[-3] != 0)
            ebp_1[-3]
            char eax_20
            eax_20, esi_3 = sub_4335fc(eax_15)
            
            if (eax_20 == 0)
                sub_4030d0(eax_15)
                continue
        
        if (ebp_1[-5] == 0)
            *(ebp_1[-2] + 0x64) = eax_15
        else if (ebp_1[-5] == ebp_1[-6])
            esi_3[3] = eax_15
            eax_15[6] = esi_3
            eax_15[5] = esi_3[5]
        else if (ebp_1[-5] s> ebp_1[-6])
            esi_3[2] = eax_15
            eax_15[5] = esi_3
        else if (ebp_1[-5] s< ebp_1[-6])
            int32_t* eax_27 = esi_3
            int32_t i_3 = ebp_1[-6] - ebp_1[-5]
            
            if (i_3 s> 0)
                ebp_1[-7] = 1
                int32_t i_1
                
                do
                    eax_27 = eax_27[5]
                    ebp_1[-7] += 1
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            eax_27[3] = eax_15
            eax_15[6] = eax_27
            eax_15[5] = eax_27[5]
        
        ebp_1[-6] = ebp_1[-5]
        esi_3 = eax_15
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_43448e
    return sub_4339c4(ebp_1[-2])
}

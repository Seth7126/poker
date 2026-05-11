// ============================================================
// 函数名称: sub_40fb5c
// 虚拟地址: 0x40fb5c
// WARP GUID: b3938ca9-ab93-58ca-8abf-1c38c28f105d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_403030, sub_4038c8, sub_4108e4, sub_410524
// [被调用的父级函数]: sub_40fc0c, sub_40fc2c, sub_40fcf8
// ============================================================

char* __convention("regparm")sub_40fb5c(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* eax_1 = sub_4108e4(data_531624)
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_2 = eax_1[2] - 1
    char* result
    int32_t* esp
    
    if (esi_2 s< 0)
    label_40fbbd:
        
        if ((*(*data_531628 + 0x50))() s< 0)
            int32_t var_c_1 = 0
            fsbase->NtTib.ExceptionList = arg1
            __return_addr = &data_40fc00
            return sub_410948(data_531624)
        
        result = (*(*data_531628 + 0x18))(arg1)
        sub_4038c8()
        void arg_4
        esp = &arg_4
    else
        int32_t esi_3 = esi_2 + 1
        int32_t ebx_1 = 0
        
        while (true)
            result = sub_410524(eax_1, ebx_1)
            
            if (sub_403030(result, arg1) != 0)
                sub_4038c8(ExceptionList, var_20)
                esp = &var_18
                break
            
            ebx_1 += 1
            int32_t temp0_1 = esi_3
            esi_3 -= 1
            
            if (temp0_1 == 1)
                goto label_40fbbd
    
    *esp
    esp[1]
    esp[2]
    esp[4]
    esp[5]
    return result
}

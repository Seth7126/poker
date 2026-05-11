// ============================================================
// 函数名称: sub_51a838
// 虚拟地址: 0x51a838
// WARP GUID: e0af2fca-89c0-50fe-ac34-a08035d9de89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e90, sub_404188, sub_493660, sub_51aaa0, sub_492b8c, sub_403df8, sub_51a79c
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

void* __convention("regparm")sub_51a838(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    void* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_1
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    
    if (*(arg1 + 0x97a) == 0)
        sub_51aaa0(*data_5303b8, 0)
        int32_t ecx_1 = sub_403df8(&var_8)
        int32_t edx
        
        switch (*(*data_530304 + 0xde0))
            case 1
                ecx_1, edx = sub_403e90(&var_8, 0x51a9c8)
            case 2
                ecx_1, edx = sub_403e90(&var_8, 0x51a9d4)
            case 3
                ecx_1, edx = sub_403e90(&var_8, 0x51a9e0)
            case 4
                ecx_1, edx = sub_403e90(&var_8, 0x51a9ec)
            case 5
                ecx_1, edx = sub_403e90(&var_8, 0x51a9f8)
            case 6
                ecx_1, edx = sub_403e90(&var_8, 0x51aa04)
            case 7
                ecx_1, edx = sub_403e90(&var_8, 0x51aa10)
        
        int32_t temp0_1 = *(arg1 + 0x96c)
        
        if (temp0_1 s<= 0)
            sub_493660(*(arg1 + 4), 0)
            *(arg1 + 0x97b) = 1
            int32_t* var_24_1 = &var_4
            int32_t (* var_28_1)() = j_sub_40353c
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_492b8c(*(arg1 + 4), 0, ecx_1)
            esp = &ExceptionList_1
            fsbase->NtTib.ExceptionList = ExceptionList
        else
            edx.b = 1
            sub_493660(*(arg1 + 4), edx.b)
            char* ecx_2
            int32_t edx_2
            ecx_2, edx_2 = sub_404188(var_8, *(arg1 + 0x960))
            
            if (temp0_1 != 0 || arg2 != 0 || *(arg1 + 0x97b) != 0)
                edx_2, ebp_1 = sub_51a79c(arg1, var_8, ecx_2)
                esp = &var_8
            
            edx_2.b = 1
            sub_51aaa0(*data_5303b8, edx_2)
            *(arg1 + 0x97b) = 0
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_51a9ba
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}

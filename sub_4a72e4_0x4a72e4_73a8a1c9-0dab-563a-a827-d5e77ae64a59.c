// ============================================================
// 函数名称: sub_4a72e4
// 虚拟地址: 0x4a72e4
// WARP GUID: 73a8a1c9-0dab-563a-a827-d5e77ae64a59
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4128c0, sub_4a3478, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

char** __convention("regparm")sub_4a72e4(int32_t* arg1, char arg2, char arg3)
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
    char* var_c = nullptr
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax = 0
    int32_t* esi_1 = arg1[0x1d]
    
    if (esi_1 != 0)
        void var_8
        
        if (*(arg1 + 0x61) == 0)
            esp = &var_8
            eax = (*(*esi_1 + 0x48))() ^ 1
        else
            esp = &var_8
            
            if ((*(*esi_1 + 0x48))() != 0)
                (*(*arg1 + 0x5c))()
                int32_t edx_2
                edx_2.b = 4
                sub_4a3478()
                (*(*arg1 + 0x3c))()
            
            eax = 1
    
    if (eax != 0)
        int32_t eax_7
        eax_7.b = sub_4128c0(arg1[0x1b]) == 0
        eax_7.b |= arg3
        
        if (eax_7.b != 0 && arg2 != 0)
            sub_405ae8(data_530640, &var_c)
            int32_t edx_6
            edx_6.b = 1
            sub_40b4b0(0x4989a8, edx_6, var_c)
            sub_403828()
            noreturn
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4a739d
    char** result = &var_c
    sub_403df8(result)
    return result
}

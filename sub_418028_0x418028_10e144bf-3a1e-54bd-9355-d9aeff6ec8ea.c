// ============================================================
// 函数名称: sub_418028
// 虚拟地址: 0x418028
// WARP GUID: 10e144bf-3a1e-54bd-9355-d9aeff6ec8ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_419794, sub_419a38, sub_4108e4, sub_410524, sub_417fbc, sub_419b60
// [被调用的父级函数]: sub_42faa4
// ============================================================

int32_tsub_418028()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t i = 0
    int32_t* eax_1 = sub_4108e4(data_5316ac)
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    while (eax_1[2] s> i)
        int32_t eax_3 = sub_410524(eax_1, i)
        sub_419794(eax_3)
        i += 1
        sub_419b60(eax_3)
    
    sub_417fbc(data_5316a4)
    void* ebp_1 = sub_417fbc(data_5316a8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4180cc
    int32_t ebx_3 = *(ebp_1 - 4) - 1
    
    if (ebx_3 s>= 0)
        int32_t i_2 = ebx_3 + 1
        int32_t esi_1 = 0
        int32_t i_1
        
        do
            sub_419a38(sub_410524(*(ebp_1 - 8), esi_1))
            esi_1 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    return sub_410948(data_5316ac)
}

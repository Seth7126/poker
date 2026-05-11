// ============================================================
// 函数名称: sub_41383c
// 虚拟地址: 0x41383c
// WARP GUID: 00a26c00-efc6-5283-a91e-80241a0643a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_4030d0, sub_410414, sub_4108e4, sub_410524
// [被调用的父级函数]: sub_4138b8
// ============================================================

int32_t __convention("regparm")sub_41383c(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* eax_1 = sub_4108e4(data_531630)
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = eax_1[2] - 1
    
    if (i s>= 0)
        do
            int32_t* eax_3 = sub_410524(eax_1, i)
            
            if (eax_3[1] == *(arg1 + 4) && eax_3[3] == *(arg1 + 0xc))
                sub_4030d0(eax_3)
                sub_410414(eax_1, i)
            
            i -= 1
        while (i != 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_4138b3
    return sub_410948(data_531630)
}

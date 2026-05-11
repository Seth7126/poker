// ============================================================
// 函数名称: sub_4ecd3c
// 虚拟地址: 0x4ecd3c
// WARP GUID: b5153779-84dd-55c2-9948-2dfc91b39b51
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_406010, sub_405f88, sub_404080, sub_402824, sub_403fa0, sub_403df8
// [被调用的父级函数]: sub_4ecdcc
// ============================================================

int32_t* __convention("regparm")sub_4ecd3c(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg1)
    *(arg2 - 1) = 0
    
    while (*(arg2 - 1) != 0x23)
        uint32_t eax_5 = sub_405f88(arg2 - 0x150)
        sub_402824(eax_5)
        
        if (eax_5.b != 0)
            break
        
        void* eax_2
        int32_t edx_2
        eax_2, edx_2 = sub_406010(arg2 - 0x150, arg2 - 1)
        sub_402824(eax_2)
        
        if (*(arg2 - 1) != 0x23)
            edx_2.b = *(arg2 - 1)
            sub_403fa0()
            sub_404080(arg1, var_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4ecdc6
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}

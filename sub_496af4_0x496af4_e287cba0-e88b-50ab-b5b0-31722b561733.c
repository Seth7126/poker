// ============================================================
// 函数名称: sub_496af4
// 虚拟地址: 0x496af4
// WARP GUID: e287cba0-e88b-50ab-b5b0-31722b561733
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_494050, sub_494048, sub_410524
// [被调用的父级函数]: sub_496a11, sub_4976ec, sub_497894, sub_49692d
// ============================================================

int32_t __convention("regparm")sub_496af4(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x5c)
    int32_t result = *(arg1 + 0x5c)
    
    if (result == arg2)
        return result
    
    int32_t result_1
    
    result_1 = result s<= arg2 ? result : arg2
    
    *(arg1 + 0x5c) = arg2
    sub_494048(*(arg1 + 0x68))
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_1 = *(*(arg1 + 0x64) + 8) - 1
    
    if (esi_1 s>= 0)
        int32_t i_1 = esi_1 + 1
        int32_t ebx_1 = 0
        int32_t i
        
        do
            int32_t edx_1
            edx_1.b = result_1 s> ebx_1
            *(sub_410524(*(arg1 + 0x64), ebx_1) + 0x40) = edx_1.b
            ebx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const var_1c_1 = &data_496b86
    return sub_494050(*(arg1 + 0x68))
}

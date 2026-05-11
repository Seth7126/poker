// ============================================================
// 函数名称: sub_4168b4
// 虚拟地址: 0x4168b4
// WARP GUID: 75ab1c83-2539-58d5-9423-12ecac30afc8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4168b4(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg3 s< 0 || arg3 s> 2)
        result = 0x80030001
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        int32_t eax_3 = (*(**(arg1 + 0xc) + 0xc))()
        
        if (arg4 != 0)
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(eax_3)
            *arg4 = eax_6
            arg4[1] = edx_2
        
        result = 0
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}

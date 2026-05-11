// ============================================================
// 函数名称: sub_41684c
// 虚拟地址: 0x41684c
// WARP GUID: 92b1ff12-d770-5f0e-bd97-f5b34b25b14d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_41684c(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result
    
    if (arg2 != 0)
        int32_t eax_2 = (*(**(arg1 + 0xc) + 8))()
        
        if (arg4 != 0)
            *arg4 = eax_2
        
        result = 0
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        result = 0x80030009
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return result
}

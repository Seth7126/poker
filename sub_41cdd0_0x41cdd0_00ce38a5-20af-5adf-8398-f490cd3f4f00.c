// ============================================================
// 函数名称: sub_41cdd0
// 虚拟地址: 0x41cdd0
// WARP GUID: 00ce38a5-20af-5adf-8398-f490cd3f4f00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41ceb4, sub_410948, sub_410524, sub_4108e4
// [被调用的父级函数]: sub_41e3e0, sub_41d8d4, sub_41d214, sub_41e440, sub_41d0c0, sub_41d064, sub_41cf54
// ============================================================

void __convention("regparm")sub_41cdd0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg1 == 0)
        return 
    
    int32_t* eax_1 = sub_4108e4(data_52e624)
    int32_t __saved_ebp
    int32_t* var_14 = &__saved_ebp
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = eax_1[2] - 1
    
    if (i s>= 0)
        do
            int32_t eax_3 = sub_410524(eax_1, i)
            void* edx_2 = *(eax_3 + 0x58)
            
            if (edx_2 != 0 && *(*(edx_2 + 0x20) + 8) == arg1)
                sub_41ceb4(eax_3)
            
            i -= 1
        while (i != 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_14_1 = 0x41ce47
    sub_410948(data_52e624)
}

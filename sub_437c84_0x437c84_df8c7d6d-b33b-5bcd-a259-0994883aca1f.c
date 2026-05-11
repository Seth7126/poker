// ============================================================
// 函数名称: sub_437c84
// 虚拟地址: 0x437c84
// WARP GUID: df8c7d6d-b33b-5bcd-a259-0994883aca1f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_437490, sub_4030d0, sub_437c44, sub_4030a0, sub_4381c4
// [被调用的父级函数]: sub_437d74
// ============================================================

int32_t __convention("regparm")sub_437c84(int32_t arg1, int32_t* arg2, int32_t arg3 @ edi)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t ebx_1 = arg1
    int32_t eax_1
    
    if (arg2 != 0)
        eax_1 = sub_437490(ebx_1)
        arg1 = sub_437490(arg2)
    
    char var_5
    
    if (arg2 != 0 && eax_1 == arg1)
        int32_t eax_4
        int32_t ecx_1
        int32_t edx
        eax_4, ecx_1, edx = sub_437490(ebx_1)
        
        if (eax_4 == 0)
            arg1, ecx_1, edx = sub_437490(arg2)
        
        if (eax_4 != 0 || arg1 != 0)
            edx.b = 1
            int32_t eax_7 = sub_4030a0(ecx_1, edx)
            int32_t __saved_ebp
            int32_t* var_20 = &__saved_ebp
            int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t ecx_2
            int32_t edx_2
            void* ebp
            ecx_2, edx_2, ebp = sub_4381c4(ebx_1, eax_7)
            edx_2.b = 1
            *(ebp - 0xc) = sub_4030a0(ecx_2, edx_2)
            void* var_20_1 = ebp
            int32_t (* var_24_1)(void* arg1, void* arg2) = j_sub_4037f0
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            void* ebp_1 = sub_4381c4(arg2, *(ebp - 0xc))
            *(ebp_1 - 1) = sub_437c44(*(ebp_1 - 8), *(ebp_1 - 0xc))
            fsbase->NtTib.ExceptionList = arg3
            int32_t (* var_14_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
                int32_t arg5) = sub_437d4a
            return sub_4030d0(*(ebp_1 - 0xc))
        
        var_5 = 1
    else
        var_5 = 0
    
    arg1.b = var_5
    return arg1
}

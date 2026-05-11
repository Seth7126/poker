// ============================================================
// 函数名称: sub_42db2c
// 虚拟地址: 0x42db2c
// WARP GUID: 5da56d10-0dab-5914-aeb4-992e02d48e3c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_431a88, sub_410718, sub_410670, sub_4030a0, sub_410524
// [被调用的父级函数]: sub_42dc47
// ============================================================

struct _EXCEPTION_REGISTRATION_RECORD* __convention("regparm")sub_42db2c(struct _EXCEPTION_REGISTRATION_RECORD* arg1)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = arg1
    struct _EXCEPTION_REGISTRATION_RECORD* result = ExceptionList
    
    if (result->__offset(0x180).d == 0)
        return result
    
    int32_t edx
    edx.b = 1
    int32_t ecx
    int32_t* eax_1 = sub_4030a0(ecx, edx)
    int32_t __saved_ebp
    __return_addr = &__saved_ebp
    int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_4 = *(ExceptionList->__offset(0x180).d + 8)
    sub_410718(eax_1, i_4)
    
    if (i_4 - 1 s>= 0)
        int32_t i_2 = i_4
        int32_t esi_1 = 0
        int32_t i
        
        do
            void* eax_7 = sub_410524(ExceptionList->__offset(0x180).d, esi_1)
            int32_t edx_3 = *(eax_7 + 0x170)
            
            if (edx_3 s>= 0 && edx_3 s< i_4)
                sub_410670(eax_1, edx_3, eax_7)
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (i_4 - 1 s>= 0)
        int32_t i_3 = i_4
        int32_t esi_2 = 0
        int32_t i_1
        
        do
            void* eax_10 = sub_410524(eax_1, esi_2)
            
            if (eax_10 != 0)
                sub_431a88(eax_10, esi_2.w)
            
            esi_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    __return_addr = &data_42dbf7
    return sub_4030d0(eax_1)
}

// ============================================================
// 函数名称: sub_513e4c
// 虚拟地址: 0x513e4c
// WARP GUID: b8b62c83-c64a-59c8-8e99-5d7157df9d03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_420ad0, sub_50d52c, sub_515920, sub_402bdc, sub_402b4c, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4c96bc, sub_5223e8, sub_511e1c, sub_508998, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_513e4c(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t entry_result
    int32_t entry_result
    int32_t entry_result_1 = entry_result
    void var_8c
    int32_t ecx
    sub_50d52c(ecx, &var_8c)
    
    if (*(arg1 + 0x1a0) == 0)
        int32_t __saved_ebp
        int32_t* var_a4_1 = &__saved_ebp
        int32_t (* var_a8_1)() = j_sub_40353c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        char var_88_1 = 8
        char var_85_1 = 1
        int32_t i_1 = 8
        void var_83
        void* eax_1 = &var_83
        int32_t i
        
        do
            *eax_1 = 9
            eax_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
        int32_t eax_2 = *(arg1 + 0x350)
        void var_84
        *(&var_84 + eax_2) = (*(arg1 + 0x9c)).b
        char var_7b[0xb]
        var_7b[eax_2] = arg2
        int32_t var_70_1 = eax_2
        void var_68
        sub_402bdc(&var_68, arg1 + 0xa0, 0x40)
        
        if (*(arg1 + 0x1b4) != 0 && *(arg1 + 0x1e0) == 0)
            int32_t eax_4 = *(arg1 + 0x1c0)
            
            if (add_overflow(eax_4, *(arg1 + 0x1c4)))
                sub_403010()
                noreturn
            
            int32_t eax_6
            int32_t edx_3
            edx_3:eax_6 = sx.q(eax_4 + *(arg1 + 0x1c4))
            uint32_t eax_7 = GetTickCount()
            int32_t var_90_1 = sbb.d(edx_3, 0, eax_6 u< eax_7)
            int32_t eax_9
            int32_t edx_5
            eax_9, edx_5 = sub_402b4c(float.t((eax_6 - eax_7).q) / fconvert.t(1000f))
            int32_t var_6c_1 = sub_420ad0(eax_9, edx_5, 0, 0)
        
        if (*(arg1 + 0x345) == 0)
            char var_86_2 = 0
        else
            char var_86_1 = 4
        
        entry_result = sub_515920(arg1, &var_8c, nullptr)
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return entry_result
}

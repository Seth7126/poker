// ============================================================
// 函数名称: sub_40ffac
// 虚拟地址: 0x40ffac
// WARP GUID: e60b8754-ba0b-5ba2-ae7b-0808c802f207
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_410524, sub_4038c8, sub_4108e4
// [被调用的父级函数]: sub_414820
// ============================================================

int32_t __convention("regparm")sub_40ffac(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0
    int32_t var_c = 0
    int32_t* eax_1 = sub_4108e4(data_53162c)
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ebx_1 = eax_1[2] - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            void* eax_3 = sub_410524(eax_1, esi_1)
            
            if (*(eax_3 + 4) == arg1)
                int32_t result = *(eax_3 + 8)
                sub_4038c8(ExceptionList, var_20)
                return result
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_1c_1 = 0x410023
    return sub_410948(data_53162c)
}

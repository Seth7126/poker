// ============================================================
// 函数名称: sub_42e4a4
// 虚拟地址: 0x42e4a4
// WARP GUID: 5f19798d-5342-5d78-9867-08929a2365b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4103c8, sub_4032ac, sub_42e3a0, sub_42e7fc, sub_4030d0, sub_42e3a8, sub_42e838, sub_410414, sub_4030a0, sub_410524, sub_42ad90
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42e4a4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char edx
    char var_9 = edx
    int32_t result
    int32_t ecx
    int32_t edx_1
    result, ecx, edx_1 = sub_42e838(arg1)
    
    if (result == 0)
        return result
    
    edx_1.b = 1
    int32_t var_10 = sub_4030a0(ecx, edx_1)
    sub_42e3a0(arg1)
    int32_t* var_c = &var_4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    fsbase->NtTib.ExceptionList = &__saved_ebx
    int32_t edi_1 = sub_42e838(arg1) - 1
    
    if (edi_1 s>= 0)
        int32_t i_1 = edi_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            void* eax_7
            eax_7.b = *(sub_42e7fc(arg1, esi_1) + 0x4b)
            eax_7.b -= 3
            char temp0_1 = eax_7.b
            eax_7.b -= 2
            
            if (temp0_1 u< 2)
                sub_4103c8(j_sub_4037f0, sub_42e7fc(arg1, esi_1))
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t ebx
    ebx.w = 0xffc7
    sub_4032ac(arg1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = &data_42e592
    
    while (true)
        int32_t* eax_11 = sub_410524(j_sub_4037f0, 0x7400fb7c)
        
        if (*(eax_11 + 0x4b) != 3)
            sub_42ad90(eax_11, 0x7400fb03)
        else
            sub_42ad90(eax_11, 0x7400fb04)
        
        sub_410414(j_sub_4037f0, 0x7400fb7c)
}

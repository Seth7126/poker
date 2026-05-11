// ============================================================
// 函数名称: sub_4132fc
// 虚拟地址: 0x4132fc
// WARP GUID: 8e8e210c-0eb0-5a61-bf7a-935f548cb8e8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40e150, sub_40e0dc, sub_410948, sub_4030d0, sub_410414, sub_4108e4, sub_4030a0, sub_410524, sub_4131b4, sub_41327c, sub_4132b4, sub_40c9e0
// [被调用的父级函数]: sub_414fca
// ============================================================

voidsub_4132fc()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    
    if (data_53161c == 0)
        return 
    
    sub_40c9e0(data_531618)
    int32_t* var_20 = &__saved_ebp
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    int32_t* eax_2
    int32_t ecx
    eax_2, ecx = sub_4108e4(data_531630)
    int32_t* var_2c = &__saved_ebp
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (eax_2[2] s<= 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_2c_4 = 0x41348f
        sub_410948(data_531630)
        return 
    
    int32_t eax_4
    int32_t ecx_1
    eax_4, ecx_1 = sub_4030a0(ecx, 1)
    int32_t var_8 = eax_4
    int32_t* var_2c_1 = &__saved_ebp
    int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_c = sub_4030a0(ecx_1, 1)
    int32_t* var_2c_2 = &__saved_ebp
    int32_t (* var_30_2)(void* arg1, void* arg2) = j_sub_4037f0
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 0
    
    while (i s< eax_2[2])
        int32_t* eax_8 = sub_410524(eax_2, i)
        eax_8[4]
        int32_t eax_10
        void* edx_2
        eax_10, edx_2 = data_53161c()
        ebp[-3] = eax_10
        
        if (ebp[-3] == 0)
            int32_t eax_12
            eax_12, edx_2 = sub_40e0dc(eax_8[1], eax_8[3])
            
            if (eax_12 == 0)
                int32_t* var_38_2 = ebp
                sub_4132b4(eax_8[1], edx_2)
                i += 1
                continue
        
        if (ebp[-3] != 0)
            int32_t* eax_14
            eax_14, ebp = sub_4131b4(ebp[-3], eax_8[5])
            edx_2 = sub_40e150(eax_8[1], eax_8[3], eax_14)
        
        int32_t* var_38_1 = ebp
        sub_41327c(eax_8[1], edx_2)
        sub_410414(eax_2, i)
        sub_4030d0(eax_8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_3)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
        int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) = sub_41341e
    sub_4030d0(ebp[-2])
}

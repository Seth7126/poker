// ============================================================
// 函数名称: sub_4134b8
// 虚拟地址: 0x4134b8
// WARP GUID: c8c8b87e-675e-5256-8153-40474d28d032
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410948, sub_4030d0, sub_410414, sub_4108e4, sub_410524, sub_4089dc
// [被调用的父级函数]: sub_416cb4, sub_414fde, sub_442735
// ============================================================

void __convention("regparm")sub_4134b8(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (data_531630 == 0)
    if (data_531630 == 0)
        return 
    
    int32_t* eax_1 = sub_4108e4(data_531630)
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = eax_1[2] - 1
    
    if (i s>= 0)
        do
            int32_t* eax_3 = sub_410524(eax_1, i)
            
            if (arg1 == 0 || eax_3[2] == arg1)
                char eax_6
                
                if (arg2 != 0)
                    eax_6 = sub_4089dc(arg2, eax_3[4])
                
                if (arg2 == 0 || eax_6 != 0)
                    sub_410414(eax_1, i)
                    sub_4030d0(eax_3)
            
            i -= 1
        while (i != 0xffffffff)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const var_1c_1 = &data_41355a
    sub_410948(data_531630)
}

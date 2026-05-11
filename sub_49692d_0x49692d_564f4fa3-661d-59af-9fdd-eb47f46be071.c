// ============================================================
// 函数名称: sub_49692d
// 虚拟地址: 0x49692d
// WARP GUID: 564f4fa3-661d-59af-9fdd-eb47f46be071
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_496a11, sub_415cb4, sub_4030d0, sub_41060c, sub_495c64, sub_4953dc, sub_415cac, sub_493f6c, sub_4953cc, sub_496af4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49692d(char* arg1, int32_t arg2, void* arg3 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    *(arg3 - 4) = arg1
    sub_4953dc(*(arg3 - 4))
    void* var_14 = arg3
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    *(arg3 - 8) = *(*(arg3 - 4) + 0x5c)
    void* var_20 = arg3
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp = sub_496af4(*(arg3 - 4), 0)
    
    while (true)
        int32_t* ebx_2 = *(*(ebp - 4) + 0x64)
        
        if (ebx_2[2] s<= 0)
            break
        
        int32_t* eax_5 = sub_41060c(ebx_2)
        *(eax_5 + 0xe) = 0
        sub_415cac(eax_5)
        sub_493f6c(eax_5[0xf])
        int32_t* eax_8 = eax_5[0xc]
        
        if (eax_8 != 0 && eax_8[2].b != 0)
            sub_4953cc(eax_8)
        
        sub_415cb4(eax_5)
        sub_4030d0(eax_5)
    
    while (true)
        int32_t* ebx_3 = *(*(ebp - 4) + 0x60)
        
        if (ebx_3[2] s<= 0)
            break
        
        sub_4030d0(sub_41060c(ebx_3))
    
    void* eax_16 = *(*(ebp - 4) + 0x6c)
    
    if (eax_16 != 0)
        sub_415cac(eax_16)
    
    sub_495c64(*(ebp - 4), arg2)
    sub_4030d0(*(*(ebp - 4) + 0x6c))
    *(*(ebp - 4) + 0x6c) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_20_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5, int32_t arg6) = sub_496a24
    return sub_496a11(ebp) __tailcall
}

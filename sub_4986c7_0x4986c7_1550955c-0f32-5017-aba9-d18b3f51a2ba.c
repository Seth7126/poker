// ============================================================
// 函数名称: sub_4986c7
// 虚拟地址: 0x4986c7
// WARP GUID: 1550955c-0f32-5017-aba9-d18b3f51a2ba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_4030d0, sub_403e4c, sub_4030a0, sub_4981b4, sub_402bdc, sub_497dd4, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4986c7(char* arg1, void* arg2, int32_t* arg3, void* arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: *arg3 -= 1
    *arg3 -= 1
    *arg1 += arg1.b
    arg3[0x11].b += arg1.b
    int32_t ebx
    int32_t var_3 = ebx
    void* var_7 = arg2
    void* var_f = arg2
    *arg1 += arg1.b
    char temp0 = *arg5
    *arg5 += arg1.b
    
    if (not(add_overflow(temp0, arg1.b)))
        if (temp0 + arg1.b u< temp0)
            undefined
        
        jump(0x4986dd)
    
    *(arg4 - 0x10371) &= arg3.b
    int32_t var_13 = *(arg2 - 0x7ba74ff)
    int32_t edi
    sub_4981b4(arg1, arg2.b, arg3, arg5, edi)
    sub_4981b4(*(arg4 - 6), 0, arg4 - 0x86, arg5, edi)
    *(arg4 - 0x82) = 0xa
    sub_404054(arg4 - 0x202, *(arg4 - 0xa), 0xff)
    void* edx_1
    edx_1.b = 1
    void* eax_4 = sub_4030a0(sub_402bdc(arg4 - 0x21, arg4 - 0x202, 0x12), edx_1)
    *(*(arg4 - 2) + 0x10c) = eax_4
    var_13 = *(*(arg4 - 2) + 4)
    sub_497dd4(eax_4, arg4 - 0x86, arg4 - 0xde, 0x1b8a)
    sub_403e4c(*(arg4 - 2) + 0x108, *(*(*(arg4 - 2) + 0x10c) + 0x31fc))
    void* eax_12
    eax_12.b = *(*(*(arg4 - 2) + 0x10c) + 0x339c)
    *(*(arg4 - 2) + 0x110) = eax_12.b
    void* eax_14
    eax_14.b = *(*(*(arg4 - 2) + 0x10c) + 0x339d)
    *(*(arg4 - 2) + 0x111) = eax_14.b
    TEB* fsbase
    fsbase->NtTib.ExceptionList = 0x1b8a
    sub_4030d0(*(*(arg4 - 2) + 0x10c))
    fsbase->NtTib.ExceptionList = arg5
    __return_addr = &data_498861
    return sub_403e1c(arg4 - 0xa, 2)
}

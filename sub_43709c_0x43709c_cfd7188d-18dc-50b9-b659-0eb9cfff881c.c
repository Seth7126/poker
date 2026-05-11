// ============================================================
// 函数名称: sub_43709c
// 虚拟地址: 0x43709c
// WARP GUID: cfd7188d-18dc-50b9-b659-0eb9cfff881c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_437168, sub_41dae0, sub_4030a0, sub_405ae8, sub_403df8, sub_437b70, sub_40b4b0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_43709c(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    edx.b = 1
    int32_t ecx
    arg1[0x10] = sub_4030a0(ecx, edx)
    int32_t eax_2 = arg1[9]
    
    if (eax_2 s< 1 || eax_2 s> 0x8000 || arg1[0xa] s< 1)
        sub_405ae8(data_5301cc, &var_8)
        int32_t edx_3
        edx_3.b = 1
        sub_40b4b0(sub_40eacb+0x7d, edx_3, var_8)
        sub_403828()
        noreturn
    
    arg1[0xb] = 4
    *(arg1 + 0x35) = 1
    sub_437b70(arg1, 2)
    *(arg1 + 0x37) = 0
    arg1[0xe] = 0x1fffffff
    arg1[0xf] = 0x1fffffff
    int32_t edx_4
    edx_4.b = 1
    arg1[0x11] = sub_41dae0(sub_41799a+0xe2, edx_4)
    void* ebp_1 = sub_437168(arg1)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_437150
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}

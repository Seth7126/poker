// ============================================================
// 函数名称: sub_444722
// 虚拟地址: 0x444722
// WARP GUID: e839329e-1f0b-5b60-b6bb-b5018f89d9a2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403828, sub_405ae8, sub_403df8, sub_40b4b0, sub_42ec58
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_444722(char* arg1, int32_t* arg2, int32_t arg3 @ ebp, int32_t arg4 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t entry_ebx
    int32_t var_30 = entry_ebx + 1
    *(arg3 - 0x28) = 0
    void* var_34 = arg3
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1[0x217] != 1 || (arg1[0x20] & 0x10) != 0)
        sub_42ec58(arg1, arg2)
        arg1[0x2cc] &= 0xef
    else
        void* eax_1 = *(data_5317d8 + 0x38)
        
        if (eax_1 == 0 || *(eax_1 + 0x23c) == 0)
            sub_405ae8(data_53085c, arg3 - 0x28)
            int32_t edx_1
            edx_1.b = 1
            sub_40b4b0(sub_40eacb+0x7d, edx_1, *(arg3 - 0x28))
            sub_403828()
            noreturn
        
        *(arg3 - 0x24) = &arg2[0x13]
        *(arg3 - 0x20) = *arg2
        *(arg3 - 0x1c) = data_5314dc
        *(arg3 - 0x18) = arg2[3]
        *(arg3 - 0x14) = arg2[4]
        *(arg3 - 0x10) = arg2[5]
        *(arg3 - 0xc) = arg2[6]
        *(arg3 - 8) = arg2[1]
        *(arg3 - 4) = arg2[8]
        *(arg1 + 0x14c) = SendMessageA(*(*(data_5317d8 + 0x38) + 0x23c), 0x220, 0, arg3 - 0x24)
        arg1[0x2cc] |= 0x10
    
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_34_1)(int32_t* arg1 @ ebp) = sub_444829
    sub_403df8(arg3 - 0x28)
    return arg3 - 0x28
}

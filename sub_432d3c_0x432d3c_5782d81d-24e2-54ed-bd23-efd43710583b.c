// ============================================================
// 函数名称: sub_432d3c
// 虚拟地址: 0x432d3c
// WARP GUID: 5782d81d-24e2-54ed-bd23-efd43710583b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos
// [内部子函数调用]: sub_4471b0, sub_4471bc, sub_4471d4, sub_4318d0, sub_42c7f8, sub_42b7a8, sub_4471c8
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_432d3c(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi
    int32_t var_20 = esi
    int32_t edi
    int32_t var_24 = edi
    int32_t* var_28 = arg3
    int32_t Y
    __builtin_memcpy(&Y, arg2, 0x10)
    int32_t* ecx = var_28
    data_530a18
    *(arg1 + 0x1f8) = 1
    var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx_2
    void* ebp_1
    ebx_2, ebp_1 = sub_42b7a8(arg1, ecx)
    *(ebp_1 - 8) += 4
    sub_42c7f8(*(ebp_1 - 4), ebp_1 - 0x14)
    *ebx_2
    
    if (sub_4471c8() s< *(*(ebp_1 - 4) + 0x3c) + *(ebp_1 - 0x10))
        *ebx_2
        *(ebp_1 - 0x10) = sub_4471c8() - *(*(ebp_1 - 4) + 0x3c)
    
    *ebx_2
    
    if (sub_4471d4() s< *(*(ebp_1 - 4) + 0x38) + *(ebp_1 - 0x14))
        *ebx_2
        *(ebp_1 - 0x14) = sub_4471d4() - *(*(ebp_1 - 4) + 0x38)
    
    *ebx_2
    
    if (sub_4471bc() s> *(ebp_1 - 0x14))
        *ebx_2
        *(ebp_1 - 0x14) = sub_4471bc()
    
    *ebx_2
    
    if (sub_4471b0() s> *(ebp_1 - 8))
        *ebx_2
        *(ebp_1 - 8) = sub_4471b0()
    
    enum SET_WINDOW_POS_FLAGS uFlags = 0x50
    int32_t cy = *(*(ebp_1 - 4) + 0x3c)
    int32_t cx = *(*(ebp_1 - 4) + 0x38)
    Y = *(ebp_1 - 0x10)
    SetWindowPos(sub_4318d0(*(ebp_1 - 4)), 0xffffffff, *(ebp_1 - 0x14), Y, cx, cy, uFlags)
    (*(**(ebp_1 - 4) + 0x74))(arg1)
    fsbase->NtTib.ExceptionList = arg1
    __return_addr = sub_432e50
    void* result = *(ebp_1 - 4)
    *(result + 0x1f8) = 0
    return result
}

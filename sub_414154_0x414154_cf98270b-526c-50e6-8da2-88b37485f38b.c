// ============================================================
// 函数名称: sub_414154
// 虚拟地址: 0x414154
// WARP GUID: cf98270b-526c-50e6-8da2-88b37485f38b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4137a0, sub_4032ac, sub_4144e8, sub_41464c, sub_413f0c
// [被调用的父级函数]: sub_4140e4
// ============================================================

void* __fastcallsub_414154(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
    int32_t eax
    int32_t var_8 = eax
    
    while (sub_4137a0(ebp_1[-1]) == 0)
        ebp_1 = sub_41464c(ebp_1[-1], arg2)
    
    ebp_1[-1]
    sub_4144e8()
    ebp_1[-2] = *(ebp_1[-1] + 0x2c)
    ebp_1[-3] = *(ebp_1[-1] + 0x28)
    ebx.w = 0xfffb
    *(ebp_1[-1] + 0x2c) = sub_4032ac(arg2)
    int32_t* var_14_1 = ebp_1
    int32_t (* var_18_1)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.w = 0xfffc
    int32_t eax_12 = sub_4032ac(arg2)
    *(ebp_1[-1] + 0x28) = eax_12
    
    if (eax_12 == 0)
        *(ebp_1[-1] + 0x28) = *(ebp_1[-1] + 0x18)
    
    while (sub_4137a0(ebp_1[-1]) == 0)
        ebp_1 = sub_413f0c(ebp_1[-1])
    
    ebp_1[-1]
    sub_4144e8()
    int32_t var_10
    fsbase->NtTib.ExceptionList = var_10
    int32_t (* var_8_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41421d
    *(ebp_1[-1] + 0x2c) = ebp_1[-2]
    void* result = ebp_1[-1]
    *(result + 0x28) = ebp_1[-3]
    return result
}

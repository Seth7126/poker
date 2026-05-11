// ============================================================
// 函数名称: sub_425418
// 虚拟地址: 0x425418
// WARP GUID: f7451637-7cf6-5eae-901e-0fec7bd18620
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_405ae8, sub_403df8, sub_411774
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_425418(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    ebx.w = 0xffb4
    
    if (sub_4032ac(*(arg1 + 0xc), arg2) == 0xffffffff)
        sub_405ae8(data_5307e4, &var_8)
        sub_411774(arg2, var_8)
        noreturn
    
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_42547d
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}

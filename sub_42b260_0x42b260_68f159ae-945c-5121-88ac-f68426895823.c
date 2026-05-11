// ============================================================
// 函数名称: sub_42b260
// 虚拟地址: 0x42b260
// WARP GUID: 68f159ae-945c-5121-88ac-f68426895823
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_405ae8, sub_403df8, sub_40b4ec
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_42b260(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t var_10 = 0
    int32_t* var_1c = &var_4
    int32_t (* var_20)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8
    
    if (*(arg1 + 0x24) != 0)
        (*(**(arg1 + 0x24) + 0x3c))()
        *arg2 += *(arg1 + 0x30)
        arg2[1] += *(arg1 + 0x34)
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = sub_42b2e8
        int32_t* result = &var_10
        sub_403df8(result)
        return result
    
    int32_t var_c = *(arg1 + 8)
    var_8.b = 0xb
    int32_t* var_28 = &var_c
    sub_405ae8(data_530724, &var_10)
    int32_t edx_1
    edx_1.b = 1
    sub_40b4ec(sub_40eacb+0x7d, edx_1, var_10, 0)
    sub_403828()
    noreturn
}

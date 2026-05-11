// ============================================================
// 函数名称: sub_4a93b0
// 虚拟地址: 0x4a93b0
// WARP GUID: 20381992-4fc8-53c1-a0b2-396cd47b659e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4a3ae0, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: sub_4ab100
// ============================================================

int32_t* __convention("regparm")sub_4a93b0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t __saved_edx
    int32_t __saved_edx_1 = __saved_edx
    int32_t edi
    int32_t var_14 = edi
    int32_t* var_18 = &var_4
    int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((*(*arg1 + 0x48))(ExceptionList, var_1c, var_18) == 0)
        sub_405ae8(data_53045c, &var_8)
        int32_t edx_2
        edx_2.b = 1
        sub_40b4b0(sub_498a24+0x48, edx_2, var_8)
        sub_403828()
        noreturn
    
    sub_4a3ae0(arg3, arg1[0x1a], 0)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_4a9427
    int32_t* result = &var_8
    sub_403df8(result)
    return result
}

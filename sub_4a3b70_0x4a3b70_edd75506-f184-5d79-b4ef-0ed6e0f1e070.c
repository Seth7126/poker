// ============================================================
// 函数名称: sub_4a3b70
// 虚拟地址: 0x4a3b70
// WARP GUID: edd75506-f184-5d79-b4ef-0ed6e0f1e070
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4a4010, sub_40b4ec, sub_405ae8, sub_4a3fb8, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_4a90cc
// ============================================================

int32_t __convention("regparm")sub_4a3b70(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_24 = ebx
    char* var_20 = nullptr
    char* var_1c = nullptr
    char* var_18 = nullptr
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    
    if (*(arg1 + 0x1c) != 0 || *(arg1 + 0x24) == 0 || *(arg1 + 0x28) == 0)
        if (sub_4a3fb8(arg1, 0, ecx) == 0)
            sub_405ae8(data_53042c, &var_20)
            int32_t edx_5
            edx_5.b = 1
            sub_40b4b0(sub_4a3789+0x16b, edx_5, var_20)
            sub_403828()
            noreturn
    else
        int32_t var_14
        
        if (*(arg1 + 0x24) s> *(arg1 + 0x28))
            var_14 = *(arg1 + 0x24)
            char var_10 = 0
            int32_t var_c = *(arg1 + 0x28)
            char var_8 = 0
            int32_t* var_34 = &var_14
            sub_405ae8(data_53068c, &var_18)
            int32_t edx_1
            edx_1.b = 1
            sub_40b4ec(sub_4a3789+0x237, edx_1, var_18, 1)
            sub_403828()
            noreturn
        
        if (sub_4a4010(arg1) == 0)
            var_14 = *(arg1 + 0x24)
            char var_10_1 = 0
            int32_t var_c_1 = *(arg1 + 0x28)
            char var_8_1 = 0
            int32_t* var_34_1 = &var_14
            sub_405ae8(data_530738, &var_1c)
            int32_t edx_3
            edx_3.b = 1
            sub_40b4ec(sub_4a3789+0x1cf, edx_3, var_1c, 1)
            sub_403828()
            noreturn
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_28_1)(int32_t* arg1 @ ebp) = sub_4a3c8b
    return sub_403e1c(&var_20, 3)
}

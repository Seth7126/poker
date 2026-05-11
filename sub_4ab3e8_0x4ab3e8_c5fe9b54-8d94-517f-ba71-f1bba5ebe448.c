// ============================================================
// 函数名称: sub_4ab3e8
// 虚拟地址: 0x4ab3e8
// WARP GUID: c5fe9b54-8d94-517f-ba71-f1bba5ebe448
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4033d0, sub_4030a0, sub_405ae8, sub_403df8, sub_4aa9c8, sub_40b4b0, sub_403010
// [被调用的父级函数]: sub_4aad8c, sub_4ab224
// ============================================================

char** __convention("regparm")sub_4ab3e8(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    int32_t ecx
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    *(esp - 4) = &var_4
    *(esp - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0xc
    sub_4030a0(ecx, 0)
    
    if (data_52fd78 s<= 0 && sub_4aa9c8() == 0)
        sub_405ae8(data_530358, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_4aa278+0x48, edx_1, var_8)
        sub_403828()
        noreturn
    
    int32_t temp0 = data_52fd78
    data_52fd78 += 1
    
    if (add_overflow(temp0, 1))
        sub_403010()
        noreturn
    
    *(arg1 + 0x18) = 0
    *(arg1 + 5) = 0
    *(arg1 + 0x2c) = 1
    esp[4]
    fsbase->NtTib.ExceptionList = esp[2]
    esp[4] = sub_4ab487
    char** result = &var_8
    sub_403df8(result)
    return result
}

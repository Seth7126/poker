// ============================================================
// 函数名称: sub_4148a8
// 虚拟地址: 0x4148a8
// WARP GUID: 5688bf2e-d71e-577e-82eb-5cd8f7131f87
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415168, sub_413a50, sub_403828, sub_405074, sub_404cec, sub_4044e8, sub_4050b4, sub_404d30, sub_4050e8, sub_40e40c, sub_414430, sub_414264, sub_4142a4, sub_403df8, sub_4151c8, sub_415210, sub_414224, sub_40b56c, sub_4142f0
// [被调用的父级函数]: sub_414aa0
// ============================================================

int32_t*sub_4148a8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    wchar16* var_1c
    __builtin_memset(&var_1c, 0, 0x18)
    int32_t ebx
    int32_t var_20 = ebx
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_2
    BSTR ecx
    int32_t edx
    eax_2, ecx, edx = sub_413a50(*(arg1 - 4))
    int32_t eax_3
    eax_3.b = eax_2
    char* var_18
    int32_t var_14
    int32_t var_c
    
    switch (eax_3)
        case 0, 0xd
            *(arg1 - 4)
            
            if (sub_415210(ecx) != 0xd)
                sub_404d30(&var_14, data_52ff80)
            else
                sub_404cec(&var_14)
            
            goto label_414a4b
        case 2
            var_c.b = sub_414430(*(arg1 - 4))
        label_414a4b:
            int32_t eax_36
            eax_36.b = eax_2
            eax_36.w = *((eax_36 << 2) + &data_52e328)
            var_14.w = eax_36.w
            sub_40e40c(*(arg1 - 8), *(arg1 - 0xc), &var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_24_1)(int32_t* arg1 @ ebp) = sub_414a9a
            sub_4044e8(&var_1c)
            sub_403df8(&var_18)
            int32_t* result = &var_14
            sub_4050e8(result)
            return result
        case 3
            var_c.w = sub_414430(*(arg1 - 4))
            goto label_414a4b
        case 4
            int32_t var_c_1 = sub_414430(*(arg1 - 4))
            goto label_414a4b
        case 5
            var_c.q = fconvert.d(sub_414224(*(arg1 - 4)))
            goto label_414a4b
        case 6, 0xc
            sub_415168(*(arg1 - 4), &var_18, ecx)
            sub_405074(&var_14, var_18)
            goto label_414a4b
        case 8, 9
            *(arg1 - 4)
            int32_t eax_34
            eax_34.b = sub_415210(ecx).b == 9
            char temp0_1 = eax_34.b
            eax_34.b = neg.b(eax_34.b)
            var_c.w = (sbb.d(eax_34, eax_34, temp0_1 != 0)).w
            goto label_414a4b
        case 0xf
            float var_c_2 = fconvert.s(sub_414264(*(arg1 - 4)))
            goto label_414a4b
        case 0x10
            var_c.q = int.q(sub_4142a4(*(arg1 - 4)))
            goto label_414a4b
        case 0x11
            var_c.q = fconvert.d(sub_4142f0(*(arg1 - 4)))
            goto label_414a4b
        case 0x12
            sub_4151c8(*(arg1 - 4), &var_1c, ecx)
            sub_4050b4(&var_14, var_1c)
            goto label_414a4b
    
    edx.b = 1
    sub_40b56c(sub_40e812+6, edx, data_5308f0)
    sub_403828()
    noreturn
}

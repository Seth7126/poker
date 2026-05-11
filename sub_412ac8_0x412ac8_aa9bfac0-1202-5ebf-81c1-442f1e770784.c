// ============================================================
// 函数名称: sub_412ac8
// 虚拟地址: 0x412ac8
// WARP GUID: aa9bfac0-1202-5ebf-81c1-442f1e770784
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_4033d0, sub_40b5a8, sub_408f48, sub_403428, sub_408f08
// [被调用的父级函数]: sub_48f6a4, sub_4a82e4, sub_41b380, sub_411cb4, sub_48f5f8, sub_411f48, sub_41b2f8
// ============================================================

int32_t* __fastcallsub_412ac8(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int16_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* esp_1 = &var_1c
    
    if (arg2.b != 0)
        void var_2c
        esp_1 = &var_2c
        arg3 = sub_4033d0(arg1, arg2)
    
    char var_5 = arg2.b
    int32_t var_10
    
    if (arg4 != 0xffff)
        HANDLE eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_408f08(arg1, zx.d(arg4))
        arg3[1] = eax_4
        
        if (arg3[1] s< 0)
            var_10 = arg1
            char var_c_1 = 0xb
            *(esp_1 - 4) = &var_10
            *(esp_1 - 8) = 0
            edx_2.b = 1
            sub_40b5a8(0x40e768, edx_2, data_53083c)
            sub_403828()
            noreturn
    else
        HANDLE eax_1
        int32_t edx
        eax_1, edx = sub_408f48(arg1)
        arg3[1] = eax_1
        
        if (eax_1 s< 0)
            var_10 = arg1
            char var_c = 0xb
            *(esp_1 - 4) = &var_10
            *(esp_1 - 8) = 0
            edx.b = 1
            sub_40b5a8(0x40e70c, edx, data_530814)
            sub_403828()
            noreturn
    
    if (var_5 != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return arg3
}

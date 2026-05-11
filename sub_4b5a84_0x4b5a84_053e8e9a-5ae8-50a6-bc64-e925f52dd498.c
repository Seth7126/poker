// ============================================================
// 函数名称: sub_4b5a84
// 虚拟地址: 0x4b5a84
// WARP GUID: 053e8e9a-5ae8-50a6-bc64-e925f52dd498
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_403e90, sub_40ac70, sub_40b63c, sub_409af4, sub_405ae8, sub_403e1c
// [被调用的父级函数]: sub_4b59d2, sub_4b62cc, sub_4b5b54, sub_4b5bec
// ============================================================

int32_t __convention("regparm")sub_4b5a84(void* arg1, int32_t arg2, void* arg3, int32_t arg4, uint32_t arg5)
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
    int32_t* esp_1 = &var_24
    int32_t var_10 = 0
    int32_t var_c = 0
    
    if (arg2.b != 0)
        void var_34
        esp_1 = &var_34
        arg1 = sub_4033d0(arg3, arg2)
    
    char var_5 = arg2.b
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    void* esp_4 = esp_1 - 0xc
    fsbase->NtTib.ExceptionList = esp_4
    sub_403e90(&var_c, arg3)
    
    if (var_c == 0)
        sub_40ac70(arg5, &var_c)
        
        if (var_c == 0)
            *(esp_4 - 4) = 0
            sub_405ae8(data_530070, &var_10)
            int32_t edx_3 = var_10
            uint32_t var_18 = arg5
            char var_14_1 = 0
            sub_409af4(&var_18, edx_3, &var_c)
    
    *(esp_4 - 4) = arg4
    sub_40b63c(var_c, 0, arg1)
    *(arg1 + 0xc) = arg5
    *(esp_4 + 8)
    fsbase->NtTib.ExceptionList = *esp_4
    *(esp_4 + 8) = sub_4b5b32
    return sub_403e1c(&var_10, 2)
}

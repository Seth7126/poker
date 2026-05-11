// ============================================================
// 函数名称: sub_499960
// 虚拟地址: 0x499960
// WARP GUID: fd122b02-e099-5965-827f-e17e32166699
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_40ac70, sub_404138, sub_403e4c, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_49a8c8, sub_49a7e8, sub_4998ec
// ============================================================

int32_t __convention("regparm")sub_499960(int32_t* arg1, int32_t arg2, char* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = 0
    char* var_c = nullptr
    char* var_10 = nullptr
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t* esp = &var_1c
    
    if (arg2.b != 0)
        void var_2c
        esp = &var_2c
        arg1 = sub_4033d0(arg3, arg2)
    
    var_8:3.b = arg2.b
    *(esp - 4) = &var_4
    *(esp - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0xc) = fsbase->NtTib.ExceptionList
    void* esp_3 = esp - 0xc
    fsbase->NtTib.ExceptionList = esp_3
    sub_403e4c(&arg1[5], arg3)
    arg1[3] = arg4
    
    if (arg4 != 0)
        sub_40ac70(arg4, &var_c)
        sub_403e4c(&arg1[4], var_c)
        *(esp_3 - 4) = arg3
        *(esp_3 - 8) = &data_499a34
        *(esp_3 - 0xc) = arg1[4]
        sub_404138(&var_10, 3)
        sub_40b4b0(arg1, 0, var_10)
    else
        sub_40b4b0(arg1, 0, arg3)
    
    *(esp_3 + 8)
    fsbase->NtTib.ExceptionList = *esp_3
    *(esp_3 + 8) = sub_499a07
    return sub_403e1c(&var_10, 2)
}

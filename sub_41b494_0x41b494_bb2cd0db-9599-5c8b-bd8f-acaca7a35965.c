// ============================================================
// 函数名称: sub_41b494
// 虚拟地址: 0x41b494
// WARP GUID: bb2cd0db-9599-5c8b-bd8f-acaca7a35965
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4030a0, sub_41b614, sub_405ae8, sub_403e1c
// [被调用的父级函数]: sub_41b97c
// ============================================================

int32_t __fastcallsub_41b494(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14 = 0
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t* esp_1 = &var_1c
    int32_t eax
    
    if (arg2.b != 0)
        void var_2c
        esp_1 = &var_2c
        eax = sub_4033d0(0, arg2)
    
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    sub_4030a0(0, 0)
    esp_1[0xc] = 0
    esp_1[0xb] = &data_417940
    sub_405ae8(data_530514, &var_8)
    void* ebp_1 = sub_41b614(eax, &data_41b5a0, var_8)
    esp_1[0xa] = 0
    esp_1[9] = &data_417940
    sub_405ae8(data_530078, ebp_1 - 8)
    void* ebp_2 = sub_41b614(eax, &data_41b5ac, *(ebp_1 - 8))
    esp_1[8] = 0
    esp_1[7] = 0x417bbc
    sub_405ae8(data_530074, ebp_2 - 0xc)
    void* ebp_3 = sub_41b614(eax, &data_41b5b8, *(ebp_2 - 0xc))
    esp_1[6] = 0
    esp_1[5] = 0x417a7c
    sub_405ae8(data_530060, ebp_3 - 0x10)
    void* ebp_4 = sub_41b614(eax, &data_41b5c4, *(ebp_3 - 0x10))
    esp_1[7]
    fsbase->NtTib.ExceptionList = esp_1[5]
    esp_1[7] = sub_41b578
    return sub_403e1c(ebp_4 - 0x10, 4)
}

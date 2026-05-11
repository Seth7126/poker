// ============================================================
// 函数名称: sub_4a73d0
// 虚拟地址: 0x4a73d0
// WARP GUID: 8f902c91-9065-5894-9e89-778a2aeecaa8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4a8af0, sub_403428, sub_4a3350, sub_4a87b0, sub_4a5c8c
// [被调用的父级函数]: sub_4ac654
// ============================================================

int32_t* __convention("regparm")sub_4a73d0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp_1 = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp_1 = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4a3350(arg1, 0)
    arg1[0x25] = 0
    int32_t edx
    edx.b = 1
    int32_t* eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_4a5c8c(&data_4a5b50, edx)
    arg1[0x19] = eax_1
    edx_1.b = 1
    int32_t* eax_2
    int32_t ecx_3
    int32_t edx_2
    eax_2, ecx_3, edx_2 = sub_4a5c8c(&data_4a5b50, edx_1)
    arg1[0x1e] = eax_2
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0
    edx_2.b = 1
    int32_t eax_4
    int32_t ecx_4
    int32_t edx_3
    eax_4, ecx_4, edx_3 = sub_4a87b0(ecx_3, edx_2, &data_4a6c6c)
    arg1[0x27] = eax_4
    arg1[0x26] = 0x8000
    arg1[0x28] = 0x8000
    *(esp_1 - 4) = arg1
    *(esp_1 - 8) = 0x4a8ac8
    edx_3.b = 1
    void* esp_7 = esp_1
    arg1[0x1b] = sub_4a8af0(ecx_4, edx_3, &data_4a6ce4)
    arg1[0x20] = 0x4000
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_7
        esp_7 += 0x10
    
    *esp_7
    *(esp_7 + 4)
    *(esp_7 + 8)
    return arg1
}

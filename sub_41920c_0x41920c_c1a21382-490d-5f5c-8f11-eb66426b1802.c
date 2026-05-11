// ============================================================
// 函数名称: sub_41920c
// 虚拟地址: 0x41920c
// WARP GUID: c1a21382-490d-5f5c-8f11-eb66426b1802
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection
// [内部子函数调用]: sub_4033d0, sub_4030a0, sub_403428, sub_41085c, sub_418c44, sub_418718, sub_418f10
// [被调用的父级函数]: sub_4258dc, sub_4425d8, sub_443300, sub_41ce4c, sub_43d934, sub_4331f0, sub_432928, sub_434670
// ============================================================

int32_t* __convention("regparm")sub_41920c(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp_1 = &var_c
    int32_t ecx
    
    if (arg2.b != 0)
        void var_1c
        esp_1 = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4030a0(ecx, 0)
    *(esp_1 - 4) = &arg1[0xe]
    InitializeCriticalSection()
    void* esp_3 = esp_1
    int32_t edx
    edx.b = 1
    int32_t* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_418718(sub_416e58+0x3d4, edx)
    arg1[3] = eax_2
    eax_2[3] = arg1
    eax_2[2] = sub_419d88
    eax_2[5] = &arg1[0xe]
    edx_1.b = 1
    int32_t* eax_4
    int32_t edx_2
    eax_4, edx_2 = sub_418c44(sub_4172a2+0x106, edx_1)
    arg1[4] = eax_4
    eax_4[3] = arg1
    eax_4[2] = sub_419da8
    eax_4[5] = &arg1[0xe]
    edx_2.b = 1
    int32_t* eax_6 = sub_418f10(sub_4172a2+0x206, edx_2)
    arg1[5] = eax_6
    eax_6[3] = arg1
    eax_6[2] = sub_419dc8
    eax_6[5] = &arg1[0xe]
    arg1[8] = 0xcc0020
    arg1[2].b = 0
    
    if (sub_41085c(data_5316ac, arg1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    *(esp_3 + 8)
    return arg1
}

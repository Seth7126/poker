// ============================================================
// 函数名称: sub_42d8f4
// 虚拟地址: 0x42d8f4
// WARP GUID: 9ba5ff28-9887-50dd-a50f-d2ca781aad69
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_4475f4, sub_440bfc, sub_4190bc, sub_42a97c, sub_403e4c, sub_403df8, sub_418f10
// [被调用的父级函数]: sub_4258dc, sub_423e50, sub_441b0c, sub_4b2780, sub_4331f0, sub_424f68, sub_4b2693
// ============================================================

char** __convention("regparm")sub_42d8f4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t* esp_1 = &var_14
    char* var_c = nullptr
    
    if (arg2.b != 0)
        void var_24
        esp_1 = &var_24
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    char var_5 = arg2.b
    *(esp_1 - 4) = &var_4
    *(esp_1 - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_1 - 0xc
    sub_42a97c(arg1, 0)
    *(esp_1 - 0x10) = arg1
    *(esp_1 - 0x14) = sub_42f010
    int32_t eax_1
    int32_t edx
    eax_1, edx = sub_440bfc()
    arg1[0x57] = eax_1
    edx.b = 1
    int32_t* eax_2 = sub_418f10(sub_4172a2+0x206, edx)
    arg1[0x4c] = eax_2
    arg1[0x18]
    sub_4190bc(eax_2)
    arg1[0x58].b = 1
    arg1[0x5c] = 0xffffffff
    arg1[0x55].b = 3
    
    if (*(data_530a80 + 4) != 0x11)
        sub_4475f4(*data_530a18, &var_c)
        sub_403e4c(&arg1[0x56], var_c)
    else
        sub_403df8(&arg1[0x56])
    
    arg1[0x5f].b = 0
    *(arg1 + 0x122) = 0xf
    *(arg1 + 0x123) = 2
    arg1[0x49].b = 1
    arg1[0x4a] = 1
    *(esp_1 - 4)
    fsbase->NtTib.ExceptionList = *(esp_1 - 0xc)
    *(esp_1 - 4) = sub_42d9ed
    char** result = &var_c
    sub_403df8(result)
    return result
}

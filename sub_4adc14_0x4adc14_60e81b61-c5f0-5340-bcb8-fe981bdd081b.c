// ============================================================
// 函数名称: sub_4adc14
// 虚拟地址: 0x4adc14
// WARP GUID: 60e81b61-c5f0-5340-bcb8-fe981bdd081b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_411410, sub_4033d0, sub_41281c, sub_4030a0, sub_403428, sub_40c8fc
// [被调用的父级函数]: sub_4adf9c, sub_4ae06f, sub_4ae0d4
// ============================================================

int32_t* __convention("regparm")sub_4adc14(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    *(esp_1 - 4) = 0x4ac990
    sub_411410(ecx, 0, arg1)
    void* esp_3 = esp_1
    int32_t edx_1
    edx_1.b = 1
    int32_t* eax_1
    int32_t ecx_1
    int32_t edx_2
    eax_1, ecx_1, edx_2 = sub_40c8fc(sub_408781+0x1f, edx_1)
    arg1[8] = eax_1
    edx_2.b = 1
    int32_t* eax_3 = sub_4030a0(ecx_1, edx_2)
    arg1[7] = eax_3
    sub_41281c(eax_3, 0)
    
    if (var_8:3.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    *(esp_3 + 8)
    *(esp_3 + 0xc)
    return arg1
}

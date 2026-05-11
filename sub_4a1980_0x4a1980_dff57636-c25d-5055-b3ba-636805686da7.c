// ============================================================
// 函数名称: sub_4a1980
// 虚拟地址: 0x4a1980
// WARP GUID: dff57636-c25d-5055-b3ba-636805686da7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_49f0a4
// [被调用的父级函数]: sub_4a2ab4, sub_4b1210
// ============================================================

int32_t* __convention("regparm")sub_4a1980(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp_1 = &var_10
    int32_t ecx
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4030a0(ecx, 0)
    int32_t edx
    edx.b = 1
    int32_t* eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_49f0a4(&data_49ed40, edx)
    arg1[2] = eax_1
    eax_1[0xe] = 0x400
    edx_1.b = 1
    arg1[0xb] = sub_49f0a4(&data_49ed40, edx_1)
    (*(*arg1 + 0x14))()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    esp_1[3]
    return arg1
}

// ============================================================
// 函数名称: sub_4164f4
// 虚拟地址: 0x4164f4
// WARP GUID: eed16176-8135-5222-8065-1dbc930342c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4164f4(int32_t* arg1, int32_t arg2)
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
    (**arg1)()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return arg1
}

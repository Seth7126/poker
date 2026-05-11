// ============================================================
// 函数名称: sub_4ae0d4
// 虚拟地址: 0x4ae0d4
// WARP GUID: 3b42afc0-f606-5fb1-b7c0-7cf789e62587
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_415d18, sub_4adc14
// [被调用的父级函数]: sub_4b06c8
// ============================================================

int32_t* __convention("regparm")sub_4ae0d4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp_1 = &var_c
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_1c
        esp_1 = &var_1c
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_415d18(arg1, 0, ecx)
    int32_t edx
    edx.b = 1
    arg1[0x10] = sub_4adc14(sub_4acb0c+0x48, edx)
    (*(*arg1 + 0x30))()
    
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

// ============================================================
// 函数名称: sub_41c054
// 虚拟地址: 0x41c054
// WARP GUID: 44ab72f8-dd61-5000-acf1-adb99001439d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_41b0b8
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_41c054(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp_1 = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp_1 = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_41b0b8(arg1, 0)
    arg1[9].b = 1
    *(arg1 + 0x19) = 1
    (*(*arg1 + 8))()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    return arg1
}

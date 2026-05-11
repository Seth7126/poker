// ============================================================
// 函数名称: sub_41faf8
// 虚拟地址: 0x41faf8
// WARP GUID: 434c97d0-f81e-5a6f-82b4-33c6a8561584
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_41feac
// ============================================================

int32_t* __convention("regparm")sub_41faf8(int32_t* arg1, int32_t arg2)
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
    
    *(esp_1 - 4) = &arg1[2]
    InitializeCriticalSection()
    void* esp_3 = esp_1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    return arg1
}

// ============================================================
// 函数名称: sub_493fc0
// 虚拟地址: 0x493fc0
// WARP GUID: 5bd9971b-9675-5abe-8b98-97e545720874
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0
// [被调用的父级函数]: sub_49657c, sub_4a36bc, sub_4aa948, sub_495068, sub_4aa9c8
// ============================================================

int32_t* __convention("regparm")sub_493fc0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp_1 = &var_8
    int32_t ecx
    
    if (arg2.b != 0)
        void var_18
        esp_1 = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4030a0(ecx, 0)
    *(esp_1 - 4) = &arg1[1]
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

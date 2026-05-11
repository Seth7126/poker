// ============================================================
// 函数名称: sub_40c8fc
// 虚拟地址: 0x40c8fc
// WARP GUID: dfa2176d-a630-585f-a8ec-11830e4d403b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: InitializeCriticalSection, CreateEventA
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_4054f4
// [被调用的父级函数]: sub_416d6c, sub_4adc14
// ============================================================

int32_t* __convention("regparm")sub_40c8fc(int32_t* arg1, int32_t arg2)
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
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0xffffffff
    *(esp_1 - 0xc) = 0xffffffff
    *(esp_1 - 0x10) = 0
    arg1[7] = CreateEventA()
    *(esp_1 - 4) = 4
    sub_4054f4()
    void* esp_10 = esp_1
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_10
        esp_10 += 0x10
    
    *esp_10
    *(esp_10 + 4)
    return arg1
}

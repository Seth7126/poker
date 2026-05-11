// ============================================================
// 函数名称: sub_493f84
// 虚拟地址: 0x493f84
// WARP GUID: bbe15613-c67a-525c-9750-b04702f9748c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateEventA
// [内部子函数调用]: sub_403428, sub_4033d0
// [被调用的父级函数]: sub_496e00
// ============================================================

int32_t* __convention("regparm")sub_493f84(int32_t* arg1, int32_t arg2)
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
    
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0
    *(esp_1 - 0xc) = 0xffffffff
    *(esp_1 - 0x10) = 0
    void* esp_6 = esp_1
    arg1[1] = CreateEventA()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_6
        esp_6 += 0x10
    
    *esp_6
    *(esp_6 + 4)
    return arg1
}

// ============================================================
// 函数名称: sub_4af43c
// 虚拟地址: 0x4af43c
// WARP GUID: 7033efb6-ac4b-5cce-970e-0bf6872756c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_403e4c, sub_499480
// [被调用的父级函数]: sub_4b17c4
// ============================================================

int32_t* __fastcallsub_4af43c(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, char* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t* esp_1 = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp_1 = &var_1c
        arg3 = sub_4033d0(arg1, arg2)
    
    *(esp_1 - 4) = arg5
    sub_499480(arg1, 0, arg3)
    void* esp_3 = esp_1
    sub_403e4c(&arg3[4], arg4)
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    *(esp_3 + 8)
    return arg3
}

// ============================================================
// 函数名称: sub_412ea8
// 虚拟地址: 0x412ea8
// WARP GUID: 38fde639-c08e-58d2-b6e1-740f95f184c8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_412f70, sub_4030a0, sub_40423c, sub_403428
// [被调用的父级函数]: sub_4100b4
// ============================================================

int32_t* __fastcallsub_412ea8(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
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
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg3 = sub_4033d0(arg1, arg2)
    
    sub_4030a0(arg1, 0)
    *(esp_1 - 4) = arg4
    sub_412f70(sub_40423c(arg5), arg1, arg3)
    void* esp_3 = esp_1
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    *(esp_3 + 8)
    *(esp_3 + 0xc)
    return arg3
}

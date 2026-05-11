// ============================================================
// 函数名称: sub_4a8af0
// 虚拟地址: 0x4a8af0
// WARP GUID: fa89b3b9-721e-5f29-bc8e-e2f2672c3196
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4a87b0, sub_4033d0
// [被调用的父级函数]: sub_4a73d0
// ============================================================

int32_t* __fastcallsub_4a8af0(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5)
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
    *(esp_1 - 8) = arg4
    sub_4a87b0(arg1, 0, arg3)
    void* esp_4 = esp_1
    arg3[8] = 0x8000
    
    if (arg2.b != 0)
        sub_403428(arg3)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_4
        esp_4 += 0x10
    
    *esp_4
    *(esp_4 + 4)
    *(esp_4 + 8)
    return arg3
}

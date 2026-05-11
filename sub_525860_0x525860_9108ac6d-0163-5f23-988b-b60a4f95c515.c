// ============================================================
// 函数名称: sub_525860
// 虚拟地址: 0x525860
// WARP GUID: 9108ac6d-0163-5f23-988b-b60a4f95c515
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402bdc
// [被调用的父级函数]: sub_525ab8
// ============================================================

void* __fastcallsub_525860(char* arg1, int16_t arg2, char* arg3 @ eax, int16_t arg4, char* arg5, int16_t arg6, char* arg7, int16_t arg8, char* arg9, int16_t arg10, char* arg11, int16_t arg12, char* arg13, int16_t arg14, char* arg15, int16_t arg16, void* arg17)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = *arg5
    char var_804[0x100]
    __builtin_memcpy(&var_804, arg5, ecx + 1)
    int32_t ecx_3
    ecx_3.b = *arg7
    char var_704[0x100]
    __builtin_memcpy(&var_704, arg7, ecx_3 + 1)
    int32_t ecx_6
    ecx_6.b = *arg9
    char var_604[0x100]
    __builtin_memcpy(&var_604, arg9, ecx_6 + 1)
    int32_t ecx_9
    ecx_9.b = *arg11
    char var_504[0x100]
    __builtin_memcpy(&var_504, arg11, ecx_9 + 1)
    int32_t ecx_12
    ecx_12.b = *arg13
    char var_404[0x100]
    __builtin_memcpy(&var_404, arg13, ecx_12 + 1)
    int32_t ecx_15
    ecx_15.b = *arg15
    char var_304[0x100]
    __builtin_memcpy(&var_304, arg15, ecx_15 + 1)
    int32_t ecx_18
    ecx_18.b = *arg1
    char var_204[0x100]
    __builtin_memcpy(&var_204, arg1, ecx_18 + 1)
    int32_t ecx_20
    ecx_20.b = *arg3
    char var_104[0x100]
    __builtin_memcpy(&var_104, arg3, ecx_20 + 1)
    *(*(arg17 - 4) + 0x1027c) = 8
    
    if (var_804[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 7
    
    if (var_704[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 6
    
    if (var_604[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 5
    
    if (var_504[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 4
    
    if (var_404[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 3
    
    if (var_304[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 2
    
    if (var_204[0] == 0)
        *(*(arg17 - 4) + 0x1027c) = 1
    
    sub_402bdc(*(arg17 - 4) + 0x105eb, &var_104, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x1063c, &var_204, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x1068d, &var_304, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x106de, &var_404, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x1072f, &var_504, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x10780, &var_604, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x107d1, &var_704, 0x50)
    sub_402bdc(*(arg17 - 4) + 0x10822, &var_804, 0x50)
    *(*(arg17 - 4) + 0x10874) = arg2
    *(*(arg17 - 4) + 0x10876) = arg16
    *(*(arg17 - 4) + 0x10878) = arg14
    *(*(arg17 - 4) + 0x1087a) = arg12
    *(*(arg17 - 4) + 0x1087c) = arg10
    *(*(arg17 - 4) + 0x1087e) = arg8
    *(*(arg17 - 4) + 0x10880) = arg6
    *(*(arg17 - 4) + 0x10882) = arg4
    *(*(arg17 - 4) + 0x1059a) = 0
    void* result = *(arg17 - 4)
    *(result + 0x1026f) = 1
    return result
}

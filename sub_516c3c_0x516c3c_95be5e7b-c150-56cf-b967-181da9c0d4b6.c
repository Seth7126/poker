// ============================================================
// 函数名称: sub_516c3c
// 虚拟地址: 0x516c3c
// WARP GUID: 95be5e7b-c150-56cf-b967-181da9c0d4b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_513ae4, sub_50b624, sub_509dc4, sub_50d2f4, sub_50d9e0, sub_50d988, sub_514c48
// [被调用的父级函数]: sub_509890, sub_516544
// ============================================================

int32_t __stdcallsub_516c3c(void* arg1 @ eax, int32_t* arg2)
{
    // 第一条实际指令: char eax_1
    char eax_1
    
    if (*(arg1 + 0x54) == 1)
        eax_1 = sub_50d2f4()
    
    int32_t ecx
    int32_t edx
    int32_t edi
    
    if (*(arg1 + 0x54) == 1 && eax_1 != 0)
        sub_513ae4(ecx, 1)
        sub_509dc4()
        sub_50b624(7, nullptr, arg2, edi)
        ecx, edx = sub_50d988(*data_530084)
    else if (*(arg1 + 0x54) == 1)
        int32_t ecx_1 = sub_50b624(3, nullptr, arg2, edi)
        
        if (sub_50d9e0(*data_530084) != 0)
            ecx, edx = sub_50d988(*data_530084)
        else
            ecx, edx = sub_513ae4(ecx_1, 0x65)
    
    if (*(arg1 + 0x345) != 0)
        edx.b = 1
        ecx = sub_514c48(arg1)
    
    if (*arg2 != 0x274d)
        *arg2
    else
        sub_513ae4(ecx, 0x65)
        *arg2 = 0
    
    sub_50b624(0xe, nullptr, arg2, edi)
    *arg2 = 0
    return 0
}

// ============================================================
// 函数名称: sub_40d221
// 虚拟地址: 0x40d221
// WARP GUID: 8481f50c-bfa7-5f17-88be-f0028d883aa1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40d1c0, sub_40d278
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40d221(void* arg1 @ ebp, char* arg2 @ edi)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = data_5314f8
    int16_t ecx = 3
    
    if (*(arg1 - 0x1a) != 0)
        ebx.b = data_5314f9
        ecx = 0x40f
    
    if (ebx.b u> ecx.b)
        ebx.b = ecx.b
    
    ebx.b += ecx:1.b
    char* ebx_1 = ebx * 5 + 0x40d28a
    char result
    
    for (int32_t i = 5; i != 0; i -= 1)
        result = *ebx_1
        
        if (result == 0x40)
            break
        
        if (result == 0x24)
            sub_40d278()
        else if (result == 0x2a)
            result = sub_40d1c0(arg1, arg2)
        else
            *arg2 = result
            arg2 = &arg2[1]
        
        ebx_1 = &ebx_1[1]
    
    return result
}

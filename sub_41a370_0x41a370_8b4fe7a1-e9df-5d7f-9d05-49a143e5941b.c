// ============================================================
// 函数名称: sub_41a370
// 虚拟地址: 0x41a370
// WARP GUID: 8b4fe7a1-e9df-5d7f-9d05-49a143e5941b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41e6c8
// ============================================================

char* __convention("regparm")sub_41a370(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    char* result
    
    for (int32_t i = 0xff; i != 0; i -= 1)
        result = arg1 + (i << 2)
        char* ecx_2 = arg1 + i * 3
        ebx.b = ecx_2[2]
        result[2] = ebx.b
        ebx.b = ecx_2[1]
        result[1] = ebx.b
        ecx_2.b = *ecx_2
        *result = ecx_2.b
        result[3] = 0
    
    *(arg1 + 3) = 0
    return result
}

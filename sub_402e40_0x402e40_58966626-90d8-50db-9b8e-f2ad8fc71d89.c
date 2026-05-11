// ============================================================
// 函数名称: sub_402e40
// 虚拟地址: 0x402e40
// WARP GUID: 58966626-90d8-50db-9b8e-f2ad8fc71d89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_418664
// ============================================================

char __convention("regparm")sub_402e40(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    char* var_8 = arg1
    
    if (arg3 u> 0xff)
        arg3 = 0xff
    
    int32_t i
    
    do
        ebx.b = *arg2
        arg2 = &arg2[1]
        
        if (ebx.b == 0)
            break
        
        arg1 = &arg1[1]
        *arg1 = ebx.b
        i = arg3
        arg3 -= 1
    while (i != 1)
    char result = arg1.b - var_8.b
    *var_8 = result
    return result
}

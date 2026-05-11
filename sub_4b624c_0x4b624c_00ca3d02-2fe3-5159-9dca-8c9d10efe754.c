// ============================================================
// 函数名称: sub_4b624c
// 虚拟地址: 0x4b624c
// WARP GUID: 00ca3d02-2fe3-5159-9dca-8c9d10efe754
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404cec, sub_4b6234, sub_4b6154, sub_4b5e24
// [被调用的父级函数]: sub_4b6678
// ============================================================

int32_tsub_4b624c(int16_t* arg1, int16_t* arg2, char* arg3)
{
    // 第一条实际指令: int16_t edx = *arg2
    int16_t edx = *arg2
    int32_t* var_8
    
    if (edx != 9)
        if (edx != 0x4009)
            sub_4b6234()
            noreturn
        
        var_8 = **(arg2 + 8)
    else
        var_8 = *(arg2 + 8)
    
    int32_t ecx
    ecx.b = arg3[2]
    int32_t eax_4
    eax_4.b = arg3[1]
    void var_108
    int32_t ecx_2 = sub_4b6154(ecx + 1, &arg3[eax_4 + 3], var_8, &var_108)
    
    if (arg1 != 0)
        ecx_2 = sub_404cec(arg1)
    
    void arg_10
    void* var_114_1 = &arg_10
    int16_t* var_118 = arg1
    return sub_4b5e24(var_8, arg3, ecx_2)
}

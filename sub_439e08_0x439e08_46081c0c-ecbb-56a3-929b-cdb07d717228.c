// ============================================================
// 函数名称: sub_439e08
// 虚拟地址: 0x439e08
// WARP GUID: 46081c0c-ecbb-56a3-929b-cdb07d717228
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_43c480, sub_43d3c8, sub_43c950, sub_439630
// [被调用的父级函数]: sub_43a014, sub_439f30
// ============================================================

int32_t* __convention("regparm")sub_439e08(void* arg1)
{
    // 第一条实际指令: int32_t* ebx = *(arg1 + 0x64)
    int32_t* ebx = *(arg1 + 0x64)
    
    if (ebx != 0 && sub_403248(ebx, 0x438b44) != 0)
        int32_t esi
        int32_t edi
        sub_43c480(arg1, 0, esi, edi)
        sub_43c950(arg1, 0)
    
    void* ebx_1 = *(arg1 + 0x64)
    char eax_7
    
    if (ebx_1 != 0)
        eax_7 = sub_43d3c8(ebx_1)
    
    if (ebx_1 != 0 && eax_7 != 0)
        eax_7 = 1
    else
        eax_7 = 0
    
    char var_9 = eax_7
    return sub_439630(0x439dec, *(arg1 + 0x5c), arg1)
}

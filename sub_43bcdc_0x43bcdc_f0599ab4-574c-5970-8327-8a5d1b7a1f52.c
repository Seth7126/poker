// ============================================================
// 函数名称: sub_43bcdc
// 虚拟地址: 0x43bcdc
// WARP GUID: f0599ab4-574c-5970-8327-8a5d1b7a1f52
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43bcdc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char eax_1
    char eax_1
    
    if (*(arg1 + 0x58) == 0)
        eax_1 = sub_403248(*(arg1 + 4), 0x438a50)
    
    void* result
    
    if (*(arg1 + 0x58) != 0 || eax_1 == 0)
        result = arg1
    else
        result = nullptr
    
    if (*(arg1 + 0x7a) == 0)
        return result
    
    *(arg1 + 0x7c)
    return (*(arg1 + 0x78))(arg2)
}

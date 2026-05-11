// ============================================================
// 函数名称: sub_4f0c7c
// 虚拟地址: 0x4f0c7c
// WARP GUID: fa0f9b30-02a6-5ca9-a741-cd4dadcc1683
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4f55c0, sub_4d0ae4, sub_4f73cc, sub_4f49dc, sub_4f92cc, sub_4f9424, sub_4f6504, sub_4ff3d8, sub_4f8b60, sub_4f9398, sub_4f89ac, sub_50003c, sub_4f4638, sub_4f93fc, sub_4f753c
// ============================================================

void* __convention("regparm")sub_4f0c7c(int32_t arg1)
{
    // 第一条实际指令: char ebx = 0
    char ebx = 0
    
    if (*(*data_530304 + 0xcf4) != 0 && arg1 == 0xb50)
        ebx = 1
    
    void* result = data_5304ec
    
    if (*result != 0 && arg1 == 0xbe2)
        ebx = 1
    
    if (arg1 == 0xde1)
        result = *data_530304
        
        if (*(result + 0xce9) != 0)
            ebx = 1
    
    if (ebx == 0)
        result = (*data_530034)(arg1)
    
    if (ebx == 0)
        return result
    
    return (*data_53006c)(arg1)
}

// ============================================================
// 函数名称: sub_44a04c
// 虚拟地址: 0x44a04c
// WARP GUID: 464e2615-79e3-5c0a-814a-f2974aedb53c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403018, sub_4030d0
// [被调用的父级函数]: sub_44a0a0
// ============================================================

int32_t __convention("regparm")sub_44a04c(void* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    
    if (ebx == 0)
        ebx = data_52e978
    
    int32_t* esi = *(*(arg2 - 4) + 0x74)
    int32_t result
    
    if (esi != 0)
        result = sub_403018(esi)
    
    if (esi == 0 || ebx != result)
        sub_4030d0(*(*(arg2 - 4) + 0x74))
        *(arg2 - 4)
        int32_t edx_1
        edx_1.b = 1
        result = (*(ebx + 0x2c))()
        *(*(arg2 - 4) + 0x74) = result
    
    return result
}

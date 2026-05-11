// ============================================================
// 函数名称: sub_459a30
// 虚拟地址: 0x459a30
// WARP GUID: 6998a243-fe37-5897-a435-18cbd9a18fe4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_459a70, sub_459b60
// ============================================================

void* __convention("regparm")sub_459a30(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    void* result = *(arg1 + 0x1be)
    int32_t edx = *(arg1 + 0x6c)
    int32_t i = 0
    int32_t* esi = result + 0x44
    
    while (i s< *(arg1 + 0x74))
        result = (*(*(arg1 + 4) + 4))(edx * 2 + 4)
        *esi = result
        i += 1
        esi = &esi[1]
    
    return result
}

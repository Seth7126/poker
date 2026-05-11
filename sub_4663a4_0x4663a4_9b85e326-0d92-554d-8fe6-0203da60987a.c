// ============================================================
// 函数名称: sub_4663a4
// 虚拟地址: 0x4663a4
// WARP GUID: 9b85e326-0d92-554d-8fe6-0203da60987a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_466208, sub_466138
// [被调用的父级函数]: sub_466418
// ============================================================

int32_t __convention("regparm")sub_4663a4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (sub_466208(arg1) == 0)
    if (sub_466208(arg1) == 0)
        return 0
    
    char* edx = *arg1
    *arg1 += 1
    *edx = 0xff
    int32_t temp0 = arg1[1]
    arg1[1] -= 1
    
    if (temp0 == 1 && sub_466138(arg1) == 0)
        return 0
    
    char* ecx = *arg1
    *arg1 += 1
    *ecx = arg2 - 0x30
    int32_t temp1 = arg1[1]
    arg1[1] -= 1
    
    if (temp1 == 1 && sub_466138(arg1) == 0)
        return 0
    
    int32_t i = 0
    void* eax_9 = &arg1[4]
    
    while (i s< *(arg1[8] + 0xe9))
        i += 1
        *eax_9 = 0
        eax_9 += 4
    
    return 1
}

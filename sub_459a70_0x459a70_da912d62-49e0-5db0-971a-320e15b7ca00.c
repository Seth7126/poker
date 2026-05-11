// ============================================================
// 函数名称: sub_459a70
// 虚拟地址: 0x459a70
// WARP GUID: da912d62-49e0-5db0-971a-320e15b7ca00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_459290, sub_4594a0, sub_459a30, sub_4533f4
// [被调用的父级函数]: sub_459b60
// ============================================================

void* __convention("regparm")sub_459a70(int32_t* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1be)
    void* esi = *(arg1 + 0x1be)
    void* result = *(esi + 0x10)
    arg1[0x21] = result
    arg1[0x20] = *(esi + 0x14)
    int32_t ecx = arg1[0x15]
    
    if (ecx u< 1)
        if (arg1[0x1d] != 3)
            *(esi + 4) = sub_459508
        else
            *(esi + 4) = sub_4595a8
    else if (ecx == 1)
        if (arg1[0x1d] != 3)
            *(esi + 4) = sub_459644
        else
            *(esi + 4) = sub_459758
        
        result = nullptr
        *(esi + 0x30) = 0
        
        if (*(esi + 0x1c) == 0)
            result = arg1
            sub_459290(result)
        
        if (*(esi + 0x34) == 0)
            return sub_4594a0(arg1)
    else
        if (ecx != 2)
            *(*arg1 + 0x14) = 0x2f
            return (**arg1)()
        
        *(esi + 4) = sub_459870
        *(esi + 0x54) = 0
        
        if (*(esi + 0x44) == 0)
            sub_459a30(arg1)
        
        int32_t ebp_1 = arg1[0x1b]
        result = esi + 0x44
        void* result_1 = result
        int32_t i = 0
        
        while (i s< arg1[0x1d])
            result = sub_4533f4(*result_1, 0, ebp_1 * 2 + 4)
            i += 1
            result_1 += 4
    
    return result
}

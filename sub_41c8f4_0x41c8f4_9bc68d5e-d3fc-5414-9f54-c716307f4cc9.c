// ============================================================
// 函数名称: sub_41c8f4
// 虚拟地址: 0x41c8f4
// WARP GUID: 9bc68d5e-d3fc-5414-9f54-c716307f4cc9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CopyEnhMetaFileA
// [内部子函数调用]: sub_4030a0, sub_41c3a4, sub_41d040, sub_41d044
// [被调用的父级函数]: sub_41c7a4, sub_41c7e0
// ============================================================

void* __convention("regparm")sub_41c8f4(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x20)
    void* result = *(arg1 + 0x20)
    
    if (result == 0)
        return sub_41c3a4(arg1)
    
    if (*(result + 4) s> 1)
        int32_t edx
        edx.b = 1
        int32_t ecx
        void* result_1 = sub_4030a0(ecx, edx)
        HENHMETAFILE hEnh = *(*(arg1 + 0x20) + 8)
        
        if (hEnh != 0)
            *(result_1 + 8) = CopyEnhMetaFileA(hEnh, nullptr)
        
        *(result_1 + 0x10) = *(*(arg1 + 0x20) + 0x10)
        *(result_1 + 0xc) = *(*(arg1 + 0x20) + 0xc)
        void* eax_8
        eax_8.w = *(*(arg1 + 0x20) + 0x18)
        *(result_1 + 0x18) = eax_8.w
        *(result_1 + 0x1c) = *(*(arg1 + 0x20) + 0x1c)
        *(result_1 + 0x20) = *(*(arg1 + 0x20) + 0x20)
        sub_41d044(*(arg1 + 0x20))
        result = result_1
        *(arg1 + 0x20) = result
        sub_41d040(result)
    
    return result
}

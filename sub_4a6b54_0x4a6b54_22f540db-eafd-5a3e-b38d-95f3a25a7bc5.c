// ============================================================
// 函数名称: sub_4a6b54
// 虚拟地址: 0x4a6b54
// WARP GUID: 22f540db-eafd-5a3e-b38d-95f3a25a7bc5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a654c, sub_4a6308
// [被调用的父级函数]: sub_4a90cc
// ============================================================

void __convention("regparm")sub_4a6b54(void* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = *(arg1 + 0x74)
    void* edx
    
    if (ebx.b - 1 u< 2)
        sub_4a6308(arg1, edx)
        return 
    
    void* ecx
    int32_t esi
    int32_t edi
    
    if (ebx.b == 3)
        sub_4a654c(arg1, edx, ecx, esi, edi)
}

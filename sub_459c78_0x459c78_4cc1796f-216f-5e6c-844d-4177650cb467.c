// ============================================================
// 函数名称: sub_459c78
// 虚拟地址: 0x459c78
// WARP GUID: 4cc1796f-216f-5e6c-844d-4177650cb467
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45a09c
// ============================================================

void* __convention("regparm")sub_459c78(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    void* result = nullptr
    int32_t ecx = 0
    
    if (arg2 s> 0)
        do
            int32_t esi_1 = *(arg1 + 0x1c)
            
            if (ebx s< esi_1 && *(arg1 + 0x18) s> 0)
                result = arg1
                ebx = esi_1
            
            ecx += 1
            arg1 += 0x20
        while (arg2 s> ecx)
    
    return result
}

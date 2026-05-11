// ============================================================
// 函数名称: sub_51b7e0
// 虚拟地址: 0x51b7e0
// WARP GUID: ae2e7fd6-8ca5-559f-83c5-01838df6222c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_51c744
// ============================================================

int32_t __convention("regparm")sub_51b7e0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t i_1 = sx.d(*(arg1 + 0x490a))
    
    if (i_1 s> 0)
        int32_t esi_1 = 1
        int32_t i
        
        do
            if (arg2 == sx.d(*(arg1 + (esi_1 << 2) + 0x4670)))
                result.b = 1
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}

// ============================================================
// 函数名称: sub_5182a4
// 虚拟地址: 0x5182a4
// WARP GUID: b2d825f9-caf0-5054-a5a2-f97c2f642317
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4bca48, sub_4c4904, sub_4bf070
// ============================================================

int32_t __convention("regparm")sub_5182a4(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t result = 0
    int32_t i_1 = sx.d(*(arg1 + 0x100))
    
    if (i_1 s> 0)
        int32_t i
        
        do
            ebx.b = *arg1
            
            if (ebx.b == arg2.b)
                ebx.b = *(arg1 + 1)
                
                if (ebx.b == arg2:1.b)
                    result.b = 1
                    break
            
            arg1 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}

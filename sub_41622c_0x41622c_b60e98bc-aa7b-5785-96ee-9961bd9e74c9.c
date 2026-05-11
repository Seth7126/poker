// ============================================================
// 函数名称: sub_41622c
// 虚拟地址: 0x41622c
// WARP GUID: b60e98bc-aa7b-5785-96ee-9961bd9e74c9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4089dc, sub_410524
// [被调用的父级函数]: sub_4301a4, sub_4155c8, sub_4131b4, sub_416194
// ============================================================

void* const __convention("regparm")sub_41622c(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    
    if (arg2 != 0 && *(arg1 + 0x10) != 0)
        int32_t ebx_2 = *(*(arg1 + 0x10) + 8) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t ebp_1 = 0
            int32_t i
            
            do
                void* const result = sub_410524(*(arg1 + 0x10), ebp_1)
                
                if (sub_4089dc(*(result + 8), arg2) != 0)
                    return result
                
                ebp_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return nullptr
}

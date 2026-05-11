// ============================================================
// 函数名称: sub_443af0
// 虚拟地址: 0x443af0
// WARP GUID: a7a27624-ce55-5bc9-aa75-32ad7ecfb062
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_447210, sub_447224
// [被调用的父级函数]: sub_4461e0, sub_44370c, sub_444fdc
// ============================================================

void* const __convention("regparm")sub_443af0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    
    if (*(arg1 + 0x217) == 2 && *(arg1 + 0x23c) != 0)
        int32_t ebx_2 = sub_447224(data_5317dc) - 1
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t esi_1 = 0
            int32_t i
            
            do
                void* const result = sub_447210(data_5317dc, esi_1)
                
                if (*(result + 0x217) == 1)
                    edi -= 1
                    
                    if (edi s< 0)
                        return result
                
                esi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    return nullptr
}

// ============================================================
// 函数名称: sub_446ed4
// 虚拟地址: 0x446ed4
// WARP GUID: a73a2c57-5248-529b-8b13-979974c8341f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b690, sub_4301c8, sub_4301dc, sub_430e08
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_446ed4(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = sub_430e08(arg1)
    int32_t* result = sub_430e08(arg1)
    
    if ((arg1[8].b & 8) == 0)
        result = sub_4301c8(arg1)
        
        if (result - 1 s>= 0)
            void* esi_3 = result
            int32_t edi_1 = 0
            void* i
            
            do
                int32_t* eax_3 = sub_4301dc(arg1, edi_1)
                int32_t edx_1
                edx_1.b = *(arg1 + 0x47)
                result = sub_42b690(eax_3, edx_1.b)
                edi_1 += 1
                i = esi_3
                esi_3 -= 1
            while (i != 1)
    
    return result
}

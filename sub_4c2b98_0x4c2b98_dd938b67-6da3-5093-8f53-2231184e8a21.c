// ============================================================
// 函数名称: sub_4c2b98
// 虚拟地址: 0x4c2b98
// WARP GUID: dd938b67-6da3-5093-8f53-2231184e8a21
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4c5c10, sub_4b8c38
// ============================================================

int32_t __convention("regparm")sub_4c2b98(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    arg1.b = 1
    int32_t i_1 = *data_5300d0
    
    if (i_1 s> 0)
        int32_t edx_1 = 1
        int32_t i
        
        do
            if (edi != edx_1)
                bool o_1 = unimplemented  {imul ebx, edx, 0x41}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                char* esi_3 = *data_5301f4 + edx_1 * 0x208 + 0x1fea0
                
                if (*esi_3 == 1 && esi_3[0x1e4] == 0)
                    arg1 = 0
            
            edx_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return arg1
}

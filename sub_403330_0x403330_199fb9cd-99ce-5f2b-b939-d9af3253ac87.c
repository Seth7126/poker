// ============================================================
// 函数名称: sub_403330
// 虚拟地址: 0x403330
// WARP GUID: 199fb9cd-99ce-5f2b-b939-d9af3253ac87
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4137d4
// ============================================================

void** __convention("regparm")sub_403330(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = *arg2
    void** result
    
    while (true)
        int16_t* esi_1 = *(arg1 - 0x34)
        
        if (esi_1 != 0)
            int32_t i_1
            i_1.w = *esi_1
            void* esi_2 = &esi_1[1]
            int32_t i
            
            do
                int32_t ecx
                ecx.b = *(esi_2 + 6)
                
                if (ecx.b == ebx.b)
                    ecx:1.b = 0
                    
                    while (true)
                        ebx.b = *(esi_2 + ecx + 6)
                        ebx.b ^= arg2[ecx]
                        ebx.b &= 0xdf
                        
                        if (ebx.b != 0)
                            ebx.b = *arg2
                            break
                        
                        int32_t temp1_1 = ecx
                        ecx -= 1
                        
                        if (temp1_1 == 1)
                            return *(esi_2 + 2)
                
                ecx.w = *esi_2
                esi_2 += ecx
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        result = *(arg1 - 0x24)
        
        if (result == 0)
            break
        
        arg1 = *result
    
    return result
}

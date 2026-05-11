// ============================================================
// 函数名称: sub_403380
// 虚拟地址: 0x403380
// WARP GUID: e3611441-d380-5dc3-810c-9b254ab01c20
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4163fc
// ============================================================

int32_t* __convention("regparm")sub_403380(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = *arg2
    int32_t* var_10 = arg1
    
    do
        void* eax = *arg1
        int16_t* esi_1 = *(eax - 0x38)
        
        if (esi_1 != 0)
            int32_t j_1
            j_1.w = *esi_1
            void* esi_2 = &esi_1[3]
            int32_t j
            
            do
                int32_t ecx
                ecx.b = *(esi_2 + 6)
                
                if (ecx.b == ebx.b)
                    while (true)
                        ebx.b = *(esi_2 + ecx + 6)
                        ebx.b ^= arg2[ecx]
                        ebx.b &= 0xdf
                        
                        if (ebx.b != 0)
                            ebx.b = *arg2
                            ecx.b = *(esi_2 + 6)
                            break
                        
                        int32_t temp1_1 = ecx
                        ecx -= 1
                        
                        if (temp1_1 == 1)
                            return *esi_2 + var_10
                
                esi_2 = esi_2 + ecx + 7
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        arg1 = *(eax - 0x24)
    while (arg1 != 0)
    
    return arg1
}

// ============================================================
// 函数名称: sub_40dfbc
// 虚拟地址: 0x40dfbc
// WARP GUID: d9b4c5c8-56ee-5c5d-8ed3-db7c598c9eba
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_40e008
// ============================================================

int32_t __convention("regparm")sub_40dfbc(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    
    if (arg2 != 0)
        int32_t ecx_1
        ecx_1.b = *(arg1 + 1)
        void* eax_1 = **(arg1 + ecx_1 + 0xb)
        ecx_1.b = *(eax_1 + 1)
        void* esi_1 = eax_1 + ecx_1 + 0xf
        int32_t edi_1 = *(eax_1 + ecx_1 + 7)
        int32_t result = 0
        
        do
            ecx_1.b = *esi_1
            
            if (ecx_1 == *(arg2 - 4))
                while (true)
                    ebx.b = *(arg2 + ecx_1 - 1)
                    ebx.b ^= *(esi_1 + ecx_1)
                    
                    if ((ebx.b & 0xdf) != 0)
                        break
                    
                    int32_t temp0_1 = ecx_1
                    ecx_1 -= 1
                    
                    if (temp0_1 == 1)
                        return result
                
                ecx_1.b = *esi_1
            
            result += 1
            esi_1 = esi_1 + ecx_1 + 1
        while (result s<= edi_1)
    
    return 0xffffffff
}

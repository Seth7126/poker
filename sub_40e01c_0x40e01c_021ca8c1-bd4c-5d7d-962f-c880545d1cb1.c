// ============================================================
// 函数名称: sub_40e01c
// 虚拟地址: 0x40e01c
// WARP GUID: 021ca8c1-bd4c-5d7d-962f-c880545d1cb1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_41464c
// ============================================================

void* __convention("regparm")sub_40e01c(void* arg1, char* arg2)
{
    // 第一条实际指令: char* ecx = arg2
    char* ecx = arg2
    
    if (arg2 != 0)
        ecx.b = arg2[0xfffffffc]
        ecx:1.b = *arg2
        ecx &= 0xdfff
    
    void* result
    
    while (true)
        int32_t ebx_1
        ebx_1.b = *(arg1 + 1)
        void* esi_1 = arg1 + ebx_1 + 2
        ebx_1.b = *(esi_1 + 0xa)
        uint32_t i_1 = zx.d(*(esi_1 + ebx_1 + 0xb))
        
        if (i_1 != 0)
            result = esi_1 + ebx_1 + 0xd
            uint32_t i
            
            do
                ebx_1.w = *(result + 0x1a)
                ebx_1:1.b &= 0xdf
                
                if (ebx_1 == ecx)
                    ebx_1:1.b = 0
                    
                    while (true)
                        ecx:1.b = arg2[ebx_1 - 1]
                        ecx:1.b ^= *(result + ebx_1 + 0x1a)
                        
                        if ((ecx:1.b & 0xdf) != 0)
                            break
                        
                        int32_t temp1_1 = ebx_1
                        ebx_1 -= 1
                        
                        if (temp1_1 == 1)
                            return result
                    
                    ecx:1.b = *arg2
                    ecx:1.b &= 0xdf
                    ebx_1.b = *(result + 0x1a)
                
                ebx_1:1.b = 0
                i = i_1
                i_1 -= 1
                result = result + ebx_1 + 0x1b
            while (i != 1)
        
        result = *(esi_1 + 4)
        
        if (result == 0)
            break
        
        arg1 = *result
    
    return result
}

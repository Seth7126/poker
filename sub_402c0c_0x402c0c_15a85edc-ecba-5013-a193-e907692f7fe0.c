// ============================================================
// 函数名称: sub_402c0c
// 虚拟地址: 0x402c0c
// WARP GUID: 15a85edc-ecba-5013-a193-e907692f7fe0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_449678
// ============================================================

int32_t __convention("regparm")sub_402c0c(char* arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = *arg1
    int32_t edx
    edx.b = *arg2
    void* esi_1 = &arg1[1]
    void* edi_1 = &arg2[1]
    int32_t result = eax - edx
    
    if (eax u<= edx)
        edx += result
    
    uint32_t edx_1 = edx u>> 2
    int32_t ecx
    
    if (edx_1 == 0)
    label_402c50:
        int32_t edx_4 = edx & 3
        
        if (edx_4 == 0)
            return result * 2
        
        ecx.b = *esi_1
        
        if (ecx.b == *edi_1)
            if (edx_4 == 1)
                return result * 2
            
            ecx.b = *(esi_1 + 1)
            
            if (ecx.b == *(edi_1 + 1))
                if (edx_4 == 2)
                    return result * 2
                
                ecx.b = *(esi_1 + 2)
                
                if (ecx.b == *(edi_1 + 2))
                    return result * 2
    else
        while (true)
            ecx = *esi_1
            int32_t ebx_1 = *edi_1
            
            if (ecx == ebx_1)
                int32_t edx_2 = edx_1 - 1
                
                if (edx_1 == 1)
                    esi_1 += 4
                    edi_1 += 4
                    goto label_402c50
                
                ecx = *(esi_1 + 4)
                ebx_1 = *(edi_1 + 4)
                
                if (ecx == ebx_1)
                    esi_1 += 8
                    edi_1 += 8
                    edx_1 = edx_2 - 1
                    
                    if (edx_2 == 1)
                        goto label_402c50
                    
                    continue
            
            if (ecx.b != ebx_1.b)
                break
            
            break
    return result
}

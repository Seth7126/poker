// ============================================================
// 函数名称: sub_40d3f5
// 虚拟地址: 0x40d3f5
// WARP GUID: 2d79097a-b82f-5f7b-b737-38eec2a0e602
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_40d3f5(void* arg1 @ ebp, char* arg2 @ esi)
{
    // 第一条实际指令: *(arg1 - 0x10) = arg2
    *(arg1 - 0x10) = arg2
    int32_t ebx = 0x7fff
    int32_t ecx = 0
    int32_t edx = 0
    *(arg1 - 0x18) = 0xffffffff
    *(arg1 - 8) = 0
    *(arg1 - 0xc) = 0
    
    while (true)
    label_40d40f:
        int16_t eax
        eax.b = *arg2
        arg2 = &arg2[1]
        
        while (true)
            if (eax.b == 0x23)
                edx += 1
                break
            
            if (eax.b == 0x30)
                if (edx s< ebx)
                    ebx = edx
                
                edx += 1
                ecx = edx
                break
            
            if (eax.b == 0x2e)
                if (*(arg1 - 0x18) != 0xffffffff)
                    break
                
                *(arg1 - 0x18) = edx
                break
            
            if (eax.b == 0x2c)
                *(arg1 - 8) = 1
                break
            
            if (eax.b == 0x27 || eax.b == 0x22)
                eax:1.b = eax.b
                
                do
                    eax.b = *arg2
                    arg2 = &arg2[1]
                    
                    if (eax.b == eax:1.b)
                        goto label_40d40f
                    
                    eax.b = eax.b
                while (eax.b != 0)
            else if (eax.b == 0x45 || eax.b == 0x65)
                eax.b = *arg2
                arg2 = &arg2[1]
                
                if (eax.b != 0x2d && eax.b != 0x2b)
                    continue
                
                *(arg1 - 0xc) = 1
                
                do
                    eax.b = *arg2
                    arg2 = &arg2[1]
                while (eax.b == 0x30)
                
                continue
            else if (eax.b != 0x3b)
                eax.b = eax.b
                
                if (eax.b != 0)
                    break
            
            *(arg1 - 0x14) = edx
            
            if (*(arg1 - 0x18) == 0xffffffff)
                *(arg1 - 0x18) = edx
            
            int32_t eax_1 = *(arg1 - 0x18)
            int32_t eax_2 = eax_1 - ecx
            
            if (eax_1 s> ecx)
                eax_2 = 0
            
            *(arg1 - 0x20) = eax_2
            int32_t eax_3 = *(arg1 - 0x18)
            int32_t result = eax_3 - ebx
            
            if (eax_3 s< ebx)
                result = 0
            
            *(arg1 - 0x1c) = result
            return result
}

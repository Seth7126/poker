// ============================================================
// 函数名称: sub_4569a0
// 虚拟地址: 0x4569a0
// WARP GUID: 0a930ad7-7e90-5249-85b7-496579ce8e3e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_456b70
// ============================================================

void* __convention("regparm")sub_4569a0(int32_t* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x196)
    void* esi = *(arg1 + 0x196)
    
    if (*(esi + 8) == 0)
        if (arg1[0x14] != 0 && arg1[0x21] == 0)
            if (arg1[0x16] != 0 && arg1[0x1a] != 0)
                *(arg1 + 0x1be) = *(esi + 0x18)
                *(esi + 8) = 1
            else if (arg1[0x18] == 0)
                *(*arg1 + 0x14) = 0x2d
                (**arg1)()
            else
                *(arg1 + 0x1be) = *(esi + 0x14)
        
        (**(arg1 + 0x1b2))()
        (*(*(arg1 + 0x19e) + 8))()
        
        if (arg1[0x10] == 0)
            if (*(esi + 0x10) == 0)
                (**(arg1 + 0x1ba))()
            
            (**(arg1 + 0x1b6))()
            
            if (arg1[0x14] != 0)
                *(esi + 8)
                (**(arg1 + 0x1be))()
            
            *(esi + 8)
            (**(arg1 + 0x1a2))()
            (**(arg1 + 0x19a))()
    else
        *(esi + 8) = 0
        (**(arg1 + 0x1be))()
        (**(arg1 + 0x1a2))()
        (**(arg1 + 0x19a))()
    
    void* result = arg1[2]
    
    if (result != 0)
        *(result + 0xc) = *(esi + 0xc)
        int32_t ecx_7 = 2
        
        if (*(esi + 8) == 0)
            ecx_7 = 1
        
        result = arg1[2]
        *(result + 0x10) = ecx_7 + *(esi + 0xc)
        
        if (arg1[0xf] != 0 && *(*(arg1 + 0x1a6) + 0x14) == 0)
            int32_t ecx_9 = 2
            
            if (arg1[0x1a] == 0)
                ecx_9 = 1
            
            result = arg1[2]
            *(result + 0x10) += ecx_9
    
    return result
}
